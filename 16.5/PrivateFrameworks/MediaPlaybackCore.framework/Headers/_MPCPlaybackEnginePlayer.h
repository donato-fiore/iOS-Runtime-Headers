// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCPLAYBACKENGINEPLAYER_H
#define _MPCPLAYBACKENGINEPLAYER_H

@class NSDictionary, MPAVItem, NSNumber, NSString, AVPlayerViewController;
@protocol MFPlaybackStackControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineEventObserving, MFAssetLoading, MPCPlaybackEngineEventStreamDeferralAssertion, MFPlaybackStackController><MFQueueManagement;

#import <Foundation/Foundation.h>

#import "MPCItemBookmarker.h"
#import "MPCPlayerItemConfigurator.h"
#import "MPCPlaybackErrorController.h"
#import "MPCExternalPlaybackController.h"
#import "MPCLeaseController.h"
#import "MPCPlaybackEngine.h"
#import "MPCAVItemTrace.h"
#import "_MPCAudioSessionController.h"
#import "MPCMediaFoundationTranslator.h"

@interface _MPCPlaybackEnginePlayer : NSObject <MFPlaybackStackControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineEventObserving>



@property (readonly, nonatomic) NSDictionary *_stateDictionary;
@property (retain, nonatomic) NSObject<MFAssetLoading> *assetLoader; // ivar: _assetLoader
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp; // ivar: _autoPlayWhenLikelyToKeepUp
@property (retain, nonatomic) MPCItemBookmarker *bookmarker; // ivar: _bookmarker
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator; // ivar: _configurator
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic) float currentRate;
@property (copy, nonatomic) NSNumber *currentRelativeVolume; // ivar: _currentRelativeVolume
@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPCPlaybackErrorController *errorController; // ivar: _errorController
@property (retain, nonatomic) NSObject<MPCPlaybackEngineEventStreamDeferralAssertion> *evsDeferralAssertionForFirstAudioFrame; // ivar: _evsDeferralAssertionForFirstAudioFrame
@property (retain, nonatomic) MPCExternalPlaybackController *externalPlaybackController; // ivar: _externalPlaybackController
@property (readonly, nonatomic) BOOL hasPlayedSuccessfully;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger jumpIdentifier; // ivar: _jumpIdentifier
@property (nonatomic) BOOL lastReportedVocalAttenuationEnabledState; // ivar: _lastReportedVocalAttenuationEnabledState
@property (retain, nonatomic) MPCLeaseController *leaseController; // ivar: _leaseController
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) NSObject<MFPlaybackStackController><MFQueueManagement> *playbackStackController; // ivar: _playbackStackController
@property (retain, nonatomic) MPCAVItemTrace *playbackStartTrace; // ivar: _playbackStartTrace
@property (readonly, nonatomic) AVPlayerViewController *playerViewController;
@property (readonly, nonatomic, getter=isReloadingPlaybackContext) BOOL reloadingPlaybackContext; // ivar: _reloadingPlaybackContext
@property (readonly, nonatomic) NSInteger state;
@property (readonly, nonatomic) NSInteger stateBeforeInterruption;
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;
@property (retain, nonatomic) _MPCAudioSessionController *transientAudioSessionController; // ivar: _transientAudioSessionController
@property (retain, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


+(id)describePlayer:(id)arg0 ;
-(BOOL)_isAVKitSkipAction:(id)arg0 ;
-(BOOL)_itemConfigurationIsIncompatibleWithVocalAttenuationState:(id)arg0 ;
-(CGFloat)_adjustPlayerTimeForAudioTapProcessing:(CGFloat)arg0 ;
-(id)_MPAVItemForMFQueuePlayerItem:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_logPlayerEventsForQueueItem:(id)arg0 ;
-(void)_logTimeJumpForItem:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 userInitiated:(BOOL)arg3 timeStamp:(id)arg4 ;
-(void)_performSkipForUserAction:(id)arg0 ;
-(void)_playbackDidStopForItem:(id)arg0 source:(id)arg1 reason:(id)arg2 time:(CGFloat)arg3 ;
-(void)_setupPlaybackStackWithPlaybackEngine:(id)arg0 ;
-(void)_updateActiveFormatForQueueItem:(id)arg0 ;
-(void)assetLoadingDidCompleteForItem:(id)arg0 error:(id)arg1 ;
-(void)assetLoadingDidStartForItem:(id)arg0 ;
-(void)becomeActiveWithCompletion:(id)arg0 ;
-(void)currentItemWillChangeFromItem:(id)arg0 toItem:(id)arg1 source:(NSInteger)arg2 timeStamp:(id)arg3 ;
-(void)dealloc;
-(void)didReachEndOfQueueWithReason:(id)arg0 ;
-(void)didReportSignpostWithType:(NSInteger)arg0 ;
-(void)endScanningWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)engine:(id)arg0 didChangeQueueController:(id)arg1 ;
-(void)engine:(id)arg0 didChangeQueueWithReason:(id)arg1 ;
-(void)engine:(id)arg0 willRemoveQueueController:(id)arg1 ;
-(void)errorResolutionDidEndForItem:(id)arg0 error:(id)arg1 resolution:(NSInteger)arg2 ;
-(void)errorResolutionDidStartForItem:(id)arg0 error:(id)arg1 ;
-(void)finalizeSetQueue:(id)arg0 completion:(id)arg1 ;
-(void)finalizeStateRestoreWithCompletion:(id)arg0 ;
-(void)firstFrameWillRenderForItem:(id)arg0 timeStamp:(id)arg1 ;
-(void)firstVideoFrameWasRenderedForItem:(id)arg0 timeStamp:(id)arg1 ;
-(void)interruptionDidBeginWithInterruptor:(id)arg0 timeStamp:(id)arg1 ;
-(void)interruptionDidFinishForInterruptor:(id)arg0 shouldResume:(BOOL)arg1 timeStamp:(id)arg2 ;
-(void)invalidateEVSDeferralAssertionForFirstAudioFrame;
-(void)itemDidBecomeCurrent:(id)arg0 source:(NSInteger)arg1 timeStamp:(id)arg2 ;
-(void)itemDidFailToLoad:(id)arg0 silently:(BOOL)arg1 error:(id)arg2 timeStamp:(id)arg3 ;
-(void)itemDidFailToPlayToEnd:(id)arg0 error:(id)arg1 timeStamp:(id)arg2 ;
-(void)itemDidPlayToEnd:(id)arg0 timeStamp:(id)arg1 ;
-(void)itemDidResignCurrent:(id)arg0 source:(NSInteger)arg1 timeStamp:(id)arg2 ;
-(void)itemIsReadyToPlay:(id)arg0 timeStamp:(id)arg1 ;
-(void)jumpToTime:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg0 timeAtDeath:(CGFloat)arg1 timeStamp:(id)arg2 ;
-(void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg0 ;
-(void)pauseForLeasePreventionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)pauseWithFadeout:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)pauseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)playWithRate:(float)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)playbackBufferStateDidChangeToState:(NSInteger)arg0 forItem:(id)arg1 timeStamp:(id)arg2 ;
-(void)playbackDidReachQueueEndWithTimeStamp:(id)arg0 ;
-(void)playbackDidStartForItem:(id)arg0 rate:(float)arg1 fromStalling:(BOOL)arg2 timeStamp:(id)arg3 ;
-(void)playbackDidStopForItem:(id)arg0 source:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3 ;
-(void)playbackIsBlockedOnNonPlayableItem:(id)arg0 ;
-(void)playbackIsLikelyToKeepUp:(BOOL)arg0 forItem:(id)arg1 timeStamp:(id)arg2 ;
-(void)playbackRateDidChangeNotifiedForItem:(id)arg0 newRate:(float)arg1 reason:(id)arg2 participantIdentifier:(id)arg3 timeStamp:(id)arg4 ;
-(void)playbackRateDidChangeToRate:(float)arg0 forItem:(id)arg1 timeStamp:(id)arg2 ;
-(void)playbackTimeDidChangeTo:(CGFloat)arg0 forItem:(id)arg1 reason:(NSInteger)arg2 timeStamp:(id)arg3 ;
-(void)playbackWaitingToPlayForItem:(id)arg0 reason:(id)arg1 timeStamp:(id)arg2 ;
-(void)prewarm;
-(void)relativeVolumeDidChangeTo:(float)arg0 timeStamp:(id)arg1 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg0 allowReuse:(BOOL)arg1 ;
-(void)routeDidChange:(BOOL)arg0 metadata:(id)arg1 timeStamp:(id)arg2 ;
-(void)screenRecordingDidChange:(BOOL)arg0 timeStamp:(id)arg1 ;
-(void)setRate:(float)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setupPlaybackStackIfNeeded;
-(void)stackControllerDidCreateTransitionFrom:(id)arg0 to:(id)arg1 type:(NSInteger)arg2 parameters:(id)arg3 ;
-(void)stateDidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 timeStamp:(id)arg2 ;
-(void)takeEVSDeferralAssertionForFirstAudioFrame;
-(void)timeControlStatusDidChange:(NSInteger)arg0 waitingReason:(id)arg1 timeStamp:(id)arg2 ;
-(void)togglePlaybackWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)tracksDidChangeForItem:(id)arg0 timeStamp:(id)arg1 ;
-(void)updateAudioSession;
-(void)userActionDidBegin:(id)arg0 ;
-(void)userActionDidEnd:(id)arg0 error:(id)arg1 ;
-(void)userSeekCompletedForItem:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 timeStamp:(id)arg3 ;


@end


#endif