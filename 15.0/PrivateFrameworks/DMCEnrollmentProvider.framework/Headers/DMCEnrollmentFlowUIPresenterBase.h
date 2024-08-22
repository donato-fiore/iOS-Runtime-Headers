// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTFLOWUIPRESENTERBASE_H
#define DMCENROLLMENTFLOWUIPRESENTERBASE_H

@class DMCActivityViewController, UIViewController, NSString, DMCDismissalAwareNavigationController, DMCPINEntryViewController;
@protocol DevicePINControllerDelegate;

#import <Foundation/Foundation.h>


@interface DMCEnrollmentFlowUIPresenterBase : NSObject <DevicePINControllerDelegate>



@property (retain, nonatomic) DMCActivityViewController *activityController; // ivar: _activityController
@property (weak) UIViewController *baseViewController; // ivar: _baseViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DMCDismissalAwareNavigationController *navigationController; // ivar: _navigationController
@property (copy, nonatomic) id *passcodeCompletionHandler; // ivar: _passcodeCompletionHandler
@property (retain, nonatomic) DMCPINEntryViewController *pinEntryViewController; // ivar: _pinEntryViewController
@property (readonly) Class superclass;


-(id)initWithBaseViewController:(id)arg0 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)dismiss;
-(void)presentActivityPageWithText:(id)arg0 showButtomView:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 ;
-(void)pushViewController:(id)arg0 foundationViewController:(id)arg1 ;
-(void)requestDevicePasscodeWithDescriptionText:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif