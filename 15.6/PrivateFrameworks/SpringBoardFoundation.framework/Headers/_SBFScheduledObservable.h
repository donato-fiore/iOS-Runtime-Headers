// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBFSCHEDULEDOBSERVABLE_H
#define _SBFSCHEDULEDOBSERVABLE_H

@protocol SBFObservable, SBFScheduler;


#import "SBFObservable.h"

@interface _SBFScheduledObservable : SBFObservable {
    id<SBFObservable> *_observable;
    id<SBFScheduler> *_scheduler;
}




-(id)initWithObservable:(id)arg0 scheduler:(id)arg1 ;
-(id)subscribe:(id)arg0 ;


@end


#endif