// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERELEVANCESIGNALUPDATESCHEDULER_H
#define RERELEVANCESIGNALUPDATESCHEDULER_H

@class NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;


#import "RESingleton.h"
#import "REUpNextTimer.h"

@interface RERelevanceSignalUpdateScheduler : RESingleton {
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextTimer *_timer;
    NSDate *_lastFireDate;
    BOOL _alreadyScheduled;
}




-(id)_init;
-(void)_queue_updateBlocks;
-(void)_rescheduleTimer;
-(void)_updateBlocks;
-(void)dealloc;
-(void)scheduleEventWithIdentifier:(id)arg0 updateFrequency:(CGFloat)arg1 completion:(id)arg2 ;
-(void)unscheduleEventWithIdentifier:(id)arg0 ;


@end


#endif