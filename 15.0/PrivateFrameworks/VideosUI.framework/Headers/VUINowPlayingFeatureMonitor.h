// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUINOWPLAYINGFEATUREMONITOR_H
#define VUINOWPLAYINGFEATUREMONITOR_H

@class NSArray, NSMutableDictionary, NSString, NSMutableArray, NSMapTable, NSMutableSet, TVMediaPlaybackManager;
@protocol TVMediaPlaybackManagerDelegate, VUINowPlayingFeatureMonitorDelegate, VUINowPlayingFeature, TVPAVFPlayback;

#import <Foundation/Foundation.h>


@interface VUINowPlayingFeatureMonitor : NSObject <TVMediaPlaybackManagerDelegate>

 {
    ? _delegateFlags;
}


@property (readonly, nonatomic) NSArray *allFeatures;
@property (retain, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos; // ivar: _boundaryTimeObserverInfos
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUINowPlayingFeatureMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *elapsedTimeObserverToken; // ivar: _elapsedTimeObserverToken
@property (retain, nonatomic) NSMutableArray *elapsedTimes; // ivar: _elapsedTimes
@property (retain, nonatomic) NSMutableArray *enabledUIModes; // ivar: _enabledUIModes
@property (retain, nonatomic) NSMapTable *featureBoundaryInfos; // ivar: _featureBoundaryInfos
@property (retain, nonatomic) NSMapTable *featureDependencies; // ivar: _featureDependencies
@property (retain, nonatomic) NSObject<VUINowPlayingFeature> *featureLastRequestedUI; // ivar: _featureLastRequestedUI
@property (retain, nonatomic) NSMapTable *featureTimers; // ivar: _featureTimers
@property (retain, nonatomic) NSMapTable *featureTokens; // ivar: _featureTokens
@property (retain, nonatomic) NSMutableSet *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastProcessedElapsedTime; // ivar: _lastProcessedElapsedTime
@property (nonatomic) BOOL observingElapsedTime; // ivar: _observingElapsedTime
@property (retain, nonatomic) TVMediaPlaybackManager *playbackManager; // ivar: _playbackManager
@property (retain, nonatomic) NSObject<TVPAVFPlayback> *player; // ivar: _player
@property (readonly) Class superclass;


-(BOOL)_hasActiveFeaturesInArray:(id)arg0 ;
-(BOOL)_hasAnyActiveFeature;
-(BOOL)_isElapsedTimeWithinFeatureTimeWindow:(id)arg0 ;
-(BOOL)_isHybridFeature:(id)arg0 ;
-(BOOL)_isTVAdvisoryFeature:(id)arg0 ;
-(BOOL)_isTimeBoundFeature:(id)arg0 ;
-(BOOL)_isTimerFeatureExpired:(id)arg0 ;
-(BOOL)_isTimerTriggeredFeature:(id)arg0 ;
-(BOOL)_isUserTriggeredFeature:(id)arg0 ;
-(BOOL)_needsUIForFeature:(id)arg0 ;
-(BOOL)_shouldActivateTimeBoundFeatureInitially:(id)arg0 ;
-(BOOL)_shouldAnimateFeature:(id)arg0 ;
-(BOOL)mediaPlaybackManager:(id)arg0 shouldEnableUIModeImplicitly:(NSInteger)arg1 ;
-(id)_activeFeature;
-(id)_activeFeatures;
-(id)_observerInfoForFeature:(id)arg0 matchingTime:(CGFloat)arg1 ;
-(id)_timeBoundFeatures;
-(id)activeFeatureForType:(NSUInteger)arg0 ;
-(id)featuresForType:(NSUInteger)arg0 ;
-(id)init;
-(void)_activateFeature:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_addObservedToken:(id)arg0 forFeature:(id)arg1 ;
-(void)_addTimeObservingForFeature:(id)arg0 withStartTime:(CGFloat)arg1 andHandler:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_cancelTimerForFeature:(id)arg0 ;
-(void)_cleanUpEverything;
-(void)_cleanupFeature:(id)arg0 ;
-(void)_deactivateFeature:(id)arg0 animated:(BOOL)arg1 ;
-(void)_expireTimerFeaturesIfNeeded;
-(void)_playbackStateChangedNottificaiton:(id)arg0 ;
-(void)_processAnyTimeBoundFeatures;
-(void)_processElapsedTime:(CGFloat)arg0 ;
-(void)_processFeature:(id)arg0 ;
-(void)_processLastElapsedTime;
-(void)_processTimeBoundFeature:(id)arg0 ;
-(void)_processTimerTriggeredFeature:(id)arg0 ;
-(void)_processUserTriggeredFeature:(id)arg0 activate:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_registerPlaybackStateChangeNotification;
-(void)_removeAllObservedTokensForFeature:(id)arg0 ;
-(void)_removeTimeObservingForFeature:(id)arg0 withStartTime:(CGFloat)arg1 ;
-(void)_scheduleDeactivationOfTimeBoundFeature:(id)arg0 ;
-(void)_setupTimerFeatureExpiration;
-(void)_startObservingElapsedTime;
-(void)_unregisterPlaybackStateNotification;
-(void)_updateBoundaryObserverForFeature:(id)arg0 change:(id)arg1 ;
-(void)addFeature:(id)arg0 ;
-(void)addFeature:(id)arg0 withDependencyToPreferredFeatures:(id)arg1 ;
-(void)deactivateFeature:(id)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)enableUIMode:(NSInteger)arg0 enabled:(BOOL)arg1 ;
// -(void)mediaPlaybackManager:(id)arg0 shouldHideUI:(BOOL)arg1 animated:(BOOL)arg2 animations:(id)arg3 completion:(unk)arg4  ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeFeature:(id)arg0 ;
-(void)removeFeaturesMatching:(id)arg0 ;


@end


#endif