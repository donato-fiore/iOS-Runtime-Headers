// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXCOMPOSITIONPLAYERVIEWCONTROLLER_H
#define JFXCOMPOSITIONPLAYERVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UIColor;
@protocol UIGestureRecognizerDelegate, JFXCompositionPlayableElementsDataSource, JFXCompositionPlayerViewControllerDelegate;


#import "JFXCompositionPlayer.h"

@interface JFXCompositionPlayerViewController : UIViewController <UIGestureRecognizerDelegate>



@property (nonatomic) int cachedCurrentTime; // ivar: _cachedCurrentTime
@property (nonatomic) int cachedDuration; // ivar: _cachedDuration
@property (nonatomic) int cachedMuted; // ivar: _cachedMuted
@property (nonatomic) CGSize cachedRenderSizeInPixels; // ivar: _cachedRenderSizeInPixels
@property (nonatomic) BOOL cachedWasPlaying; // ivar: _cachedWasPlaying
@property (weak, nonatomic) NSObject<JFXCompositionPlayableElementsDataSource> *clipsDataSource; // ivar: _clipsDataSource
@property (retain, nonatomic) JFXCompositionPlayer *clipsPlayer; // ivar: _clipsPlayer
@property (readonly, nonatomic) ? currentCMTime;
@property (readonly, nonatomic) int currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<JFXCompositionPlayerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableVideoDisplayGestures; // ivar: _disableVideoDisplayGestures
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL dontRemovePlaceHolderOnDisplay; // ivar: _dontRemovePlaceHolderOnDisplay
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDisplaying; // ivar: _isDisplaying
@property (nonatomic) CGSize lastPlayerViewBoundsSize; // ivar: _lastPlayerViewBoundsSize
@property (nonatomic) CGSize lastPlayerViewSize; // ivar: _lastPlayerViewSize
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) unsigned int parentCode; // ivar: _parentCode
@property (retain, nonatomic) UIView *placeHolderView; // ivar: _placeHolderView
@property (nonatomic) ? playbackTimeChangedObserverInterval; // ivar: _playbackTimeChangedObserverInterval
@property (readonly, nonatomic) CGSize renderSizeInPixels;
@property (retain, nonatomic) UIColor *restoreToColor; // ivar: _restoreToColor
@property (readonly) Class superclass;
@property (nonatomic) NSInteger videoContentMode; // ivar: _videoContentMode
@property (retain, nonatomic) UIView *videoDisplayOverlayView; // ivar: _videoDisplayOverlayView
@property (weak, nonatomic) UIView *viewFlashed; // ivar: _viewFlashed


+(Class)compositionPlayerClass;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isReloadClipDataSourceNeeded;
-(BOOL)shouldHandleMediaServerCrash;
-(id)contentModeToVideoGravity:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)placeholderContainerView;
-(id)playerContainerView;
-(id)playerViewer;
-(id)viewToFlash;
-(int)duration;
-(int)frameRate;
-(struct ? )normalizedMinimumTouchSize;
-(struct CGPoint )convertPointInPlaybackSizeToClipPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointInPlaybackSizeToClipPointNormalized:(struct CGPoint )arg0 ;
-(struct CGRect )videoDisplayBounds;
-(struct CGSize )playerViewBoundsSize;
-(void)addPlaceHolder;
-(void)appDidBecomeActive:(id)arg0 ;
-(void)appDidEnterBackground:(id)arg0 ;
-(void)appWillResignActive:(id)arg0 ;
-(void)beginFlash;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)dispatchBlockWhenDone:(id)arg0 ;
-(void)displayPlaceHolder;
-(void)endFlash;
-(void)installVideoDisplayGestures;
-(void)mediaserverdCrashed;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)pauseWithCompletionBlock:(id)arg0 ;
-(void)play;
-(void)playWithCompletionHandler:(id)arg0 ;
-(void)playbackAreaDoubleTapped:(id)arg0 ;
-(void)playbackAreaPanned:(id)arg0 ;
-(void)playbackAreaPinched:(id)arg0 ;
-(void)playbackAreaRotated:(id)arg0 ;
-(void)playbackAreaTapped:(id)arg0 ;
-(void)playbackDidStart:(id)arg0 ;
-(void)playbackDidStop:(id)arg0 currentTime:(int)arg1 ;
-(void)playbackReadyForDisplayChanged:(id)arg0 isReady:(BOOL)arg1 setPlaceHolder:(BOOL)arg2 ;
-(void)playbackTimeDidChange:(id)arg0 currentTime:(int)arg1 ;
-(void)playerBecameReadyForDisplayChanged:(BOOL)arg0 setPlaceHolder:(BOOL)arg1 ;
-(void)playerWillBeDestroyed:(id)arg0 ;
-(void)preparePlaceHolder;
-(void)prepareVideoDisplayView;
-(void)reloadClipDataSource;
-(void)reloadClipDataSourceIfNeeded;
-(void)reloadClipDataSourceOnBecomingActive;
-(void)removePlaceHolder;
-(void)seekToTime:(int)arg0 ;
-(void)setNeedsCompositionUpdate;
-(void)setNeedsCompositionUpdateForClip:(id)arg0 ;
-(void)setPlaybackTimeChangeNotificationPeriod:(struct ? )arg0 ;
-(void)sharedInit;
-(void)unloadClipDataSourceSetPlaceHolder:(BOOL)arg0 ;
-(void)unloadCompositionSetPlaceHolder:(BOOL)arg0 ;
-(void)updateCachedPlaybackProperties;
-(void)updateDelegatePlayer;
-(void)updateVideoDisplayViewBounds;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif