// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLITEMAGGREGATEDVIEWCONTROLLER_H
#define QLITEMAGGREGATEDVIEWCONTROLLER_H

@protocol QLPreviewItemViewControllerDelegate;


#import "QLItemViewController.h"
#import "QLAppearance.h"

@interface QLItemAggregatedViewController : QLItemViewController {
    BOOL _isVisible;
    BOOL _isAppearing;
    BOOL _fullScreen;
    QLAppearance *_appearance;
    id<QLPreviewItemViewControllerDelegate> *_delegate;
}


@property (retain, nonatomic) QLItemViewController *currentPreviewViewController; // ivar: _currentPreviewViewController


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
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg0 ofGestureRecognizer:(id)arg1 ;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg0 ;
-(CGFloat)edgePanGestureWidth;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)accessoryView;
-(id)appearance;
-(id)delegate;
-(id)draggableView;
-(id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg0 ;
-(id)fullscreenBackgroundColor;
-(id)parallaxView;
-(id)printer;
-(id)registeredKeyCommands;
-(id)safeAreaLayoutGuide;
-(id)scrollView;
-(id)stateRestorationDictionary;
-(id)title;
-(id)toolbarButtonsForTraitCollection:(id)arg0 ;
-(id)transitioningView;
-(struct CGSize )preferredContentSize;
-(void)actionSheetDidDismiss;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg0 ;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(id)arg0 ;
-(void)notifyStateRestorationWithUserInfo:(id)arg0 ;
-(void)performFirstTimeAppearanceActions:(NSUInteger)arg0 ;
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
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)showPreviewViewController:(id)arg0 ;
-(void)showPreviewViewController:(id)arg0 animatingWithCrossfade:(BOOL)arg1 ;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;
-(void)transitionWillFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;


@end


#endif