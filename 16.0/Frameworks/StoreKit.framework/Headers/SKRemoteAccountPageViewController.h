// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKREMOTEACCOUNTPAGEVIEWCONTROLLER_H
#define SKREMOTEACCOUNTPAGEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKUIClientAccountPageViewController;


#import "SKAccountPageViewController.h"

@interface SKRemoteAccountPageViewController : UIRemoteViewController <SKUIClientAccountPageViewController>



@property (weak, nonatomic) SKAccountPageViewController *accountPageViewController; // ivar: _accountPageViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)disconnect;
-(void)didFinishLoading;
-(void)didPrepareWithResult:(id)arg0 error:(id)arg1 ;
-(void)dismissBridgedViewController;
-(void)dismissViewControllerWithResult:(id)arg0 error:(id)arg1 ;
-(void)financeInterruptionResolved:(BOOL)arg0 ;
-(void)overrideCreditCardPresentationWithCompletion:(id)arg0 ;
-(void)overrideRedeemCameraPerformAction:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)overrideRedeemCameraWithCompletion:(id)arg0 ;
-(void)popBridgedViewControllersToIndex:(NSUInteger)arg0 ;
-(void)presentBridgedViewController;
-(void)pushBridgedViewControllerAnimated:(BOOL)arg0 options:(id)arg1 ;
-(void)setBridgedNavigationItemWithOptions:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif