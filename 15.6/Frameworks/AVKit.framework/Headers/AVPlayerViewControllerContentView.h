// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERVIEWCONTROLLERCONTENTVIEW_H
#define AVPLAYERVIEWCONTROLLERCONTENTVIEW_H

@class UIView, UIImageView, NSString, NSNumber, UIView<AVPlaybackContentContainer>, NSMutableDictionary;
@protocol AVScrollViewObserverContentView, AVPlayerViewControllerContentViewDelegate;


#import "AVCABackdropLayerView.h"
#import "AVExternalPlaybackIndicatorView.h"
#import "AVPlaybackControlsView.h"
#import "__AVPlayerLayerView.h"
#import "AVScrollViewObserver.h"
#import "AVStyleSheet.h"
#import "AVTurboModePlaybackControlsPlaceholderView.h"

@interface AVPlayerViewControllerContentView : UIView <AVScrollViewObserverContentView>



@property (readonly, nonatomic) UIImageView *audioOnlyIndicatorView; // ivar: _audioOnlyIndicatorView
@property (readonly, nonatomic) UIImageView *audioOnlyIndicatorViewIfLoaded;
@property (copy, nonatomic) NSString *automaticVideoGravity; // ivar: _automaticVideoGravity
@property (readonly, nonatomic) AVCABackdropLayerView *backdropLayerView; // ivar: _backdropLayerView
@property (nonatomic) BOOL canAutomaticallyZoomLetterboxVideos; // ivar: _canAutomaticallyZoomLetterboxVideos
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVPlayerViewControllerContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsetsForLetterboxedContent; // ivar: _edgeInsetsForLetterboxedContent
@property (copy, nonatomic) NSString *externalPlaybackIndicatorSubtitle; // ivar: _externalPlaybackIndicatorSubtitle
@property (copy, nonatomic) NSString *externalPlaybackIndicatorTitle; // ivar: _externalPlaybackIndicatorTitle
@property (readonly, nonatomic) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorView; // ivar: _externalPlaybackIndicatorView
@property (readonly, nonatomic) AVExternalPlaybackIndicatorView *externalPlaybackIndicatorViewIfLoaded;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *iAdPreRollView; // ivar: _iAdPreRollView
@property (readonly, nonatomic) UIView *iAdPreRollViewIfLoaded;
@property (readonly, nonatomic, getter=isInAWindowAndNotScrolling) BOOL inAWindowAndNotScrolling;
@property (retain, nonatomic) UIView *interactiveContentOverlayView; // ivar: _interactiveContentOverlayView
@property (readonly, nonatomic) BOOL isCoveringWindow;
@property (readonly, nonatomic) NSNumber *layoutClass;
@property (nonatomic) BOOL needsInitialLayout; // ivar: _needsInitialLayout
@property (retain, nonatomic) UIView<AVPlaybackContentContainer> *playbackContentContainerView; // ivar: _playbackContentContainerView
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView; // ivar: _playbackControlsView
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView; // ivar: _playerLayerView
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) AVScrollViewObserver *scrollingObserver; // ivar: _scrollingObserver
@property (readonly, nonatomic, getter=isScrollingQuickly) BOOL scrollingQuickly;
@property (nonatomic) BOOL shouldLoadPlaybackControlsHint; // ivar: _shouldLoadPlaybackControlsHint
@property (retain, nonatomic) AVStyleSheet *styleSheet; // ivar: _styleSheet
@property (nonatomic) BOOL styleSheetShouldUseCompactFullScreenItemSize; // ivar: _styleSheetShouldUseCompactFullScreenItemSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *targetVideoGravities; // ivar: _targetVideoGravities
@property (readonly, weak, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // ivar: _turboModePlaybackControlsPlaceholderView
@property (readonly, nonatomic) UIImageView *unsupportedContentIndicatorView; // ivar: _unsupportedContentIndicatorView
@property (readonly, nonatomic) UIImageView *unsupportedContentIndicatorViewIfLoaded;
@property (nonatomic) UIEdgeInsets videoContentInset; // ivar: _videoContentInset


-(BOOL)_isBeingTransitionedToOrFromFullScreen;
-(BOOL)avkit_hasFullScreenLayoutClass;
-(BOOL)isViewDescendantOfPlaybackControlsSubview:(id)arg0 ;
-(id)_mediaTimingFunctionForCurrentAnimationCurve;
-(id)avkit_backdropGroupLeader;
-(id)initWithFrame:(struct CGRect )arg0 playbackContentContainerView:(id)arg1 targetVideoGravities:(id)arg2 ;
-(void)_applyVideoGravityIfNeeded:(NSInteger)arg0 ;
-(void)_insertPlaybackControlsOrPlaceholderView:(id)arg0 ;
-(void)_loadTurboModePlaybackControlsPlaceholderViewIfNeeded;
-(void)_loadTurboOrFullPlaybackControlsIfNeeded;
-(void)_updateStyleSheet;
-(void)_updateVideoContentInsetForVideoGravity:(NSInteger)arg0 ;
-(void)_updateVideoGravityDuringLayoutSubviewsAndAssertThatIfYouBreakThisMethodYouOwnThisMethod;
-(void)addPlaybackContentContainerViewIfNeeded;
-(void)avkit_needsUpdateBackdropCaptureViewHidden;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)loadPlaybackControlsViewIfNeeded;
-(void)removeTurboModePlaybackControlsPlaceholderViewIfNeeded;
-(void)scrollViewObserverValuesDidChange:(id)arg0 ;
-(void)setShowsAudioOnlyIndicator:(BOOL)arg0 ;
-(void)setShowsExternalPlaybackIndicator:(BOOL)arg0 ;
-(void)setShowsUnsupportedContentIndicator:(BOOL)arg0 ;
-(void)setTargetVideoGravity:(id)arg0 forLayoutClass:(NSUInteger)arg1 ;


@end


#endif