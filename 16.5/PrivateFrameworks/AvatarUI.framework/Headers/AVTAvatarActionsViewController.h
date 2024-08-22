// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARACTIONSVIEWCONTROLLER_H
#define AVTAVATARACTIONSVIEWCONTROLLER_H

@class UIViewController, UIStackView, NSString, UITapGestureRecognizer, UIImageView;
@protocol AVTAvatarActionsControllerDelegate, UINavigationControllerDelegate, AVTToolBarDelegate, AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate, AVTAvatarActionsViewControllerLayout, AVTAvatarActionsViewControllerDelegate;


#import "AVTAvatarInlineActionsController.h"
#import "AVTImageTransitioningContainerView.h"
#import "AVTViewSession.h"
#import "AVTAvatarEditorViewController.h"
#import "AVTUIEnvironment.h"
#import "AVTViewSessionProvider.h"
#import "AVTToolBar.h"

@interface AVTAvatarActionsViewController : UIViewController <AVTAvatarActionsControllerDelegate, UINavigationControllerDelegate, AVTToolBarDelegate, AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate>



@property (retain, nonatomic) AVTAvatarInlineActionsController *actionsController; // ivar: _actionsController
@property (nonatomic) BOOL allowFacetracking; // ivar: _allowFacetracking
@property (retain, nonatomic) AVTImageTransitioningContainerView *avatarContainer; // ivar: _avatarContainer
@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (retain, nonatomic) UIStackView *buttonsView; // ivar: _buttonsView
@property (retain, nonatomic) NSObject<AVTAvatarActionsViewControllerLayout> *currentLayout; // ivar: _currentLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarActionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) AVTAvatarEditorViewController *editorViewController; // ivar: _editorViewController
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (copy, nonatomic) id *postSessionDidBecomeActiveHandler; // ivar: _postSessionDidBecomeActiveHandler
@property (readonly, nonatomic) AVTViewSessionProvider *sessionProvider; // ivar: _sessionProvider
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) AVTToolBar *toolbar; // ivar: _toolbar
@property (retain, nonatomic) UIImageView *transitionImageView; // ivar: _transitionImageView


-(CGFloat)deleteMoveInDelay;
-(CGFloat)deleteMoveInDuration;
-(CGFloat)duplicateScaleDelay;
-(CGFloat)duplicateScaleDuration;
-(NSInteger)interfaceOrientationForFaceTrackingManager:(id)arg0 ;
-(id)actionsModel:(id)arg0 recordUpdateForDeletingRecord:(id)arg1 ;
-(id)initWithAVTViewSessionProvider:(id)arg0 actionsController:(id)arg1 environment:(id)arg2 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(struct UIEdgeInsets )additionalSafeAreaInsets;
-(void)actionsController:(id)arg0 didAddRecord:(id)arg1 ;
-(void)actionsController:(id)arg0 didCancelEditingRecord:(id)arg1 ;
-(void)actionsController:(id)arg0 didDeleteRecord:(id)arg1 withRecordUpdate:(id)arg2 completionBlock:(id)arg3 ;
-(void)actionsController:(id)arg0 didDuplicateToRecord:(id)arg1 completionBlock:(id)arg2 ;
-(void)actionsController:(id)arg0 didEditRecord:(id)arg1 ;
-(void)actionsController:(id)arg0 presentAlertController:(id)arg1 ;
-(void)actionsControllerDidFinish:(id)arg0 ;
-(void)actionsControllerDidUpdateActions:(id)arg0 ;
-(void)applyLayout:(id)arg0 ;
-(void)beginAVTViewSessionWithDidBeginBlock:(id)arg0 ;
-(void)beginUsingAVTViewFromSession:(id)arg0 ;
-(void)configureAVTViewSession:(id)arg0 withAvatarRecord:(id)arg1 completionBlock:(id)arg2 ;
-(void)configureNavigationItems;
-(void)configureUserInfoLabel;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)controllerPresentationWillObstructView:(id)arg0 ;
-(void)createTransitionImageViewIfNeeded;
-(void)didTapAvatarView:(id)arg0 ;
-(void)didTapDone:(id)arg0 ;
-(void)dismissEditorViewController:(id)arg0 forActionsController:(id)arg1 wasCreate:(BOOL)arg2 didEdit:(BOOL)arg3 animated:(BOOL)arg4 completion:(id)arg5 ;
-(void)layoutViewForActionsController;
-(void)loadView;
-(void)performEdit;
-(void)performTransitionAfterDeleteToRecord:(id)arg0 fromLeft:(BOOL)arg1 previousRecordImage:(id)arg2 completionBlock:(id)arg3 ;
-(void)performTransitionAfterDuplicateToRecord:(id)arg0 previousRecordImage:(id)arg1 completionBlock:(id)arg2 ;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg0 completionBlock:(id)arg1 ;
-(void)presentEditorViewController:(id)arg0 forActionsController:(id)arg1 isCreate:(BOOL)arg2 ;
-(void)rebuildLayout;
-(void)toolbar:(id)arg0 didSelectButton:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif