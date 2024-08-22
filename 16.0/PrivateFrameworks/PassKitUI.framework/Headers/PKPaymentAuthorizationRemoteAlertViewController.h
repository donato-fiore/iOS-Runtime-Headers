// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONREMOTEALERTVIEWCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController;


#import "PKPaymentAuthorizationPresentersCoordinator.h"

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController

@property (readonly, nonatomic) PKPaymentAuthorizationPresentersCoordinator *presentersCoordinator; // ivar: _presentersCoordinator


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initializePresentersCoordinatorWithUserInfo:(id)arg0 ;
-(int)_preferredStatusBarVisibility;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)askForDismissalWithReason:(NSUInteger)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)configureAppearance;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)configureWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didInvalidateForRemoteAlert;
-(void)handleButtonActions:(id)arg0 ;
-(void)noteActivatedWithPresentationMode:(NSInteger)arg0 ;
-(void)notifyOnInvalidated:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateStatusBarVisibility;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif