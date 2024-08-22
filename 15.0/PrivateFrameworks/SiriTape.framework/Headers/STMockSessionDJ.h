// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMOCKSESSIONDJ_H
#define STMOCKSESSIONDJ_H

@class NSArray, NSOrderedSet, NSDictionary, NSMutableOrderedSet, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, STMockSessionDJDelegate;

#import <Foundation/Foundation.h>


@interface STMockSessionDJ : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_responsesQueue;
    NSObject<OS_dispatch_queue> *_onewayCBqueue;
    NSArray *_recordedCBTimestamps;
    NSArray *_recordedClientBoundAceCommands;
    NSArray *_recordedServerBoundAceCommands;
    NSOrderedSet *_recordedRefIDs;
    NSArray *_recordedStartRequests;
    NSArray *_recordedStartRequestsTimestamps;
    NSDictionary *_SBCommandsAceIDsToTimestamps;
    NSMutableOrderedSet *_newStartRequestIDs;
    NSArray *_getResultObjectsCommands;
    NSArray *_getResultObjectsAceIds;
    NSDictionary *_matchedCommands;
    NSDictionary *_commandsOrderedByType;
    NSDictionary *_indicesOfReplayCommandsByType;
    NSDictionary *_responseTime;
    NSArray *_oneWayClientBoundCommands;
    NSUInteger _replayIndex;
    BOOL _isClientFlow;
    NSObject<OS_dispatch_semaphore> *_finishedSpeech;
    NSObject<OS_dispatch_semaphore> *_requestCompleted;
    NSMutableArray *_completions;
}


@property (weak, nonatomic) NSObject<STMockSessionDJDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isReplaying; // ivar: _isReplaying


-(id)_getEventContextFromEvent:(id)arg0 ;
-(id)initWithReplayFileURL:(id)arg0 ;
-(void)_loadReplayAtURL:(id)arg0 ;
-(void)_matchRefIdsWithAceIds;
-(void)_replayFromCommand:(id)arg0 isLastRequest:(BOOL)arg1 ;
-(void)_sendCommandsFrom:(id)arg0 withTimestamps:(id)arg1 atIndex:(NSUInteger)arg2 isLastRequest:(BOOL)arg3 ;
-(void)_sendOneWayCBCommandsForStartRequest:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_setUpObserverAction;
-(void)addFinishRequestCompletion:(id)arg0 ;
-(void)addStartRequestID:(id)arg0 ;
-(void)handleAceObject:(id)arg0 ;
-(void)startReplay;


@end


#endif