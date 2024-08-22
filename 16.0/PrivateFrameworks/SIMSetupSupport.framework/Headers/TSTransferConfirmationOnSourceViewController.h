// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRANSFERCONFIRMATIONONSOURCEVIEWCONTROLLER_H
#define TSTRANSFERCONFIRMATIONONSOURCEVIEWCONTROLLER_H

@class CTPlanList, CTDeviceIdentifier, NSString;
@protocol UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSTransferConfirmationOnSourceViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>

 {
    CTPlanList *_transferPlanList;
    CTDeviceIdentifier *_deviceId;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)userInteractionEnabled;
-(id)initWithSelectedPlansNeedingConsent:(id)arg0 deviceId:(id)arg1 ;
-(void)_cancelButtonTapped;
-(void)viewDidLoad;


@end


#endif