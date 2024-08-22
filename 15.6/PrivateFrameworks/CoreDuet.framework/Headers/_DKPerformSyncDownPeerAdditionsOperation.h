// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPERFORMSYNCDOWNPEERADDITIONSOPERATION_H
#define _DKPERFORMSYNCDOWNPEERADDITIONSOPERATION_H

@class DKSyncCompositeOperation, NSArray, NSDate;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage, _DKKeyValueStore;


#import "_DKSyncPeer.h"
#import "_DKSync2Policy.h"
#import "_DKSyncType.h"
#import "_CDMutablePerfMetric.h"
#import "_DKSyncHistory.h"

@interface _DKPerformSyncDownPeerAdditionsOperation : DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    BOOL _highPriority;
    _DKSyncHistory *_history;
    id<_DKKeyValueStore> *_keyValueStore;
    NSDate *_startDate;
    NSDate *_highWaterMark;
    NSUInteger _batchNumber;
    NSArray *_overlappingWindows;
    BOOL _foundAdditions;
}




-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;


@end


#endif