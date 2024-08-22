// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETROUTER_H
#define SHSHEETROUTER_H

@class UIViewController, NSString, UINavigationController, UIViewController<SHSheetContentView>;
@protocol SHSheetActivityPerformerPresentationInterface, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate;

#import <Foundation/Foundation.h>


@interface SHSheetRouter : NSObject <SHSheetActivityPerformerPresentationInterface, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>



@property (retain, nonatomic) NSObject<SHSheetActivityPerformerPresentationInterface> *activityPresentationController; // ivar: _activityPresentationController
@property (copy, nonatomic) id *collaborationParticipantsDismissalHandler; // ivar: _collaborationParticipantsDismissalHandler
@property (weak, nonatomic) UIViewController *collaborationParticipantsViewController; // ivar: _collaborationParticipantsViewController
@property (retain, nonatomic) UIViewController *currentViewControllerForActivityBeingListened; // ivar: _currentViewControllerForActivityBeingListened
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPresentedWithinPopover;
@property (nonatomic) BOOL listenForDismissalTransition; // ivar: _listenForDismissalTransition
@property (copy, nonatomic) id *listenerCompletionHandler; // ivar: _listenerCompletionHandler
@property (retain, nonatomic) UINavigationController *mainNavigationController; // ivar: _mainNavigationController
@property (weak, nonatomic) UIViewController<SHSheetContentView> *mainViewController; // ivar: _mainViewController
@property (weak, nonatomic) UIViewController *presentationBlockingViewController; // ivar: _presentationBlockingViewController
@property (retain, nonatomic) UIViewController *presentationViewController; // ivar: _presentationViewController
@property (readonly, weak, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (weak, nonatomic) UINavigationController *secondaryNavigationController; // ivar: _secondaryNavigationController
@property (weak, nonatomic) UIViewController<SHSheetContentView> *secondaryViewController; // ivar: _secondaryViewController
@property (readonly) Class superclass;
@property (weak, nonatomic) UINavigationController *userDefaultsNavigationController; // ivar: _userDefaultsNavigationController


-(BOOL)activityPerformer:(id)arg0 presentPopoverContentViewController:(id)arg1 ;
-(BOOL)activityPerformerCanPresent:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_configureAirdropViewController:(id)arg0 ;
-(void)_configureMainViewController:(id)arg0 ;
-(void)_configurePresentationBlockingViewController:(id)arg0 ;
-(void)_didDismissCollaborationParticipantsViewController;
-(void)_dismissOptionsViewController;
-(void)_installChildViewController:(id)arg0 forParentViewController:(id)arg1 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg0 ;
-(void)activityPerformCleanUpPresentation:(id)arg0 ;
-(void)activityPerformer:(id)arg0 preparePresentationWithContext:(id)arg1 completion:(id)arg2 ;
-(void)activityPerformer:(id)arg0 presentViewController:(id)arg1 completion:(id)arg2 ;
-(void)activityPerformer:(id)arg0 startListeningForDismissalTransitionWithCompletion:(id)arg1 ;
-(void)activityPerformerStopListeningForDismissalTransition:(id)arg0 ;
-(void)dismissCollaborationParticipantsViewController;
-(void)dismissForActivityPerformerResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)dismissPresentationBlockingViewControllerIfNeeded;
-(void)dismissSecondaryViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissUserDefaultsViewControllerAnimated:(BOOL)arg0 ;
-(void)installAirdropViewController:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentAirdropViewController:(id)arg0 ;
-(void)presentAlertController:(id)arg0 ;
-(void)presentCollaborationParticipantsViewController:(id)arg0 dismissalHandler:(id)arg1 ;
-(void)presentMainViewController:(id)arg0 withNavigationControllerSupport:(BOOL)arg1 ;
-(void)presentOptionsViewController:(id)arg0 ;
-(void)presentPresentationBlockingViewController;
-(void)presentSecondaryViewController:(id)arg0 ;
-(void)presentUserDefaultsViewController:(id)arg0 ;


@end


#endif