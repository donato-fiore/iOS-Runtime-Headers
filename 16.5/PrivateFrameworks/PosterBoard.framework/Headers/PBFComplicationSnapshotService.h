// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFCOMPLICATIONSNAPSHOTSERVICE_H
#define PBFCOMPLICATIONSNAPSHOTSERVICE_H

@class NSOperationQueue, NSMapTable, NSString;
@protocol PBFComplicationSnapshotterObserver, BSInvalidatable, PBFComplicationSnapshotProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBFComplicationSnapshotService : NSObject <PBFComplicationSnapshotterObserver, BSInvalidatable, PBFComplicationSnapshotProviding>

 {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMapTable *_lock_requestToSnapshotReceivedHandlers;
    NSMapTable *_lock_requestToSnapshotErrorHandlers;
    NSMapTable *_lock_requestToResult;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_lock_preparedComplicationSnapshotForRequest:(id)arg0 ;
-(id)complicationSnapshotForRequest:(id)arg0 ;
-(id)init;
-(id)preparedComplicationSnapshotsForRequests:(id)arg0 ;
-(void)_fireCompletionHandlersForRequest:(id)arg0 snapshot:(id)arg1 error:(id)arg2 ;
// -(void)_lock_appendErrorBlock:(id)arg0 forRequest:(unk)arg1  ;
// -(void)_lock_appendReceivedBlock:(id)arg0 forRequest:(unk)arg1  ;
-(void)complicationSnapshotter:(id)arg0 didFinishWithSnapshot:(id)arg1 error:(id)arg2 ;
// -(void)fetchComplicationSnapshotsForRequests:(id)arg0 complicationSnapshotReceivedHandler:(id)arg1 errorHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)invalidate;
-(void)trimCachedSnapshotsToRequests:(id)arg0 ;


@end


#endif