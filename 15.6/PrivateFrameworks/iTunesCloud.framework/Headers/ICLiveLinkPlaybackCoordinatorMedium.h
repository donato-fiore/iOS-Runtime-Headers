// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLIVELINKPLAYBACKCOORDINATORMEDIUM_H
#define ICLIVELINKPLAYBACKCOORDINATORMEDIUM_H

@class NSMutableArray, NSUUID;

#import <Foundation/Foundation.h>

#import "ICLiveLink.h"

@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject

@property (readonly, nonatomic) NSMutableArray *fetchServerStateCompletions; // ivar: _fetchServerStateCompletions
@property (readonly, nonatomic) NSInteger fetchServerStateInProgressCount; // ivar: _fetchServerStateInProgressCount
@property (readonly, nonatomic) os_unfair_lock_s fetchServerStateLock; // ivar: _fetchServerStateLock
@property (readonly, weak, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (readonly, copy, nonatomic) NSUUID *localParticipantUUID; // ivar: _localParticipantUUID


-(BOOL)isCoordinatorSuspended;
-(id)initWithLiveLink:(id)arg0 ;
-(void)_broadcastLocalParticipantStateDictionary:(id)arg0 ;
-(void)_broadcastTransportControlStateDictionary:(id)arg0 forItemWithIdentifier:(id)arg1 ;
-(void)_reloadTransportControlStateForItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearCoordinationMediumDelegate;
-(void)handleNewParticipantStateDictionary:(id)arg0 ;
-(void)handleNewTransportControlStateDictionary:(id)arg0 ;
-(void)handlePlaybackSyncPayload:(id)arg0 ;
-(void)removeParticipant:(id)arg0 ;
-(void)synchronizePlaybackStateForReason:(id)arg0 ;


@end


#endif