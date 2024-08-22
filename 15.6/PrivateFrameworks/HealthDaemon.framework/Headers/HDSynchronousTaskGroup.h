// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSYNCHRONOUSTASKGROUP_H
#define HDSYNCHRONOUSTASKGROUP_H

@class NSMutableArray;
@protocol HDSynchronousTaskGroupDelegate;

#import <Foundation/Foundation.h>


@interface HDSynchronousTaskGroup : NSObject {
    uint8_t _taskCount;
    os_unfair_lock_s _lock;
    BOOL _success;
    NSMutableArray *_errors;
}


@property (weak) NSObject<HDSynchronousTaskGroupDelegate> *delegate; // ivar: _delegate
@property (copy) id *didFinish; // ivar: _didFinish
@property (readonly) int taskCount;


-(NSInteger)beginTask;
-(id)init;
-(void)failTaskWithError:(id)arg0 ;
-(void)finishTask;


@end


#endif