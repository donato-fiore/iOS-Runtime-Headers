// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFIDEALTIMEROBSERVABLE_H
#define _EFIDEALTIMEROBSERVABLE_H

@protocol EFObservable, EFScheduler;


#import "EFObservable.h"

@interface _EFIdealTimerObservable : EFObservable {
    id<EFObservable> *_input;
    id<EFScheduler> *_scheduler;
    CGFloat _interval;
}




-(id)initWithObservable:(id)arg0 timeInterval:(CGFloat)arg1 scheduler:(id)arg2 ;
-(id)subscribe:(id)arg0 ;


@end


#endif