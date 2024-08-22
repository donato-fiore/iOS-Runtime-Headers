// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCQUEUECONTROLLER_H
#define MPCQUEUECONTROLLER_H

@class NSMapTable, NSMutableDictionary, MPAVItem, NSString, NSMutableArray;
@protocol MPCPlaybackEngineEventObserving, MPCQueueControllerBehaviorHost, MPCQueueControllerExternalSyncBehaviorHost, MPAVItemObserver, MSVSegmentedCoding, MPCQueueControllerBehavior, MPCQueueControllerBehaviorImplementation, MPCQueueControllerDelegate, MPCQueueControllerBehaviorMusic, MPCQueueControllerBehaviorMusicSharePlay, MPCQueueControllerPlaybackEngine, MPCQueueControllerReusableBehavior, MPCQueueControllerUpNextBehavior;

#import <Foundation/Foundation.h>

#import "_MPCQueueControllerDisplayCache.h"
#import "MPCPlaybackEngineEventStream.h"

@interface MPCQueueController : NSObject <MPCPlaybackEngineEventObserving, MPCQueueControllerBehaviorHost, MPCQueueControllerExternalSyncBehaviorHost, MPAVItemObserver, MSVSegmentedCoding>

 {
    NSInteger _syncResetAttempts;
    NSUInteger _stateHandle;
    BOOL _loadingAdditionalItems;
}


@property (retain, nonatomic) NSMapTable *activeEdits; // ivar: _activeEdits
@property (readonly, nonatomic) NSObject<MPCQueueControllerBehavior> *behavior;
@property (retain, nonatomic) NSObject<MPCQueueControllerBehaviorImplementation> *behaviorImpl; // ivar: _behaviorImpl
@property (readonly, nonatomic) NSInteger behaviorType; // ivar: _behaviorType
@property (retain, nonatomic) NSMutableDictionary *coderVersions; // ivar: _coderVersions
@property (readonly, nonatomic) BOOL containsRestorableContent;
@property (readonly, nonatomic) MPAVItem *currentItem; // ivar: _currentItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPCQueueControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MPCQueueControllerDisplayCache *displayCache; // ivar: _displayCache
@property (readonly, nonatomic) NSString *engineID;
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastSavedTime; // ivar: _lastSavedTime
@property (copy, nonatomic) NSString *loadingContentItemID; // ivar: _loadingContentItemID
@property (readonly, nonatomic) NSObject<MPCQueueControllerBehaviorMusic> *music;
@property (readonly, nonatomic) NSObject<MPCQueueControllerBehaviorMusicSharePlay> *musicSharePlay;
@property (weak, nonatomic) NSObject<MPCQueueControllerPlaybackEngine> *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSMutableArray *potentialCurrentItemEdits; // ivar: _potentialCurrentItemEdits
@property (readonly, copy, nonatomic) NSString *preferredFirstContentItemID; // ivar: _preferredFirstContentItemID
@property (copy, nonatomic) NSString *restoreLastStartTimePositionToContentItemID; // ivar: _restoreLastStartTimePositionToContentItemID
@property (readonly, nonatomic) NSObject<MPCQueueControllerReusableBehavior> *reusableBehavior;
@property (readonly, copy, nonatomic) NSString *revisionString;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *targetContentItemID; // ivar: _targetContentItemID
@property (readonly, nonatomic) NSInteger targetContentItemSource; // ivar: _targetContentItemSource
@property (readonly, nonatomic) NSObject<MPCQueueControllerUpNextBehavior> *upNextBehavior;


