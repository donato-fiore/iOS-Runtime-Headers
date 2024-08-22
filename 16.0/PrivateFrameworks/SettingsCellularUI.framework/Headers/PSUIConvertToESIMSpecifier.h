// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICONVERTTOESIMSPECIFIER_H
#define PSUICONVERTTOESIMSPECIFIER_H

@class PSSpecifier, TSSIMSetupFlow, NSString, PSListController;
@protocol TSSIMSetupDelegate;



@interface PSUIConvertToESIMSpecifier : PSSpecifier <TSSIMSetupDelegate>

 {
    TSSIMSetupFlow *_flow;
    NSString *_phoneNumber;
    NSString *_carrierName;
    PSListController *_hostController;
    BOOL _isViewControllerPopNeeded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithPhoneNumber:(id)arg0 carrierName:(id)arg1 hostController:(id)arg2 isViewControllerPopNeeded:(BOOL)arg3 ;
-(void)_convertToeSIM;
-(void)_showWifiAlert;
-(void)convertToeSIMCellPressed:(id)arg0 ;
-(void)dealloc;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif