// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDBACKGROUNDTASKSCHEDULER_H
#define HDBACKGROUNDTASKSCHEDULER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDBackgroundTaskScheduler : NSObject {
    NSMutableDictionary *_clients;
    NSMutableDictionary *_tasksQueuedForDelivery;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}




-(id)init;
-(id)taskWithName:(id)arg0 forClientNamed:(id)arg1 ;
-(void)addTask:(id)arg0 withName:(id)arg1 forClientNamed:(id)arg2 ;
-(void)registerClientWithName:(id)arg0 taskHandler:(id)arg1 ;
-(void)removeTaskWithName:(id)arg0 forClientNamed:(id)arg1 ;
-(void)unregisterClientWithName:(id)arg0 ;


@end


#endif