+(BOOL)isSupportedSessionType:(id)arg0 forEngine:(id)arg1 reason:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(Class)testBehaviorClass;
+(NSInteger)behaviorForQueue:(id)arg0 ;
+(id)allKnownSessionTypes;
+(id)describePlayer:(id)arg0 ;
+(void)registerPublisher:(id)arg0 ;
+(void)setTestBehaviorClass:(Class)arg0 ;
+(void)unregisterPublisher:(id)arg0 ;
-(BOOL)_playerItemDidBecomeActiveWithContentItemID:(id)arg0 ;
-(BOOL)_withRestorableBehavior:(id)arg0 ;
-(BOOL)_withTransportableBehavior:(id)arg0 ;
-(BOOL)canJumpToContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canNextTrackForContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canPreviousTrackForContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)isExportableSessionType:(id)arg0 forContentItemID:(id)arg1 reason:(*id)arg2 ;
-(NSInteger)displayIndexForContentItemID:(id)arg0 ;
-(NSInteger)displayItemCount;
-(NSInteger)versionForSegment:(id)arg0 ;
-(id)_contentItemIDWithOffset:(NSInteger)arg0 fromItemID:(id)arg1 mode:(NSInteger)arg2 didReachEnd:(*BOOL)arg3 ;
-(id)_itemForContentItemID:(id)arg0 allowReuse:(BOOL)arg1 ;
-(id)_stateDictionaryIncludingQueue:(BOOL)arg0 ;
-(id)beginEditWithReason:(id)arg0 ;
-(id)beginExternalSyncEditWithReason:(id)arg0 ;
-(id)contentItemIDAtIndex:(NSInteger)arg0 ;
-(id)contentItemIDWithCurrentItemOffset:(NSInteger)arg0 mode:(NSInteger)arg1 didReachEnd:(*BOOL)arg2 ;
-(id)contentItemIDsFromOffset:(NSInteger)arg0 toOffset:(NSInteger)arg1 mode:(NSInteger)arg2 nowPlayingIndex:(*NSInteger)arg3 ;
-(id)init;
-(id)initWithBehaviorType:(NSInteger)arg0 sessionID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)itemForContentItemID:(id)arg0 ;
-(id)itemForContentItemID:(id)arg0 allowReuse:(BOOL)arg1 ;
-(id)segmentForCodingKey:(id)arg0 ;
-(void)_commitEdit:(id)arg0 ;
-(void)_currentItemDidChangeFromItem:(id)arg0 toItem:(id)arg1 ;
-(void)_emitEventsForItemChangeFromItem:(id)arg0 toCurrentItem:(id)arg1 ;
-(void)_evaluateContextAwareTriggersWithReason:(id)arg0 ;
-(void)_evaluateCurrentItemWithEdit:(id)arg0 ;
-(void)_rollbackEdit:(id)arg0 ;
-(void)_updateContentItemQueueIndexForItem:(id)arg0 ;
-(void)_withDynamicBehavior:(id)arg0 ;
-(void)_withExternalSyncBehavior:(id)arg0 ;
-(void)_withUpNextBehavior:(id)arg0 ;
-(void)dealloc;
-(void)didConnectToPlaybackEngine:(id)arg0 ;
-(void)didDisconnectFromPlaybackEngine:(id)arg0 ;
-(void)didRestoreVersion:(NSInteger)arg0 forSegment:(id)arg1 ;
-(void)didSignificantlyChangeItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)engine:(id)arg0 didChangeItemElapsedTime:(CGFloat)arg1 rate:(float)arg2 ;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engine:(id)arg0 didReachEndOfQueueWithReason:(id)arg1 ;
// -(void)finalizeStateRestorationWithLoadingItemReady:(id)arg0 completion:(unk)arg1  ;
-(void)incrementVersionForSegment:(id)arg0 ;
-(void)jumpToContentItemID:(id)arg0 ;
-(void)jumpToContentItemID:(id)arg0 direction:(NSInteger)arg1 ;
-(void)jumpToFirstContentItem;
-(void)performAllowingEditsToChangeCurrentItem:(id)arg0 ;
// -(void)performSetQueue:(id)arg0 loadingItemReady:(id)arg1 completion:(unk)arg2  ;
-(void)playerItemDidBecomeCurrent:(id)arg0 ;
-(void)playerItemDidResignCurrent:(id)arg0 ;
-(void)willConnectToPlaybackEngine:(id)arg0 ;
-(void)willDisconnectFromPlaybackEngine:(id)arg0 ;


@end


#endif