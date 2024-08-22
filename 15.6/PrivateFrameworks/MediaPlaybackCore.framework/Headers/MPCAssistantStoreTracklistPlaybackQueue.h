// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTSTORETRACKLISTPLAYBACKQUEUE_H
#define MPCASSISTANTSTORETRACKLISTPLAYBACKQUEUE_H

@class MPIdentifierSet, NSArray;


#import "MPCAssistantPlaybackQueue.h"

@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet; // ivar: _collectionIdentifierSet
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly, nonatomic) NSArray *storeItemIDs; // ivar: _storeItemIDs


+(id)storeTracklistQueueWithContextID:(id)arg0 storeItemIDs:(id)arg1 collectionIdentifierSet:(id)arg2 ;
-(id)description;
-(id)initWithContextID:(id)arg0 storeItemIDs:(id)arg1 collectionIdentifierSet:(id)arg2 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;


@end


#endif