// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSEIZEABANDONEDSTORESOPERATION_H
#define HDCLOUDSYNCSEIZEABANDONEDSTORESOPERATION_H

@class NSString;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncSeizeAbandonedStoresOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)operationTagDependencies;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif