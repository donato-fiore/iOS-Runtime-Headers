// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPXPCACTIVITYSCHEDULER_H
#define HDSPXPCACTIVITYSCHEDULER_H

@class NSString;
@protocol HDSPActivityScheduler, NAScheduler;

#import <Foundation/Foundation.h>


@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEventName:(id)arg0 callbackScheduler:(id)arg1 ;
-(void)scheduleActivity:(id)arg0 options:(NSUInteger)arg1 activityHandler:(id)arg2 ;
-(void)scheduleActivityWithCriteria:(id)arg0 options:(NSUInteger)arg1 activityHandler:(id)arg2 ;
-(void)unschedule;


@end


#endif