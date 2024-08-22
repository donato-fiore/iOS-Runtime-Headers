// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCPARALLELOPERATION_H
#define HDCLOUDSYNCPARALLELOPERATION_H

@class NSMutableArray, NSString, NSArray;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncParallelOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    NSMutableArray *_operations;
    HDSynchronousTaskGroup *_taskGroup;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *operations;
@property (readonly) Class superclass;


+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperationOfClass:(Class)arg0 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif