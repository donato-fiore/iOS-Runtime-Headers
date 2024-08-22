// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGLONGRUNNINGTASKMANAGER_H
#define SGLONGRUNNINGTASKMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface SGLongRunningTaskManager : NSObject {
    NSHashTable *_tasks;
    _opaque_pthread_mutex_t _lock;
}




+(id)sharedInstance;
-(id)init;
-(id)task;
-(id)taskWithDeadline:(CGFloat)arg0 ;
-(void)dealloc;
-(void)tellCurrentTasksToDefer;
-(void)unregister:(id)arg0 ;


@end


#endif