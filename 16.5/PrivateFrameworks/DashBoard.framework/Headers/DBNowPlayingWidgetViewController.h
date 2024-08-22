// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBNOWPLAYINGWIDGETVIEWCONTROLLER_H
#define DBNOWPLAYINGWIDGETVIEWCONTROLLER_H

@class UIButton, NSLayoutConstraint, UILongPressGestureRecognizer, UIFocusContainerGuide, UIImage, MPArtworkCatalog, NSString, CPUINowPlayingSnapshot, NSArray, CPUIProgressView, UIActivityIndicatorView, NSTimer, UILabel;
@protocol CPUINowPlayingObserving, DBNowPlayingDelegate, MPRequestResponseControllerDelegate;


#import "DBWidgetViewController.h"
#import "DBNowPlayingFocusHighlightButton.h"
#import "DBWidgetFocusRingView.h"
#import "DBNowPlayingObserver.h"

@interface DBNowPlayingWidgetViewController : DBWidgetViewController <CPUINowPlayingObserving, DBNowPlayingDelegate, MPRequestResponseControllerDelegate>



@property (retain, nonatomic) UIButton *artworkButton; // ivar: _artworkButton
@property (retain, nonatomic) NSLayoutConstraint *artworkHorizontalConstraint; // ivar: _artworkHorizontalConstraint
@property (retain, nonatomic) UILongPressGestureRecognizer *backLongPressRecognizer; // ivar: _backLongPressRecognizer
@property (retain, nonatomic) DBNowPlayingFocusHighlightButton *backTransportButton; // ivar: _backTransportButton
@property (retain, nonatomic) UIFocusContainerGuide *controlsContainerGuide; // ivar: _controlsContainerGuide
@property (retain, nonatomic) UIImage *currentArtwork; // ivar: _currentArtwork
@property (retain, nonatomic) MPArtworkCatalog *currentCatalog; // ivar: _currentCatalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFocusContainerGuide *focusContainerGuide; // ivar: _focusContainerGuide
@property (retain, nonatomic) DBWidgetFocusRingView *focusRingView; // ivar: _focusRingView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger heldAction; // ivar: _heldAction
@property (retain, nonatomic) CPUINowPlayingSnapshot *lastSnapshot; // ivar: _lastSnapshot
@property (nonatomic) CGSize lastViewSize; // ivar: _lastViewSize
@property (retain, nonatomic) NSArray *layoutGuides; // ivar: _layoutGuides
@property (retain, nonatomic) UIImage *nextArtwork; // ivar: _nextArtwork
@property (retain, nonatomic) MPArtworkCatalog *nextCatalog; // ivar: _nextCatalog
@property (retain, nonatomic) UILongPressGestureRecognizer *nextLongPressRecognizer; // ivar: _nextLongPressRecognizer
@property (retain, nonatomic) DBNowPlayingFocusHighlightButton *nextTransportButton; // ivar: _nextTransportButton
@property (retain, nonatomic) DBNowPlayingObserver *nowPlayingObserver; // ivar: _nowPlayingObserver
@property (retain, nonatomic) DBNowPlayingFocusHighlightButton *playTransportButton; // ivar: _playTransportButton
@property (retain, nonatomic) UIImage *previousArtwork; // ivar: _previousArtwork
@property (retain, nonatomic) MPArtworkCatalog *previousCatalog; // ivar: _previousCatalog
@property (retain, nonatomic) CPUIProgressView *progressView; // ivar: _progressView
@property (nonatomic) BOOL seeking; // ivar: _seeking
@property (nonatomic) BOOL showArtworkBorder; // ivar: _showArtworkBorder
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) NSTimer *spinnerTimer; // ivar: _spinnerTimer
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSArray *widgetConstraints; // ivar: _widgetConstraints


-(BOOL)_isFocusUI;
-(BOOL)_showsBackButton;
-(BOOL)_showsProgressView;
-(BOOL)_showsTextLabels;
-(BOOL)entireWidgetFocusable;
-(BOOL)isArtworkVisuallyIdenticalForCatalog:(id)arg0 andCatalog:(id)arg1 ;
-(CGFloat)_heightForArtwork;
-(NSUInteger)_widgetStyle;
-(id)_nowPlayingPlaceholderImage;
-(id)linearFocusItems;
-(struct UIEdgeInsets )_imageInsetsForTransportButton:(NSUInteger)arg0 ;
-(void)_cancelHeldAction:(id)arg0 ;
-(void)_processArtworks;
-(void)_processArtworksFor:(id)arg0 songType:(NSUInteger)arg1 ;
-(void)_processLabelsForCurrentlyPlayingSong;
-(void)_processPlaybackControlsForCurrentlyPlayingSong;
-(void)_respondToHeldAction;
-(void)_sendAction:(NSInteger)arg0 withState:(NSInteger)arg1 ;
-(void)_sendHeldAction;
-(void)_setNotPlaying;
-(void)_setupPlaceholderArtwork;
-(void)_setupTransportControls;
-(void)_updateAppearanceForWallpaper;
-(void)_updateArtworkBorder;
-(void)_updateArtworkConstraints;
-(void)_updateButton:(id)arg0 withType:(NSUInteger)arg1 variant:(id)arg2 ;
-(void)albumArtButtonTapped:(id)arg0 ;
-(void)backButtonLongPress:(id)arg0 ;
-(void)backButtonTouchDown:(id)arg0 ;
-(void)backButtonTouchUp:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)invalidateConstraints;
-(void)nextButtonLongPress:(id)arg0 ;
-(void)nextButtonTouchDown:(id)arg0 ;
-(void)nextButtonTouchUp:(id)arg0 ;
-(void)nowPlayingManager:(id)arg0 didThrottleUpdateForBundleIdentifier:(id)arg1 ;
-(void)nowPlayingManager:(id)arg0 didUpdateSnapshot:(id)arg1 ;
-(void)nowPlayingObserver:(id)arg0 didChangeNowPlayingApplication:(id)arg1 ;
-(void)playPauseButtonTouchDown:(id)arg0 ;
-(void)playPauseButtonTouchUp:(id)arg0 ;
-(void)reuseCatalog:(id)arg0 withArtwork:(id)arg1 compareWithCatalog:(id)arg2 forSongType:(NSUInteger)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAppearanceForWallpaper;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)widgetViewTapped;


@end


#endif