// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYPODICONZOOMANIMATOR_H
#define SBHLIBRARYPODICONZOOMANIMATOR_H

@class UIView, NSArray, NSString;
@protocol SBHLibraryViewControllerObserver, SBHLibraryPodIconZoomAnimationContaining;


#import "SBIconZoomAnimator.h"
#import "SBHLibraryViewController.h"
#import "SBFolderController.h"
#import "SBHLibraryPodFolderView.h"
#import "SBHLibraryPodZoomSettings.h"
#import "SBFolderIcon.h"
#import "SBIconView.h"

@interface SBHLibraryPodIconZoomAnimator : SBIconZoomAnimator <SBHLibraryViewControllerObserver>

 {
    SBHLibraryViewController *_libraryViewController;
    SBFolderController *_folderController;
    SBHLibraryPodFolderView *_folderView;
    UIView *_folderScalingView;
    UIView *_folderClippingView;
    UIView *_matchMoveWrapperView;
    UIView *_searchBar;
    UIView *_libraryScalingView;
    NSArray *_visibleIconViews;
    NSArray *_miniPodIconViews;
    BOOL _animationComplete;
}


@property (readonly, nonatomic) NSObject<SBHLibraryPodIconZoomAnimationContaining> *animationContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHLibraryPodZoomSettings *settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBFolderIcon *targetIcon; // ivar: _targetIcon
@property (readonly, nonatomic) SBIconView *targetIconView; // ivar: _targetIconView


-(CGFloat)_scaleForZoomFraction:(CGFloat)arg0 ;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithAnimationContainer:(id)arg0 innerFolderController:(id)arg1 folderIcon:(id)arg2 searchBar:(id)arg3 libraryViewController:(id)arg4 ;
-(id)referenceIconView;
-(struct CGPoint )_centerOfMiniPodIconViews;
-(void)_animateIconViewTransformsAndAlphaForZoomFraction:(CGFloat)arg0 withAnimationSettings:(id)arg1 delay:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withSharedCompletion:(id)arg2 ;
-(void)_cancelAnimationForIconViewClippedOrObscured;
-(void)_captureVisibleAndMiniPodIconViews;
-(void)_cleanupAnimation;
-(void)_cleanupMiniPodIconViewsAfterCrossfade;
-(void)_handleIconViewClippedNotification:(id)arg0 ;
-(void)_handleIconZoomNotification:(id)arg0 ;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_prepareAnimation;
-(void)_prepareToCrossfadeMiniPodIconViews;
-(void)_removeMatchMoveAnimation;
-(void)_returnFolderAndLibraryScalingViews;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)_setupFolderAndLibraryScalingViews;
-(void)_setupMatchMoveAnimation;
-(void)_updateFolderNavigationBarAlphaForZoomFraction:(CGFloat)arg0 ;
-(void)_updateFolderViewFramesForZoomFraction:(CGFloat)arg0 ;
-(void)_updateIconCrossfadeForZoomFraction:(CGFloat)arg0 ;
-(void)_updateLibraryAlphaForZoomFraction:(CGFloat)arg0 ;
-(void)_updateLibraryScaleForZoomFraction:(CGFloat)arg0 ;
-(void)_updateSearchBarAlphaForZoomFraction:(CGFloat)arg0 ;
-(void)_updateSearchBarForZoomFraction:(CGFloat)arg0 ;
-(void)_updateVisibleIconViewsPointerAllowed:(BOOL)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)libraryViewController:(id)arg0 willPresentSearchController:(id)arg1 ;


@end


#endif