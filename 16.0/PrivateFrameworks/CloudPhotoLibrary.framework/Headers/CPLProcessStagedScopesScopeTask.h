// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPROCESSSTAGEDSCOPESSCOPETASK_H
#define CPLPROCESSSTAGEDSCOPESSCOPETASK_H

@class NSData;
@protocol OS_dispatch_queue, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportCleanupStagedScopeTask, CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportGroup;


#import "CPLEngineScopedTask.h"
#import "CPLEngineScope.h"
#import "CPLScopeChange.h"
#import "CPLTransportScopeMapping.h"

@interface CPLProcessStagedScopesScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineScope *_destinationScope;
    CPLScopeChange *_destinationScopeChange;
    CPLEngineScope *_stagingScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    NSData *_destinationTransportScope;
    NSData *_stagingTransportScope;
    id<CPLEngineTransportGetScopeInfoTask> *_checkDestinationTask;
    id<CPLEngineTransportCleanupStagedScopeTask> *_cleanupTask;
    id<CPLEngineTransportDeleteTransportScopeTask> *_deleteTask;
    id<CPLEngineTransportGroup> *_transportGroup;
    BOOL _isPrimarySharedLibrary;
}




+(void)initialize;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)taskIdentifier;
-(void)_checkDestinationAndProcessCleanup;
-(void)_cleanupStagedScopeInTransaction:(id)arg0 store:(id)arg1 ;
-(void)_deleteStagingScopeIfNecessary;
-(void)_excludeScopes;
-(void)_startActualCleanup;
-(void)cancel;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif