// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUISMARTCHARGEMANAGERUNSUPPORTED_H
#define POWERUISMARTCHARGEMANAGERUNSUPPORTED_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, PowerUISmartChargeManaging;

#import <Foundation/Foundation.h>


@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


+(id)manager;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)client:(id)arg0 setMCMState:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)client:(id)arg0 setState:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)enterDevelopmentMode;
-(void)forceModelUpdate;
-(void)fullChargeDeadlineWithHandler:(id)arg0 ;
-(void)isMCMCurrentlyEnabledWithHandler:(id)arg0 ;
-(void)isOBCEngagedWithHandler:(id)arg0 ;
-(void)isOBCSupportedWithHandler:(id)arg0 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(id)arg0 ;
-(void)powerLogStatusWithHandler:(id)arg0 ;
-(void)resetDevelopmentMode;
-(void)shouldMCMBeDisplayedWithHandler:(id)arg0 ;
-(void)simulateCurrentOutputAsOfDate:(id)arg0 overrideAllSignals:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)statusWithHandler:(id)arg0 ;


@end


#endif