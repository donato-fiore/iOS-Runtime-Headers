// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLRESHARESCOPETASK_H
#define CPLRESHARESCOPETASK_H

@class NSDate;
@protocol OS_dispatch_queue, CPLEngineTransportReshareRecordsTask, CPLEngineTransportGroup;


#import "CPLEngineScopedTask.h"
#import "CPLEngineScope.h"
#import "CPLTransportScopeMapping.h"

@interface CPLReshareScopeTask : CPLEngineScopedTask {
    NSDate *_cutoffDate;
    CPLEngineScope *_primaryScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportReshareRecordsTask> *_reshareTask;
    id<CPLEngineTransportGroup> *_transportGroup;
    BOOL _hasScheduledPullFromTransport;
}




-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)scopesForTask;
-(id)taskIdentifier;
-(void)_bumpIgnoredDatesOfRecords:(id)arg0 hasResharedSomeRecords:(BOOL)arg1 ;
-(void)_bumpIgnoredDatesOfRejectedRecords:(id)arg0 ;
-(void)_doOneIteration;
-(void)cancel;
-(void)launch;


@end


#endif