// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLOUDKITITEMTASK_H
#define WFCLOUDKITITEMTASK_H

@class CKOperation, NSError, NSOperationQueue;


#import "WFCloudKitTask.h"

@interface WFCloudKitItemTask : WFCloudKitTask

@property (retain, nonatomic) CKOperation *cloudOperation; // ivar: _cloudOperation
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue


-(id)init;
-(void)cancel;


@end


#endif