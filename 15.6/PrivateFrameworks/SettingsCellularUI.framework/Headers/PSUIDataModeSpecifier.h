// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIDATAMODESPECIFIER_H
#define PSUIDATAMODESPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, CTServiceDescriptor, CoreTelephonyClient, PSListController, Logger, NSString;
@protocol Loggable;



@interface PSUIDataModeSpecifier : PSSpecifier <Loggable>

 {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_hostController;
    Logger *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL showDrillDown; // ivar: _showDrillDown
@property (readonly) Class superclass;


-(BOOL)isHighDataModeSupported;
-(id)dataModeFromNumber:(id)arg0 ;
-(id)getDataMode:(id)arg0 ;
-(id)getLogger;
-(id)initWithCTClient:(id)arg0 hostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)interfaceCostFromBool:(BOOL)arg0 ;
-(id)isInterfaceCostExpensive:(id)arg0 ;
-(id)isLowDataModeEnabled:(id)arg0 ;
-(id)lowDataModeFromBool:(BOOL)arg0 ;
-(id)lowDataModeGroupSpecifier;
-(void)populateDrillDownSpecifiers;
-(void)prepareDataModeDrillDown;
-(void)prepareLowDataModeSwitch;
-(void)setDataMode:(id)arg0 specifier:(id)arg1 ;
-(void)setFooterText;
-(void)setInterfaceCostExpensive:(id)arg0 specifier:(id)arg1 ;
-(void)setLowDataMode:(id)arg0 specifier:(id)arg1 ;


@end


#endif