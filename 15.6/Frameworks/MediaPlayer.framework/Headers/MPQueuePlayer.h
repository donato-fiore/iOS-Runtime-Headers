// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPQUEUEPLAYER_H
#define MPQUEUEPLAYER_H

@class AVPlayerItem, AVQueuePlayer, NSMutableArray, AVPlayer, NSString, NSError, NSArray;
@protocol MPAVRoutingControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPAVRoutingController.h"
#import "MPAVRoute.h"

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _allowsExternalPlaybackRevisionID;
    MPAVRoutingController *_routingController;
    AVPlayerItem *_currentItem;
    ? _currentTime;
    BOOL _isExternalPlaybackActive;
    BOOL _pausedForPlaybackQueueTransaction;
    MPAVRoute *_lastPickedRoute;
    NSInteger _playbackQueueTransactionCount;
    AVQueuePlayer *_player;
    NSMutableArray *_queuedOperations;
    float _rate;
    float _rateBeforePlaybackQueueTransaction;
    BOOL _routeDidChangeDuringPlaybackQueueTransaction;
    NSInteger _status;
    BOOL _outputObscuredDueToInsufficientExternalProtection;
    NSUInteger _usesAudioOnlyModeForExternalPlaybackRevisionID;
    NSUInteger _usesExternalPlaybackWhileExternalScreenIsActiveRevisionID;
}


@property (readonly, nonatomic) NSInteger _externalProtectionStatus;
@property (readonly, nonatomic) AVPlayer *_player;
@property (nonatomic) NSInteger actionAtItemEnd;
@property (readonly, nonatomic) BOOL allowsExternalPlayback;
@property (readonly, nonatomic) AVPlayerItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultItemEQPresetType; // ivar: _defaultItemEQPresetType
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (readonly, nonatomic) NSInteger externalPlaybackType;
@property (copy, nonatomic) NSString *externalPlaybackVideoGravity;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaybackQueueTransactionActive;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (copy, nonatomic) id *playbackQueueCommitHandler; // ivar: _playbackQueueCommitHandler
@property (readonly, nonatomic) id *playerAVAudioSession;
@property (nonatomic) float rate;
@property (readonly, nonatomic) float rawRate; // ivar: _rawRate
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesAudioOnlyModeForExternalPlayback;
@property (readonly, nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;


-(BOOL)_resumePlayback:(CGFloat)arg0 ;
-(float)_userVolume;
-(id)addBoundaryTimeObserverForTimes:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)addPeriodicTimeObserverForInterval:(struct ? )arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(struct ? )currentTime;
-(void)_currentItemDidChangeNotification:(id)arg0 ;
-(void)_setClientName:(id)arg0 ;
-(void)_setEQPreset:(int)arg0 ;
-(void)_setExpectedAssetTypes:(id)arg0 ;
-(void)_setPreferredLanguageList:(id)arg0 ;
-(void)_setStoppingFadeOutDuration:(float)arg0 ;
-(void)_setUserVolume:(float)arg0 ;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg0 ;
-(void)advanceToNextItem;
-(void)beginPlaybackQueueTransactionAndPause:(BOOL)arg0 ;
-(void)commitPlaybackQueueTransaction;
-(void)dealloc;
-(void)insertItem:(id)arg0 afterItem:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)prepareItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeAllItems;
-(void)removeItem:(id)arg0 ;
-(void)removeTimeObserver:(id)arg0 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)seekToTime:(struct ? )arg0 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(struct ? )arg0 ;
-(void)setMediaSelectionCriteria:(id)arg0 forMediaCharacteristic:(id)arg1 ;


@end


#endif