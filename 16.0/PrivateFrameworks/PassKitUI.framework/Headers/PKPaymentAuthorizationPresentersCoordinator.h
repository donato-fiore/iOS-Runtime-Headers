// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONPRESENTERSCOORDINATOR_H
#define PKPAYMENTAUTHORIZATIONPRESENTERSCOORDINATOR_H

@class NSString, NSDictionary, PKAsyncTaskProgressTracker, SBSRemoteAlertHandle;
@protocol PKPaymentAuthorizationScenePresenter, PKPaymentAuthorizationFlowCoordinatorDelegate, SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationFlowCoordinator.h"
#import "PKPaymentAuthorizationPresentationTarget.h"

@interface PKPaymentAuthorizationPresentersCoordinator : NSObject <PKPaymentAuthorizationScenePresenter, PKPaymentAuthorizationFlowCoordinatorDelegate, SBSRemoteAlertHandleObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaymentAuthorizationFlowCoordinator *flowCoordinator; // ivar: _flowCoordinator
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *hostUserInfo; // ivar: _hostUserInfo
@property (retain, nonatomic) PKAsyncTaskProgressTracker *invalidationTracker; // ivar: _invalidationTracker
@property (retain, nonatomic) PKPaymentAuthorizationPresentationTarget *primaryTarget; // ivar: _primaryTarget
@property (retain, nonatomic) PKPaymentAuthorizationPresentationTarget *secondaryTarget; // ivar: _secondaryTarget
@property (retain, nonatomic) SBSRemoteAlertHandle *secondaryTargetAlertHandle; // ivar: _secondaryTargetAlertHandle
@property (nonatomic) BOOL shouldRequestSecondaryViewControllerPresenter; // ivar: _shouldRequestSecondaryViewControllerPresenter
@property (readonly) Class superclass;


+(id)coordinatorForHostWithUserInfo:(id)arg0 ;
+(id)coordinators;
+(void)coordinatorDidInvalidate:(id)arg0 ;
+(void)invalidateCoordinators:(id)arg0 ;
-(BOOL)handleHomeButtonPressedInViewController:(id)arg0 ;
-(BOOL)isPresentationModeForPrimaryViewController:(NSInteger)arg0 ;
-(BOOL)shouldSecondaryViewControllerBeRequestedInSceneWithPresentationMode:(NSInteger)arg0 ;
-(BOOL)supportsSecondaryViewController;
-(id)initWithHostUserInfo:(id)arg0 ;
-(void)askForDismissalWithReason:(NSUInteger)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)configureSceneWithPrimaryPresentationMode:(NSInteger)arg0 ;
-(void)dealloc;
-(void)dismissSceneAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissSecondaryViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)invalidateSecondaryAlert;
-(void)notifyOnInvalidated:(id)arg0 ;
-(void)presentPrimaryViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentSecondaryViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)primaryViewController:(id)arg0 didActivateWithPresentationMode:(NSInteger)arg1 ;
-(void)requestSecondaryViewControllerPresenterIfNecessary;
-(void)secondaryViewController:(id)arg0 didActivateWithPresentationMode:(NSInteger)arg1 ;
-(void)start;
-(void)viewController:(id)arg0 didActivateWithPresentationMode:(NSInteger)arg1 ;
-(void)viewControllerDidInvalidate:(id)arg0 ;
-(void)viewControllerWillAppear:(id)arg0 ;
-(void)viewControllerWillDisappear:(id)arg0 ;


@end


#endif