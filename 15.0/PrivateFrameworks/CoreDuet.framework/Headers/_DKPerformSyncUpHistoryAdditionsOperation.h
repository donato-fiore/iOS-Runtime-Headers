// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKPERFORMSYNCUPHISTORYADDITIONSOPERATION_H
#define _DKPERFORMSYNCUPHISTORYADDITIONSOPERATION_H

@class DKSyncCompositeOperation, NSArray, NSDate;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;


#import "_DKSyncPeer.h"
#import "_DKSync2Policy.h"
#import "_DKSyncType.h"
#import "_CDMutablePerfMetric.h"
#import "_DKSyncHistory.h"

@interface _DKPerformSyncUpHistoryAdditionsOperation : DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    NSUInteger _batchNumber;
    _DKSyncHistory *_history;
}




-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;


@end


#endif