// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKPERFORMSYNCDOWNPEEROPERATION_H
#define _DKPERFORMSYNCDOWNPEEROPERATION_H

@class DKSyncCompositeOperation, NSMutableArray;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;


#import "_DKSyncPeer.h"
#import "_DKSync2Policy.h"
#import "_DKSyncType.h"
#import "_CDMutablePerfMetric.h"

@interface _DKPerformSyncDownPeerOperation : DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
    NSMutableArray *_operations;
}




-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;


@end


#endif