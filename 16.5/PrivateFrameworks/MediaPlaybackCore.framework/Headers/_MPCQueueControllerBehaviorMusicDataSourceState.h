// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORMUSICDATASOURCESTATE_H
#define _MPCQUEUECONTROLLERBEHAVIORMUSICDATASOURCESTATE_H

@class NSString, MPPlaybackContext, MPPlaceholderAVItem;
@protocol MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding, MPCQueueControllerBehaviorMusicDataSource><MPCQueueControllerDataSourceStateRestoring;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngineEventStream.h"

@interface _MPCQueueControllerBehaviorMusicDataSourceState : NSObject <MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding>

 {
    ? _supportedMethods;
}


@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) NSObject<MPCQueueControllerBehaviorMusicDataSource><MPCQueueControllerDataSourceStateRestoring> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPPlaybackContext *originalPlaybackContext; // ivar: _originalPlaybackContext
@property (readonly, nonatomic) MPPlaybackContext *playbackContext; // ivar: _playbackContext
@property (copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (readonly, nonatomic) NSString *preferredStartItemIdentifier; // ivar: _preferredStartItemIdentifier
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, nonatomic) BOOL shouldAddOriginalPlaybackContextAfterReplacement;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) os_unfair_lock_s stateLock; // ivar: _stateLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPPlaybackContext *supplementalPlaybackContext; // ivar: _supplementalPlaybackContext
@property (readonly, nonatomic) NSInteger supplementalPlaybackContextBehavior; // ivar: _supplementalPlaybackContextBehavior
@property (readonly, nonatomic) MPPlaceholderAVItem *tailPlaceholderItem; // ivar: _tailPlaceholderItem


+(BOOL)supportsSecureCoding;
-(BOOL)canJumpToItem:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canSkipItem:(id)arg0 reason:(*id)arg1 ;
-(BOOL)isRadioDataSource;
-(BOOL)section:(id)arg0 shouldShuffleExcludeItem:(id)arg1 ;
-(BOOL)section:(id)arg0 supportsShuffleType:(NSInteger)arg1 ;
-(BOOL)shouldRequestAdditionalItemsAtTail;
-(BOOL)shouldShowPlaceholderAtTail;
-(BOOL)shouldUsePlaceholderForItem:(id)arg0 inSection:(id)arg1 ;
-(NSInteger)prefetchThreshold;
-(id)_rtcSourceServiceName;
-(id)firstItemIntersectingIdentifierSet:(id)arg0 ;
-(id)getTailPlaceholderItemAndState:(*NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaybackContext:(id)arg0 ;
-(id)itemForItem:(id)arg0 inSection:(id)arg1 ;
-(void)_buildPlaceholder;
-(void)_inLock_buildPlaceholder;
-(void)_updateRadioStationPlaybackAuthorizationTokenIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;
-(void)itemDidBeginPlayback:(id)arg0 ;
-(void)loadAdditionalItemsIfNeededWithCount:(NSInteger)arg0 completion:(id)arg1 ;
-(void)reloadSection:(id)arg0 completion:(id)arg1 ;
-(void)updatePlaybackContext;


@end


#endif