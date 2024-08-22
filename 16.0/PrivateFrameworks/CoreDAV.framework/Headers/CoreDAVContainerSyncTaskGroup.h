// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVCONTAINERSYNCTASKGROUP_H
#define COREDAVCONTAINERSYNCTASKGROUP_H

@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary, NSURL, NSDictionary, NSArray;
@protocol CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVLocalDBInfoProvider;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVPropPatchTaskDelegate>

 {
    int _phase;
    NSString *_nextSyncToken;
    NSMutableArray *_actions;
    NSMutableArray *_unsubmittedTasks;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_urlToETag;
    Class _appSpecificDataItemClass;
    BOOL _syncItemOrder;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
}


@property (nonatomic) BOOL actionsOnly; // ivar: _actionsOnly
@property (retain, nonatomic) NSURL *addMemberURL; // ivar: _addMemberURL
@property (retain, nonatomic) NSString *bulkChangeCheckCTag; // ivar: _bulkChangeCheckCTag
@property (retain, nonatomic) NSDictionary *bulkRequests; // ivar: _bulkRequests
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVLocalDBInfoProvider> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL ensureUpdatedCTag; // ivar: _ensureUpdatedCTag
@property (readonly, nonatomic) NSURL *folderURL; // ivar: _folderURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *localItemURLOrder; // ivar: _localItemURLOrder
@property (nonatomic) NSUInteger maxIndependentTasks; // ivar: _maxIndependentTasks
@property (nonatomic) NSUInteger maxRetryOnUnexpectedSyncTokenChange; // ivar: _maxRetryOnUnexpectedSyncTokenChange
@property (nonatomic) NSUInteger multiGetBatchSize; // ivar: _multiGetBatchSize
@property (retain, nonatomic) NSString *nextCTag; // ivar: _nextCTag
@property (retain, nonatomic) NSString *previousCTag; // ivar: _previousCTag
@property (retain, nonatomic) NSString *previousSyncToken; // ivar: _previousSyncToken
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger unexpectedEmptySyncReportResponseRetryAttemptCount; // ivar: _unexpectedEmptySyncReportResponseRetryAttemptCount
@property (nonatomic) BOOL useMultiGet; // ivar: _useMultiGet
@property (nonatomic) BOOL useSyncCollection; // ivar: _useSyncCollection


-(BOOL)isWhitelistedError:(id)arg0 ;
-(BOOL)shouldDownloadResource:(id)arg0 localETag:(id)arg1 serverETag:(id)arg2 ;
-(BOOL)shouldFetchMoreETags;
-(BOOL)shouldFetchResourceWithEtag:(id)arg0 propertiesToValues:(id)arg1 ;
-(Class)bulkChangeTaskClass;
-(NSUInteger)_submitTasks;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)arg0 ;
-(id)copyGetTaskWithURL:(id)arg0 ;
-(id)copyMultiGetTaskWithURLs:(id)arg0 ;
-(id)copyPostTaskWithPayloadItem:(id)arg0 forAction:(id)arg1 ;
-(id)copyPutTaskWithPayloadItem:(id)arg0 forAction:(id)arg1 ;
-(id)dataContentType;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 syncItemOrder:(BOOL)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 ;
-(void)_bulkChange;
-(void)_bulkChangeTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)_configureMultiGet:(id)arg0 ;
-(void)_getCTag;
-(void)_getDataPayloads;
-(void)_getETags;
-(void)_getOrder;
-(void)_getTask:(id)arg0 finishedWithParsedContents:(id)arg1 deletedItems:(id)arg2 error:(id)arg3 ;
-(void)_postTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)_pushActions;
-(void)_sendNextBatch;
-(void)_syncReportTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)_tearDownAllUnsubmittedTasks;
-(void)applyAdditionalPropertiesFromPostTask:(id)arg0 ;
-(void)applyAdditionalPropertiesFromPutTask:(id)arg0 ;
-(void)bailWithError:(id)arg0 ;
-(void)cancelTaskGroup;
-(void)deleteResourceURLs:(id)arg0 ;
-(void)deleteTask:(id)arg0 completedWithError:(id)arg1 ;
-(void)getTask:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)propFindTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)propPatchTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)putTask:(id)arg0 completedWithNewETag:(id)arg1 error:(id)arg2 ;
-(void)receivedPropertiesToValues:(id)arg0 forURL:(id)arg1 ;
-(void)startTaskGroup;
-(void)syncAway;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif