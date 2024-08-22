// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVRECURSIVECONTAINERSYNCTASKGROUP_H
#define COREDAVRECURSIVECONTAINERSYNCTASKGROUP_H

@class NSString, NSArray, NSMutableArray, NSURL, NSMutableSet, NSMutableDictionary, NSDictionary;
@protocol CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVMoveTaskDelegate, CoreDAVLocalDBTreeInfoProvider;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVMoveTaskDelegate>

 {
    int _phase;
    NSString *_nextSyncToken;
    NSString *_previousPTag;
    NSString *_nextPTag;
    NSArray *_actions;
    NSMutableArray *_unsubmittedTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_leafURLToETag;
    NSMutableArray *_childCollectionURL;
    Class _appSpecificDataItemClass;
    Class _appSpecificContainerItemClass;
    BOOL _syncItemOrder;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVLocalDBTreeInfoProvider> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *folderURL; // ivar: _folderURL
@property (readonly, nonatomic) NSDictionary *folderURLToChildrenURLOrder; // ivar: _folderURLToChildrenURLOrder
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger multiGetBatchSize; // ivar: _multiGetBatchSize
@property (retain, nonatomic) NSString *nextCTag; // ivar: _nextCTag
@property (nonatomic) BOOL preflightCTag; // ivar: _preflightCTag
@property (readonly, nonatomic) NSString *previousCTag; // ivar: _previousCTag
@property (retain, nonatomic) NSString *previousSyncToken; // ivar: _previousSyncToken
@property (readonly) Class superclass;


-(BOOL)isWhitelistedError:(id)arg0 ;
-(BOOL)shouldSyncChildWithResourceType:(id)arg0 ;
-(NSUInteger)_submitTasks;
-(id)_copyContainerParserMappings;
-(id)copyFolderMultiGetTaskWithURLs:(id)arg0 ;
-(id)copyMultiGetTaskWithURLs:(id)arg0 ;
-(id)dataContentType;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousPTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 ;
-(void)_folderModTask:(id)arg0 parsedPropStats:(id)arg1 error:(id)arg2 ;
-(void)_foundChildrenOrder:(id)arg0 inFolderWithURL:(id)arg1 ;
-(void)_getDataPayloads;
-(void)_getItemTags;
-(void)_getTask:(id)arg0 finishedWithParsedContents:(id)arg1 deletedItems:(id)arg2 error:(id)arg3 ;
-(void)_getTopFolderTags;
-(void)_postTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)_pushActions;
-(void)_syncReportTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)_taskGroupSuccessfullyFinishedWithContents:(id)arg0 ;
-(void)_tearDownAllUnsubmittedTasks;
-(void)bailWithError:(id)arg0 ;
-(void)cancelTaskGroup;
-(void)deleteTask:(id)arg0 completedWithError:(id)arg1 ;
-(void)mkcolTask:(id)arg0 parsedPropStats:(id)arg1 error:(id)arg2 ;
-(void)moveTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)propFindTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)propPatchTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)putTask:(id)arg0 completedWithNewETag:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;
-(void)syncAway;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif