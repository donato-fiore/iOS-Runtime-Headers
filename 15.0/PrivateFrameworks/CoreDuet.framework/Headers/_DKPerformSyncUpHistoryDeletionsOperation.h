// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKPERFORMSYNCUPHISTORYDELETIONSOPERATION_H
#define _DKPERFORMSYNCUPHISTORYDELETIONSOPERATION_H

@class DKSyncCompositeOperation, NSArray, NSDate;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;


#import "_DKPerformSyncUpHistoryAdditionsOperation.h"
#import "_DKSyncPeer.h"
#import "_DKSync2Policy.h"
#import "_DKSyncType.h"
#import "_CDMutablePerfMetric.h"
#import "_DKSyncHistory.h"

@interface _DKPerformSyncUpHistoryDeletionsOperation : DKSyncCompositeOperation {
    _DKPerformSyncUpHistoryAdditionsOperation *_sibling;
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    _DKSyncHistory *_history;
    NSUInteger _batchNumber;
}




-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;


@end


#endif