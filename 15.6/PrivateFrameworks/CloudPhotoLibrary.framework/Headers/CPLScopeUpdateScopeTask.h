// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSCOPEUPDATESCOPETASK_H
#define CPLSCOPEUPDATESCOPETASK_H

@class NSData;
@protocol OS_dispatch_queue, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportFetchTransportScopeTask;


#import "CPLEngineScopedTask.h"

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportGetScopeInfoTask> *_getLibraryInfo;
    id<CPLEngineTransportFetchTransportScopeTask> *_fetchTransportScope;
    NSData *_fetchedTransportScope;
    BOOL _retryingFetchingTransportScope;
}




-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)taskIdentifier;
-(void)_fetchTransportScope;
-(void)_getLibraryInfo;
-(void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg0 ;
-(void)_markScopeAsFeatureDisabledWithFlags:(id)arg0 ;
-(void)_markScopeHasBadTransportScopeWithError:(id)arg0 ;
-(void)cancel;
-(void)launch;


@end


#endif