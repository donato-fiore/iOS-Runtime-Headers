// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPROXIMITYWAITINGVIEWCONTROLLER_H
#define TSPROXIMITYWAITINGVIEWCONTROLLER_H

@class NSString;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"
#import "SSProximityDevice.h"

@interface TSProximityWaitingViewController : TSOBWelcomeController <TSSetupFlowItem>



@property (weak) SSProximityDevice *btServer; // ivar: _btServer
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isStartOverRequiredOnBackButtonTapped;
-(id)initWithBTServer:(id)arg0 transferBackPhoneNumber:(id)arg1 ;


@end


#endif