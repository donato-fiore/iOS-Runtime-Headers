// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERVIEWCONTROLLERCONTENTVIEW_H
#define AVPLAYERVIEWCONTROLLERCONTENTVIEW_H

@class UIView, UIImageView, NSArray, NSString, NSNumber, UIView<AVPlaybackContentContainer>, NSMutableDictionary;
@protocol AVScrollingObserverDelegate, _UIViewBoundingPathChangeObserver, AVPlayerViewControllerContentViewDelegate_Gen1, AVPlayerViewControllerContentViewDelegate;


#import "AVExternalPlaybackIndicatorView.h"
#import "AVCABackdropLayerView.h"
#import "AVTurboModePlaybackControlsPlaceholderView.h"
#import "AVMobileControlsViewController.h"
#import "AVPlayerViewControllerCustomControlsView.h"
#import "AVPlaybackControlsView.h"
#import "AVScrollingObserver.h"

@interface AVPlayerViewControllerContentView : UIView <AVScrollingObserverDelegate, _UIViewBoundingPathChangeObserver>

 {
    UIImageView *_audioOnlyIndicatorView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    UIView *_iAdPreRollView;
    UIImageView *_unsupportedContentIndicatorView;
    NSArray *_customControlsViewLayoutGuideConstraints;
    AVCABackdropLayerView *_backdropLayerView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    id<AVPlayerViewControllerContentViewDelegate_Gen1> *_gen1Delegate;
}


@property (copy, nonatomic) NSString *automaticVideoGravity; // ivar: _automaticVideoGravity
@property (nonatomic) BOOL canAutomaticallyZoomLetterboxVideos; // ivar: _canAutomaticallyZoomLetterboxVideos
@property (retain, nonatomic) UIView *contentOverlayView; // ivar: _contentOverlayView
@property (nonatomic) NSUInteger contentOverlayViewPlacement; // ivar: _contentOverlayViewPlacement
@property (retain, nonatomic) AVMobileControlsViewController *controlsViewController; // ivar: _controlsViewController
@property (retain, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView; // ivar: _customControlsView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVPlayerViewControllerContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsetsForLetterboxedContent; // ivar: _edgeInsetsForLetterboxedContent
@property (copy, nonatomic) NSString *externalPlaybackIndicatorSubtitle; // ivar: _externalPlaybackIndicatorSubtitle
@property (copy, nonatomic) NSString *externalPlaybackIndicatorTitle; // ivar: _externalPlaybackIndicatorTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *iAdPreRollView;
@property (readonly, nonatomic) UIView *iAdPreRollViewIfLoaded; // ivar: _iAdPreRollViewIfLoaded
@property (retain, nonatomic) UIView *interactiveContentOverlayView; // ivar: _interactiveContentOverlayView
@property (readonly, nonatomic) BOOL isCoveringWindow;
@property (readonly, nonatomic) NSNumber *layoutClass;
@property (nonatomic) BOOL needsInitialLayout; // ivar: _needsInitialLayout
@property (retain, nonatomic) UIView<AVPlaybackContentContainer> *playbackContentContainerView; // ivar: _playbackContentContainerView
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView;
@property (readonly, nonatomic) AVScrollingObserver *scrollingObserver; // ivar: _scrollingObserver
@property (nonatomic) BOOL showsPlaybackControls; // ivar: _showsPlaybackControls
@property (nonatomic) BOOL styleSheetShouldUseCompactFullScreenItemSize; // ivar: _styleSheetShouldUseCompactFullScreenItemSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *targetVideoGravities; // ivar: _targetVideoGravities
@property (nonatomic) UIEdgeInsets videoContentInset; // ivar: _videoContentInset
@property (nonatomic) BOOL wantsBackdropView; // ivar: _wantsBackdropView


-(BOOL)avkit_hasFullScreenLayoutClass;
-(BOOL)isViewDescendantOfPlaybackControlsSubview:(id)arg0 ;
-(id)avkit_backdropGroupLeader;
-(id)chromeControlsViewController;
-(id)gen1Delegate;
-(id)initWithFrame:(struct CGRect )arg0 playbackContentContainerView:(id)arg1 targetVideoGravities:(id)arg2 ;
-(void)_applyVideoGravityIfNeeded:(NSInteger)arg0 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)addPlaybackContentContainerViewIfNeeded;
-(void)avkit_needsUpdateBackdropCaptureViewHidden;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)loadPlaybackControlsViewIfNeeded;
-(void)removeTurboModePlaybackControlsPlaceholderViewIfNeeded;
-(void)scrollingObserverDidChangeScrollingState:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setGen1Delegate:(id)arg0 ;
-(void)setShowsAudioOnlyIndicator:(BOOL)arg0 ;
-(void)setShowsExternalPlaybackIndicator:(BOOL)arg0 ;
-(void)setShowsUnsupportedContentIndicator:(BOOL)arg0 ;
-(void)setTargetVideoGravity:(id)arg0 forLayoutClass:(NSUInteger)arg1 ;
-(void)updateCustomControlsViewLayoutGuides;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif