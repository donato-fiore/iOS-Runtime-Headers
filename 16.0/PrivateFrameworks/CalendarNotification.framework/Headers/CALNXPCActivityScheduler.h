// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNXPCACTIVITYSCHEDULER_H
#define CALNXPCACTIVITYSCHEDULER_H

@class NSString;
@protocol CALNActivityScheduler, OS_xpc_object, CALNActivitySchedulerDelegate;

#import <Foundation/Foundation.h>


@interface CALNXPCActivityScheduler : NSObject <CALNActivityScheduler>

 {
    NSString *_activityIdentifier;
    NSObject<OS_xpc_object> *_otherCriteria;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNActivitySchedulerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActivityIdentifier:(id)arg0 otherCriteria:(id)arg1 ;
-(void)scheduleWithTimeInterval:(NSInteger)arg0 gracePeriod:(NSInteger)arg1 ;
-(void)unschedule;


@end


#endif