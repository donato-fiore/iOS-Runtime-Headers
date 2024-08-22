// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXVIDEOCOMPONENTVIEW_H
#define SXVIDEOCOMPONENTVIEW_H

@class NSString, SVVideoPlayerViewController, SVVolumeProvider;
@protocol SXViewportChangeListener, SXMediaPlaybackDelegate, SVVideoPlayerViewControllerDelegate, SVVideoPlayerViewControllerDataSource, SWReachabilityObserver, SXFullscreenVideoPlaybackCandidate, SXAppStateMonitor, SXBookmarkManager, SXVideoAdProviderFactory, SWReachabilityProvider, SXResourceDataSource, SXSceneStateMonitor, SXScrollObserverManager;


#import "SXMediaComponentView.h"
#import "SXVideoAnalyticsRouter.h"
#import "SXPosterFrameView.h"
#import "SXVideoComponentAnalyticsReporting.h"
#import "SXVideoPlayerViewControllerManager.h"

@interface SXVideoComponentView : SXMediaComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SVVideoPlayerViewControllerDelegate, SVVideoPlayerViewControllerDataSource, SWReachabilityObserver, SXFullscreenVideoPlaybackCandidate>



@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter; // ivar: _analyticsRouter
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<SXBookmarkManager> *bookmarkManager; // ivar: _bookmarkManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isReceivingViewportDynamicBoundsChanges; // ivar: _isReceivingViewportDynamicBoundsChanges
@property (retain, nonatomic) SXPosterFrameView *posterFrame; // ivar: _posterFrame
@property (readonly, nonatomic) NSObject<SXVideoAdProviderFactory> *prerollAdFactory; // ivar: _prerollAdFactory
@property (copy, nonatomic) id *presentationBlock; // ivar: _presentationBlock
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<SXResourceDataSource> *resourceDataSource; // ivar: _resourceDataSource
@property (readonly, nonatomic) NSObject<SXSceneStateMonitor> *sceneStateMonitor; // ivar: _sceneStateMonitor
@property (readonly, nonatomic) NSObject<SXScrollObserverManager> *scrollObserverManager; // ivar: _scrollObserverManager
@property (readonly) Class superclass;
@property (copy, nonatomic) id *thumbnailRequestCancelHandler; // ivar: _thumbnailRequestCancelHandler
@property (retain, nonatomic) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter; // ivar: _videoComponentAnalyticsReporter
@property (retain, nonatomic) SVVideoPlayerViewController *videoPlayerViewController; // ivar: _videoPlayerViewController
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // ivar: _videoPlayerViewControllerManager
@property (readonly, nonatomic) SVVolumeProvider *volumeProvider; // ivar: _volumeProvider


-(BOOL)allowHierarchyRemoval;
-(BOOL)canEnterFullscreen;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg0 ;
-(BOOL)videoPlayerIsMoreThan50PercentVisible;
-(BOOL)videoPlayerViewControllerShouldStartPlayback:(id)arg0 ;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)analyticsVideoType;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 sceneStateMonitor:(id)arg6 resourceDataSource:(id)arg7 reachabilityProvider:(id)arg8 scrollObserverManager:(id)arg9 volumeProvider:(id)arg10 videoPlayerViewControllerManager:(id)arg11 bookmarkManager:(id)arg12 prerollAdFactory:(id)arg13 ;
-(id)transitionContentView;
-(id)videoAdForVideoPlayerViewController:(id)arg0 ;
-(id)videoForVideoPlayerViewController:(id)arg0 ;
-(struct CGRect )transitionContentFrame;
-(void)discardContents;
-(void)enterFullscreen;
-(void)loadComponent:(id)arg0 ;
-(void)loadPosterFrameImage;
-(void)pauseMediaPlayback;
-(void)pausePrerollIfNeeded;
-(void)playButtonTapped;
-(void)prepareForTransitionType:(NSUInteger)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)reachabilityChanged:(BOOL)arg0 ;
-(void)registerAsMediaPlaybackDelegate;
-(void)registerForViewportDynamicBoundsChanges;
-(void)renderContents;
-(void)setupVideoPlayerViewController:(id)arg0 ;
-(void)showPosterFrame;
-(void)unloadVideoPlayerIfShowingAd;
-(void)unregisterForViewportDynamicBoundsChanges;
-(void)videoPlayerViewController:(id)arg0 resumedPlaybackOfVideo:(id)arg1 ;
-(void)videoPlayerViewController:(id)arg0 startedPlaybackOfVideo:(id)arg1 ;
-(void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg0 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)viewport:(id)arg0 interfaceOrientationChangedFromOrientation:(NSInteger)arg1 ;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;


@end


#endif