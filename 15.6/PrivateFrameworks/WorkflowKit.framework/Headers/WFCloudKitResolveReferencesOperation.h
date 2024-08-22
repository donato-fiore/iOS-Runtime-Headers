// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDKITRESOLVEREFERENCESOPERATION_H
#define WFCLOUDKITRESOLVEREFERENCESOPERATION_H

@class CKFetchRecordsOperation, CKOperationGroup, NSArray;


#import "WFCloudKitAsyncOperation.h"
#import "WFCloudKitItemRequest.h"
#import "WFCloudKitItemTask.h"

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation

@property (retain, nonatomic) CKFetchRecordsOperation *currentOperation; // ivar: _currentOperation
@property (readonly, nonatomic) CKOperationGroup *operationGroup; // ivar: _operationGroup
@property (readonly, nonatomic) NSArray *records; // ivar: _records
@property (readonly, weak, nonatomic) WFCloudKitItemRequest *request; // ivar: _request
@property (retain, nonatomic) WFCloudKitItemTask *task; // ivar: _task


-(id)initWithRequest:(id)arg0 records:(id)arg1 operationGroup:(id)arg2 task:(id)arg3 ;
-(void)cancel;
-(void)start;


@end


#endif