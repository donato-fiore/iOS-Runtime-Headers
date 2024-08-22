// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTIMMEDIATETASKSCHEDULER_H
#define AVTIMMEDIATETASKSCHEDULER_H

@class NSString;
@protocol AVTTaskScheduler;

#import <Foundation/Foundation.h>


@interface AVTImmediateTaskScheduler : NSObject <AVTTaskScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancelAllTasks;
-(void)cancelTask:(id)arg0 ;
-(void)lowerTaskPriority:(id)arg0 ;
-(void)scheduleTask:(id)arg0 ;


@end


#endif