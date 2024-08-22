// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIMANATEESTATEVALIDATOR_H
#define AAUIMANATEESTATEVALIDATOR_H

@class UIViewController, CDPUIDeviceToDeviceEncryptionFlowContext;

#import <Foundation/Foundation.h>


@interface AAUIManateeStateValidator : NSObject {
    UIViewController *_presentingViewController;
    CDPUIDeviceToDeviceEncryptionFlowContext *_flowContext;
}




-(id)initWithFlowContext:(id)arg0 withPresentingViewController:(id)arg1 ;
-(void)_repairManateeWithCompletion:(id)arg0 ;
-(void)repairIfPrimaryAppleAccountIsCDP:(id)arg0 ;
-(void)verifyAndRepairManateeWithCompletion:(id)arg0 ;


@end


#endif