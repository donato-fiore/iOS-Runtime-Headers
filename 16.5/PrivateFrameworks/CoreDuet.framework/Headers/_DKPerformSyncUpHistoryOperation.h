// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKPERFORMSYNCUPHISTORYOPERATION_H
#define _DKPERFORMSYNCUPHISTORYOPERATION_H

@class DKSyncCompositeOperation;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;


#import "_DKSyncPeer.h"
#import "_DKSync2Policy.h"
#import "_DKSyncType.h"
#import "_CDMutablePerfMetric.h"

@interface _DKPerformSyncUpHistoryOperation : DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> *_localStorage;
    id<_DKSyncRemoteKnowledgeStorage> *_transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    _CDPerfEvent _perfEvent;
}




-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;


@end


#endif