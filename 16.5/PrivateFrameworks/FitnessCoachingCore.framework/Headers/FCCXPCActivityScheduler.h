// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCXPCACTIVITYSCHEDULER_H
#define FCCXPCACTIVITYSCHEDULER_H

@protocol OS_dispatch_queue, FCCXPCActivitySchedulerDelegate;

#import <Foundation/Foundation.h>

#import "FCCDateProvider.h"

@interface FCCXPCActivityScheduler : NSObject {
    FCCDateProvider *_dateProvider;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (weak, nonatomic) NSObject<FCCXPCActivitySchedulerDelegate> *delegate; // ivar: _delegate


-(id)_stringForXPCActivityState:(NSInteger)arg0 ;
-(id)init;
-(id)initWithDateProvider:(id)arg0 dispatchQueue:(id)arg1 ;
-(void)_checkInActivity:(id)arg0 name:(id)arg1 scheduledDate:(id)arg2 ;
-(void)_runActivity:(id)arg0 name:(id)arg1 ;
-(void)cancelActivityWithName:(id)arg0 ;
-(void)scheduleActivityWithName:(id)arg0 scheduledDate:(id)arg1 ;


@end


#endif