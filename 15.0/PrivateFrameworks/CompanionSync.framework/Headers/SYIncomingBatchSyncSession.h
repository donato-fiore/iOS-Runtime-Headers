// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYINCOMINGBATCHSYNCSESSION_H
#define SYINCOMINGBATCHSYNCSESSION_H

@class NSMutableIndexSet, NSMutableArray;
@protocol OS_dispatch_source;


#import "SYIncomingFullSyncSession.h"

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    BOOL _hasReceivedEndSync;
    id *_completion;
    os_unfair_lock_s _queueLock;
    NSMutableArray *_incomingBatchQueue;
    BOOL canRestart;
    BOOL canRollback;
}




-(BOOL)canRestart;
-(BOOL)canRollback;
-(id)initWithService:(id)arg0 ;
-(void)_continueProcessing;
-(void)_handleBatchChunk:(id)arg0 completion:(id)arg1 ;
-(void)_handleEndSync:(id)arg0 completion:(id)arg1 ;
-(void)_sendEndSessionResponse:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;


@end


#endif