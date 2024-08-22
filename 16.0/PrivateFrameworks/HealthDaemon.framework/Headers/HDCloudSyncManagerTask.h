// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMANAGERTASK_H
#define HDCLOUDSYNCMANAGERTASK_H

@class NSArray, NSProgress;

#import <Foundation/Foundation.h>

#import "HDCloudSyncManagerTask.h"

@interface HDCloudSyncManagerTask : NSObject {
    os_unfair_lock_s _lock;
    id *_completion;
    NSInteger _status;
}


@property (readonly, copy) NSArray *mirroringTasks; // ivar: _mirroringTasks
@property (readonly, weak) HDCloudSyncManagerTask *originalTask; // ivar: _originalTask
@property NSInteger priority; // ivar: _priority
@property (readonly) NSProgress *progress; // ivar: _progress
@property (readonly) NSInteger status;


-(BOOL)combineWithTask:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)finish;
-(void)main;
-(void)mirrorTask:(id)arg0 ;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif