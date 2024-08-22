// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLITEMVIEWCONTROLLER_H
#define QLITEMVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UIView, NSString, UIDragInteraction, NSArray, PUProgressIndicatorView;
@protocol UIDragInteractionDelegate_Private, QLLocalPreviewingController, QLToolbarButtonAction, QLPreviewItemViewControllerDelegate, QLItemViewControllerPresentingDelegate, OS_dispatch_queue;


#import "QLAppearance.h"
#import "QLPreviewContext.h"

@interface QLItemViewController : UIViewController <UIDragInteractionDelegate_Private, QLLocalPreviewingController, QLToolbarButtonAction>

 {
    NSMutableArray *_completionBlocks;
    NSInteger _lastScrollViewUpdateInterfaceOrientation;
}


@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) QLAppearance *appearance; // ivar: _appearance
@property (retain) id *contents; // ivar: _contents
@property (retain) QLPreviewContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLPreviewItemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL didAppearOnce; // ivar: _didAppearOnce
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly) NSUInteger hash;
@property BOOL isLoaded; // ivar: _isLoaded
@property BOOL isLoading; // ivar: _isLoading
@property (nonatomic) BOOL isSavingEdits; // ivar: _isSavingEdits
@property BOOL loadingFailed; // ivar: _loadingFailed
@property (weak, nonatomic) NSObject<QLItemViewControllerPresentingDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (readonly, nonatomic) NSArray *registeredKeyCommands;
@property (retain, nonatomic) PUProgressIndicatorView *saveEditProgressView; // ivar: _saveEditProgressView
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveEditsQueue; // ivar: _saveEditsQueue
@property (readonly) Class superclass;


+(BOOL)shouldBeRemoteForMediaContentType:(id)arg0 ;
+(id)supportedAudiovisualContentTypes;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canBeLocked;
-(BOOL)canClickToToggleFullscreen;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canShowNavBar;
-(BOOL)canShowToolBar;
-(BOOL)canSwipeToDismiss;
-(BOOL)canToggleFullScreen;
-(BOOL)draggableViewShouldStartDragSession:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)presenterShouldHandleLoadingView:(id)arg0 readyToDisplay:(id)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg0 ofGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAlwaysRunFullscreen;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg0 ;
-(BOOL)supportsScrollingUpAndDownUsingKeyCommands;
-(CGFloat)edgePanGestureWidth;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)_cancelTouchToken;
-(id)additionalItemViewControllerDescription;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)draggableView;
-(id)editProgressIndicatorMessage;
-(id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg0 ;
-(id)fullscreenBackgroundColor;
-(id)init;
-(id)parallaxView;
-(id)scrollView;
-(id)stateRestorationDictionary;
-(id)toolbarButtonsForTraitCollection:(id)arg0 ;
-(id)transitioningView;
-(void)_addDragInteractionIfNeeded;
-(void)_scrollScrollViewByPercentualOffset:(CGFloat)arg0 ;
-(void)_scrollScrollViewDown;
-(void)_scrollScrollViewUp;
-(void)actionSheetDidDismiss;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)didFinishSavingEdits;
-(void)didStartSavingEdits;
-(void)editedCopyToSaveChangesWithOutputType:(id)arg0 completionHandler:(id)arg1 ;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg0 ;
-(void)hideSaveEditProgressIndicator;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(id)arg0 ;
-(void)loadPreviewControllerIfNeededWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyDelegatesDidFailWithError:(id)arg0 ;
-(void)notifyStateRestorationWithUserInfo:(id)arg0 ;
-(void)notifyStateRestorationWithUserInfoIfNeeded:(id)arg0 ;
-(void)performCompletionBlocksWithError:(id)arg0 ;
-(void)performFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(void)performFirstTimeAppearanceActionsIfNeeded:(NSUInteger)arg0 ;
-(void)preloadViewControllerForContext:(id)arg0 ;
-(void)prepareForActionSheetPresentation;
-(void)prepareForInvalidationWithCompletionHandler:(id)arg0 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewIsAppearingWithProgress:(CGFloat)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)previewWillFinishAppearing;
-(void)requestLockForCurrentItem;
-(void)savePreviewEditedCopyWithCompletionHandler:(id)arg0 ;
-(void)showSaveEditsProgressIndicatorAfterDelay;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;
-(void)transitionWillFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)updateInterfaceAfterSavingEdits;
-(void)updateInterfaceForSavingEdits;
-(void)updateScrollViewContentOffset;
-(void)updateScrollViewContentOffset:(BOOL)arg0 withPreviousAppearance:(id)arg1 ;


@end


#endif