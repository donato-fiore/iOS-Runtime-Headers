// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSCOPEUPDATESCOPETASK_H
#define CPLSCOPEUPDATESCOPETASK_H

@class NSData, NSString;
@protocol CPLEngineSyncTaskDelegate, OS_dispatch_queue, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportFetchTransportScopeTask;


#import "CPLEngineScopedTask.h"
#import "CPLScopeChange.h"
#import "CPLScopeUpdateScopeTask.h"

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask <CPLEngineSyncTaskDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CPLScopeChange *_previousScopeChange;
    id<CPLEngineTransportGetScopeInfoTask> *_getLibraryInfo;
    id<CPLEngineTransportFetchTransportScopeTask> *_fetchTransportScope;
    NSData *_fetchedTransportScope;
    BOOL _retryingFetchingTransportScope;
    CPLScopeUpdateScopeTask *_lookForStagingScopeTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(void)_updateScopeWithNewScopeType:(NSInteger)arg0 scope:(id)arg1 updatedScopeChange:(id)arg2 updatedFlags:(id)arg3 oldTransportScope:(id)arg4 updatedTransportScope:(id)arg5 shouldUpdateTransportScope:(id)arg6 store:(unk)arg7 transport:(id)arg8 inTransaction:(id)arg9  ;
// +(void)updateScopeWithNewScopeType:(NSInteger)arg0 scope:(id)arg1 updatedScopeChange:(id)arg2 updatedFlags:(id)arg3 oldTransportScope:(id)arg4 updatedTransportScope:(id)arg5 shouldUpdateTransportScope:(id)arg6 store:(unk)arg7 transport:(id)arg8 inTransaction:(id)arg9  ;
-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)taskIdentifier;
-(void)_fetchTransportScope;
-(void)_getLibraryInfo;
-(void)_lookForStagingScopeWithIdentifier:(id)arg0 transportScope:(id)arg1 ;
-(void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg0 ;
-(void)_markScopeAsFeatureDisabledWithFlags:(id)arg0 ;
-(void)_markScopeHasBadTransportScopeWithError:(id)arg0 ;
-(void)_performAdditionalChecksWithNewScopeType:(NSInteger)arg0 updatedScopeChange:(id)arg1 updatedFlags:(id)arg2 oldTransportScope:(id)arg3 updatedTransportScope:(id)arg4 completionHandler:(id)arg5 ;
-(void)_updateScopeChangeForPrimaryScopeRelatedToSharingScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateScopeWithNewScopeType:(NSInteger)arg0 updatedScopeChange:(id)arg1 updatedFlags:(id)arg2 oldTransportScope:(id)arg3 updatedTransportScope:(id)arg4 ;
-(void)cancel;
-(void)launch;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)task:(id)arg0 didProgress:(float)arg1 userInfo:(id)arg2 ;


@end


#endif