// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDSYSTEMTASKSCHEDULER_H
#define HMDBACKGROUNDSYSTEMTASKSCHEDULER_H

@class NSString;
@protocol HMDBackgroundSystemTaskSchedulerInterfacing;

#import <Foundation/Foundation.h>


@interface HMDBackgroundSystemTaskScheduler : NSObject <HMDBackgroundSystemTaskSchedulerInterfacing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cancelTaskRequestWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerForTaskWithIdentifier:(id)arg0 usingQueue:(id)arg1 launchHandler:(id)arg2 ;
-(BOOL)submitTaskRequest:(id)arg0 error:(*id)arg1 ;
-(id)taskRequestForIdentifier:(id)arg0 ;


@end


#endif