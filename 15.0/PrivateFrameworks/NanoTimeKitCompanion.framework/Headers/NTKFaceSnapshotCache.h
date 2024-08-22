// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACESNAPSHOTCACHE_H
#define NTKFACESNAPSHOTCACHE_H

@class NSMapTable, NSMutableOrderedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceSnapshotCacheRequest.h"

@interface NTKFaceSnapshotCache : NSObject

@property (readonly, nonatomic) NSMapTable *callCountsByFace; // ivar: _callCountsByFace
@property (retain, nonatomic) NSMutableOrderedSet *highPriorityRequests; // ivar: _highPriorityRequests
@property (retain, nonatomic) NSMutableOrderedSet *lowPriorityRequests; // ivar: _lowPriorityRequests
@property (readonly, nonatomic) NSMapTable *requestsByFace; // ivar: _requestsByFace
@property (retain, nonatomic) NTKFaceSnapshotCacheRequest *servicingRequest; // ivar: _servicingRequest
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // ivar: _snapshotQueue
@property (readonly, nonatomic) NSMutableDictionary *snapshots; // ivar: _snapshots


+(id)snapshotCache;
-(id)cachedSnapshotOfFace:(id)arg0 ;
-(id)init;
-(void)_attemptSnapshotForRequest:(id)arg0 ;
-(void)_attemptSnapshotOfFace:(id)arg0 atQOS:(unsigned int)arg1 ;
-(void)_invokeCallbacksOfFace:(id)arg0 withSnapshot:(id)arg1 ;
-(void)_serviceRequestsIfIdle;
-(void)_snapshotProcessInterrupted:(id)arg0 ;
-(void)cancelSnapshotRequest:(id)arg0 ;
-(void)dealloc;
-(void)fetchSnapshotWithRequest:(id)arg0 ;


@end


#endif