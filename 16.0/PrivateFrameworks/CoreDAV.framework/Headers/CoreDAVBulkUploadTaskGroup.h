// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVBULKUPLOADTASKGROUP_H
#define COREDAVBULKUPLOADTASKGROUP_H

@class NSMutableDictionary, NSString, NSURL, NSDictionary;
@protocol CoreDAVTaskDelegate;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>

 {
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *folderURL; // ivar: _folderURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *hrefToETag; // ivar: _hrefToETag
@property (readonly, nonatomic) NSDictionary *hrefToErrorItems; // ivar: _hrefToErrorItems
@property (readonly, nonatomic) NSDictionary *hrefToStatus; // ivar: _hrefToStatus
@property (nonatomic) NSUInteger multiPutBatchMaxNumResources; // ivar: _multiPutBatchMaxNumResources
@property (nonatomic) NSUInteger multiPutBatchMaxSize; // ivar: _multiPutBatchMaxSize
@property (retain, nonatomic) NSString *nextCTag; // ivar: _lastKnownCTag
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *uuidToErrorItems; // ivar: _uuidToErrorItems
@property (readonly, nonatomic) NSDictionary *uuidToHREF; // ivar: _uuidToHREF
@property (readonly, nonatomic) NSDictionary *uuidToStatus; // ivar: _uuidToStatus
@property (readonly, nonatomic) BOOL validCTag; // ivar: _validCTag


-(Class)multiPutTaskClass;
-(id)initWithFolderURL:(id)arg0 checkCTag:(id)arg1 uuidsToAddActions:(id)arg2 hrefsToModDeleteActions:(id)arg3 context:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
-(void)_sendNextBatch;
-(void)startTaskGroup;
-(void)syncAway;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif