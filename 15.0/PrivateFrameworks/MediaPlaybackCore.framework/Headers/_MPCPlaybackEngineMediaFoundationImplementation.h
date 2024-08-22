// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYBACKENGINEMEDIAFOUNDATIONIMPLEMENTATION_H
#define _MPCPLAYBACKENGINEMEDIAFOUNDATIONIMPLEMENTATION_H

@class NSDictionary, MPAVItem, NSString, AVPlayerViewController, MPQueuePlayer;
@protocol MFPlaybackStackControllerDelegate, MPAVQueueControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineImplementation, MFAssetLoading, MFPlaybackStackController><MFQueueManagement, MPAVQueueController;

#import <Foundation/Foundation.h>

#import "MPCItemBookmarker.h"
#import "MPCPlayerItemConfigurator.h"
#import "MPCErrorControllerImplementation.h"
#import "MPCExternalPlaybackControllerImplementation.h"
#import "MPCLeaseController.h"
#import "MPCPlaybackEngine.h"
#import "MPCAVItemTrace.h"
#import "MPCMediaFoundationTranslator.h"

@interface _MPCPlaybackEngineMediaFoundationImplementation : NSObject <MFPlaybackStackControllerDelegate, MPAVQueueControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineImplementation>



@property (readonly, nonatomic) NSDictionary *_stateDictionary;
@property (nonatomic) NSInteger actionAtQueueEnd; // ivar: _actionAtQueueEnd
@property (retain, nonatomic) NSObject<MFAssetLoading> *assetLoader; // ivar: _assetLoader
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp; // ivar: _autoPlayWhenLikelyToKeepUp
@property (retain, nonatomic) MPCItemBookmarker *bookmarker; // ivar: _bookmarker
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator; // ivar: _configurator
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic) float currentRate;
@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPCErrorControllerImplementation *errorController; // ivar: _errorController
@property (retain, nonatomic) MPCExternalPlaybackControllerImplementation *externalPlaybackController; // ivar: _externalPlaybackController
@property (readonly, nonatomic) BOOL hasPlayedSuccessfully;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPCLeaseController *leaseController; // ivar: _leaseController
@property (nonatomic) BOOL loadingInitialItem; // ivar: _loadingInitialItem
@property (nonatomic) NSUInteger pendingWaitForReadyToPlaySignpostIdentifier; // ivar: _pendingWaitForReadyToPlaySignpostIdentifier
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) NSObject<MFPlaybackStackController><MFQueueManagement> *playbackStackController; // ivar: _playbackStackController
@property (retain, nonatomic) MPCAVItemTrace *playbackStartTrace; // ivar: _playbackStartTrace
@property (readonly, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) NSObject<MPAVQueueController> *queueController; // ivar: _queueController
@property (readonly, nonatomic) MPQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (readonly, nonatomic, getter=isReloadingPlaybackContext) BOOL reloadingPlaybackContext; // ivar: _reloadingPlaybackContext
@property (readonly, nonatomic) NSInteger state;
@property (readonly, nonatomic) NSInteger stateBeforeInterruption;
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;
@property (retain, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


+(id)describePlayer:(id)arg0 ;
-(BOOL)changePlaybackIndexBy:(NSInteger)arg0 deltaType:(NSInteger)arg1 ignoreElapsedTime:(BOOL)arg2 force:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)skipWithDirectionShouldJumpToItemStart:(NSInteger)arg0 ;
-(id)_MPAVItemForMFQueuePlayerItem:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_logPlayerEventsForQueueItem:(id)arg0 ;
-(void)_logTimeJumpForItem:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 userInitiated:(BOOL)arg3 timeStamp:(id)arg4 ;
-(void)_playbackDidStopForItem:(id)arg0 source:(id)arg1 reason:(id)arg2 time:(CGFloat)arg3 ;
-(void)_resetPlaybackStack;
-(void)_setupPlaybackStackWithPlaybackEngine:(id)arg0 queueController:(id)arg1 ;
-(void)_updateActiveFormatForQueueItem:(id)arg0 ;
-(void)assetLoadingDidCompleteForItem:(id)arg0 error:(id)arg1 ;
-(void)assetLoadingDidStartForItem:(id)arg0 ;
-(void)becomeActiveWithCompletion:(id)arg0 ;
-(void)beginScanningWithDirection:(NSInteger)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)beginUsingVideoLayer;
-(void)currentItemWillChangeFromItem:(id)arg0 toItem:(id)arg1 source:(NSInteger)arg2 timeStamp:(id)arg3 ;
-(void)dealloc;
-(void)didReachEndOfQueueWithReason:(id)arg0 ;
-(void)didReportSignpostWithType:(NSInteger)arg0 ;
-(void)endPlayback;
-(void)endPlaybackWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)endScanningWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)endUsingVideoLayer;
-(void)errorResolutionDidEndForItem:(id)arg0 error:(id)arg1 resolution:(NSInteger)arg2 ;
-(void)errorResolutionDidStartForItem:(id)arg0 error:(id)arg1 ;
-(void)firstVideoFrameWasRenderedForItem:(id)arg0 timeStamp:(id)arg1 ;
-(void)interruptionDidBeginWithInterruptor:(id)arg0 timeStamp:(id)arg1 ;
-(void)interruptionDidFinishForInterruptor:(id)arg0 shouldResume:(BOOL)arg1 timeStamp:(id)arg2 ;
-(void)itemDidBecomeCurrent:(id)arg0 source:(NSInteger)arg1 timeStamp:(id)arg2 ;
-(void)itemDidFailToLoad:(id)arg0 error:(id)arg1 timeStamp:(id)arg2 ;
-(void)itemDidFailToPlayToEnd:(id)arg0 error:(id)arg1 timeStamp:(id)arg2 ;
-(void)itemDidPlayToEnd:(id)arg0 timeStamp:(id)arg1 ;
-(void)itemDidResignCurrent:(id)arg0 source:(NSInteger)arg1 timeStamp:(id)arg2 ;
-(void)itemIsReadyToPlay:(id)arg0 timeStamp:(id)arg1 ;
-(void)jumpToTime:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)loadSessionWithQueueController:(id)arg0 completionHandler:(id)arg1 ;
-(void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg0 timeAtDeath:(CGFloat)arg1 timeStamp:(id)arg2 ;
-(void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg0 ;
-(void)pause;
-(void)pauseForLeasePreventionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)pauseWithFadeout:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)pauseWithFadeout:(float)arg0 ;
-(void)pauseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)playWithOptions:(NSUInteger)arg0 ;
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
-(void)queueController:(id)arg0 didChangeActionAtQueueEnd:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didChangeContentsWithReplacementPlaybackContext:(id)arg1 ;
-(void)queueController:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didIncrementVersionForSegment:(id)arg1 ;
-(void)queueController:(id)arg0 failedToLoadItem:(id)arg1 ;
-(void)queueControllerDidChangeContents:(id)arg0 ;
-(void)relativeVolumeDidChangeTo:(float)arg0 timeStamp:(id)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceCurrentItemWithPlaybackContext:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)routeDidChange:(BOOL)arg0 metadata:(id)arg1 timeStamp:(id)arg2 ;
-(void)screenRecordingDidChange:(BOOL)arg0 timeStamp:(id)arg1 ;
-(void)setQueueWithPlaybackContext:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setRate:(float)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)skipWithDirection:(NSInteger)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)stateDidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 timeStamp:(id)arg2 ;
-(void)togglePlaybackWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)tracksDidChangeForItem:(id)arg0 timeStamp:(id)arg1 ;
-(void)updateAudioSession;
-(void)userActionDidBegin:(id)arg0 ;
-(void)userActionDidEnd:(id)arg0 error:(id)arg1 ;
-(void)userSeekCompletedForItem:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 timeStamp:(id)arg3 ;


@end


#endif