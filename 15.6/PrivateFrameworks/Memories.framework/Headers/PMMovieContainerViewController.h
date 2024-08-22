// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMOVIECONTAINERVIEWCONTROLLER_H
#define PMMOVIECONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, AVPlayerItem, NSNumber, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PMPlayerControlling, PMMovieContainerViewControllerDelegate;


#import "PMPosterViewController.h"
#import "PMPosterContainerView.h"
#import "PMRotationViewController.h"
#import "PMAVSynchronizedView.h"
#import "PMTitleSubtitleView.h"

@interface PMMovieContainerViewController : UIViewController <UIGestureRecognizerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PMPlayerControlling>



@property (nonatomic) BOOL airplayActive; // ivar: _airplayActive
@property (readonly, nonatomic) int currentFrameTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMMovieContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PMPosterViewController *parentAirplayPlaceholderPosterViewController; // ivar: _parentAirplayPlaceholderPosterViewController
@property (retain, nonatomic) id *playbackProgressTimeObserver; // ivar: _playbackProgressTimeObserver
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) float playerRate;
@property (readonly, nonatomic) BOOL playerReadyForDisplay;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) CGFloat posterAspect;
@property (retain, nonatomic) PMPosterContainerView *posterContainerView; // ivar: _posterContainerView
@property (nonatomic) NSInteger posterMoodIndex; // ivar: _posterMoodIndex
@property (retain, nonatomic) PMPosterViewController *posterViewController; // ivar: _posterViewController
@property (nonatomic) BOOL preventRotation; // ivar: _preventRotation
@property (nonatomic) BOOL registeredAsAirPlayProvider; // ivar: _registeredAsAirPlayProvider
@property (retain, nonatomic) PMRotationViewController *rotationViewController; // ivar: _rotationViewController
@property (retain, nonatomic) NSString *savedAudioCategory; // ivar: _savedAudioCategory
@property (nonatomic) NSInteger secondaryPosterMoodIndex; // ivar: _secondaryPosterMoodIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) PMAVSynchronizedView *synchronizedView; // ivar: _synchronizedView
@property (copy, nonatomic) NSNumber *titleScale; // ivar: _titleScale
@property (readonly, nonatomic) PMTitleSubtitleView *titleView;
@property (retain, nonatomic) UITapGestureRecognizer *visibilityTapGestureRecognizer; // ivar: _visibilityTapGestureRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *zoomDoubleTap; // ivar: _zoomDoubleTap


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)isPlayerAtEndOfProject;
-(BOOL)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg0 ;
-(CGFloat)heightOfTitleArea;
-(id)addAirPlayPlaceholderViewToParentView:(id)arg0 ;
-(id)airPlayScreenController;
-(id)contentViewControllerForAirPlayController:(id)arg0 ;
-(id)player;
-(void)_makeAudioCategoryPlayback;
-(void)_notifyTitleScaleChanged;
-(void)_restoreAudioCategory;
-(void)_saveAudioCategory;
-(void)activateAirplay;
-(void)addObserversToPlayer;
-(void)addTimeObserverToPlayer;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg0 ;
-(void)airPlayControllerScreenAvailabilityChanged:(id)arg0 ;
-(void)deactivateAirplay;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)hidePosterAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)hidePosterTitleAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)mediaServicesReset;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playerResumeActive;
-(void)registerAsAirPlayProvider;
-(void)removeAirPlayPlaceholderViewFromParentView:(id)arg0 ;
-(void)removeObserversFromPlayer;
-(void)setCurrentTime:(struct ? )arg0 ;
-(void)setCurrentTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)setupPosterViews;
-(void)showPosterAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)teardownPosterViews;
-(void)toggleControlVisibility:(id)arg0 ;
-(void)toggleZoom:(id)arg0 ;
-(void)unregisterAsAirPlayProvider;
-(void)updateAirplay;
-(void)updatePostersViewsWithImages:(id)arg0 ;
-(void)updatePostersViewsWithProduction:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif