// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKPERFORMSYNCUPCHANGEOPERATION_H
#define _DKPERFORMSYNCUPCHANGEOPERATION_H

@class DKSyncCompositeOperation, NSArray;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;


#import "_DKSync2Policy.h"
#import "_DKSyncType.h"
#import "_CDMutablePerfMetric.h"

@interface _DKPerformSyncUpChangeOperation : DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transport;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_insertedEvents;
    NSArray *_deletedEventIDs;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
}




-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;


@end


#endif