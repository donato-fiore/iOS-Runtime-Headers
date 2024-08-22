// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPROFILETITLEPAGEVIEWCONTROLLER_H
#define MCPROFILETITLEPAGEVIEWCONTROLLER_H

@class NSString;
@protocol UIScrollViewDelegate, MCProfileTitlePageViewModelDelegate, MCUISignInViewControllerDelegate, MCProfileQuestionsControllerDelegate, DevicePINControllerDelegate, MCUIDismissalAwareViewController;


#import "MCSectionBasedTableViewController.h"
#import "MCActivityViewController.h"
#import "MCProfileTitlePageMetaDataSectionAnimationController.h"
#import "MCProfileTitlePageMetaDataSectionController.h"
#import "MCProfileTitlePageView.h"
#import "MCInstallProfileQuestionViewController.h"
#import "MCProfileTitlePageViewModel.h"

@interface MCProfileTitlePageViewController : MCSectionBasedTableViewController <UIScrollViewDelegate, MCProfileTitlePageViewModelDelegate, MCUISignInViewControllerDelegate, MCProfileQuestionsControllerDelegate, DevicePINControllerDelegate, MCUIDismissalAwareViewController>



@property (retain, nonatomic) MCActivityViewController *activityViewController; // ivar: _activityViewController
@property (retain, nonatomic) MCProfileTitlePageMetaDataSectionAnimationController *animationController; // ivar: _animationController
@property (copy, nonatomic) id *authenticationCompletionHandler; // ivar: _authenticationCompletionHandler
@property (copy, nonatomic) id *authenticationPreparationHandler; // ivar: _authenticationPreparationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasUpdatedBottomInset; // ivar: _hasUpdatedBottomInset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCProfileTitlePageMetaDataSectionController *metaDataSectionController; // ivar: _metaDataSectionController
@property (nonatomic) CGFloat metaDataSectionHeight; // ivar: _metaDataSectionHeight
@property (copy, nonatomic) id *passcodeCompletionHandler; // ivar: _passcodeCompletionHandler
@property (retain, nonatomic) MCProfileTitlePageView *profileTitlePageView; // ivar: _profileTitlePageView
@property (retain, nonatomic) MCInstallProfileQuestionViewController *questionsController; // ivar: _questionsController
@property (readonly) Class superclass;
@property (copy, nonatomic) id *userInputCompletionHandler; // ivar: _userInputCompletionHandler
@property (retain, nonatomic) MCProfileTitlePageViewModel *viewModel; // ivar: _viewModel


-(BOOL)questionsControllerIsDisplayedInSheet:(id)arg0 ;
-(id)_sectionControllersWithProfile:(id)arg0 ;
-(id)defaultView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_resetNavigationBarStyleForViewController:(id)arg0 ;
-(void)_showAlertForInstallError:(id)arg0 ;
-(void)_updateBottomInsetToEnableCompleteScrollAnimation;
-(void)_updateMetaDataSectionHeight;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)infoButtonTapped:(id)arg0 ;
-(void)informQuestionViewControllerOfPreflightResult:(id)arg0 profileConnection:(id)arg1 ;
-(void)installButtonTapped:(id)arg0 ;
-(void)installationFinishedSuccessfully:(BOOL)arg0 shouldDismiss:(BOOL)arg1 shouldRedirect:(BOOL)arg2 errorToDisplay:(id)arg3 ;
-(void)loadView;
// -(void)presentAuthenticationViewControllerWithContext:(id)arg0 authenticationPreparationHandler:(id)arg1 authenticationCompletionHandler:(unk)arg2  ;
-(void)presentSpinnerViewController;
-(void)promptForPasscodeWithCompletionHandler:(id)arg0 ;
-(void)promptForUserInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)questionsController:(id)arg0 didFinishWithResponses:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setCurrentQuestionsController:(id)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)signInViewController:(id)arg0 willAuthenticateWithCompletionHandler:(id)arg1 ;
-(void)signInViewControllerDidCancelAuthentication:(id)arg0 ;
-(void)viewControllerHasBeenDismissed;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif