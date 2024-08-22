// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLLIVEPHOTOITEMVIEWCONTROLLER_H
#define QLLIVEPHOTOITEMVIEWCONTROLLER_H

@class PHLivePhotoView, UIImageView, NSLayoutConstraint, NSDate, NSNumber, UIView, NSDictionary, NSString, UIImage;
@protocol PHLivePhotoViewDelegate, UIGestureRecognizerDelegate, QLImageAnalysisManagerDelegate;


#import "QLScrollableContentItemViewController.h"
#import "QLImageAnalysisManager.h"

@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, UIGestureRecognizerDelegate, QLImageAnalysisManagerDelegate>

 {
    CGSize _imageSize;
    PHLivePhotoView *_livePhotoView;
    UIImageView *_livePhotoBadge;
    NSLayoutConstraint *_livePhotoBadgeLeftConstraint;
    NSLayoutConstraint *_livePhotoBadgeTopConstraint;
    NSDate *_didEndPlayingTimestamp;
    BOOL _isPlaying;
    BOOL _livePhotoBadgeVisible;
    BOOL _isFullScreen;
    BOOL _fullyZoomedOut;
    BOOL _transitionInProgress;
    NSNumber *_savedFullScreenState;
    BOOL _shouldPlayHint;
    QLImageAnalysisManager *_imageAnalysisManager;
    UIView *_analysisButtonContainer;
    NSLayoutConstraint *_analysisButtonContainerRightConstraint;
    NSLayoutConstraint *_analysisButtonContainerBottomConstraint;
}


@property (readonly, nonatomic) NSDictionary *clientPreviewOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *imageAnalysisView;
@property (readonly, nonatomic) UIImage *imageForAnalysis;
@property (readonly) Class superclass;


-(BOOL)_isPointInNonImageSubjectItems:(struct CGPoint )arg0 ;
-(BOOL)_wasJustPlaying;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(BOOL)canToggleFullScreen;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)livePhotoView:(id)arg0 canBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg0 ofGestureRecognizer:(id)arg1 ;
-(CGFloat)livePhotoView:(id)arg0 extraMinimumTouchDurationForTouch:(id)arg1 withStyle:(NSInteger)arg2 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)toolbarButtonsForTraitCollection:(id)arg0 ;
-(struct CGSize )imageSize;
-(void)_setupAndStartImageAnalysisIfNeeded;
-(void)_updateAnalysisButtonsContainerConstraints;
-(void)_updateImageAnalysisInteractionAnimated:(BOOL)arg0 ;
-(void)_updateLivePhotoBadgeAnimated:(BOOL)arg0 ;
-(void)adjustImageInteractionForScrollEvent:(id)arg0 ;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)didEndZoomingAtScale:(CGFloat)arg0 ;
-(void)didScroll:(id)arg0 ;
-(void)didZoom:(id)arg0 ;
-(void)imageAnalysisInteractionDidDismissVisualSearchController;
-(void)imageAnalysisInteractionWillPresentVisualSearchController;
-(void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(BOOL)arg0 ;
-(void)imageAnalyzerWantsUpdateOverlayViews;
-(void)livePhotoView:(id)arg0 didEndPlaybackWithStyle:(NSInteger)arg1 ;
-(void)livePhotoView:(id)arg0 willBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)performFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)previewWillFinishAppearing;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBeginZooming;


@end


#endif