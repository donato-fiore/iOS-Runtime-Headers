// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNSCHEDULEDOBSERVABLE_H
#define _CNSCHEDULEDOBSERVABLE_H

@protocol CNObservable, CNScheduler;


#import "CNObservable.h"

@interface _CNScheduledObservable : CNObservable

@property (retain, nonatomic) NSObject<CNObservable> *observable; // ivar: _observable
@property (retain, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler


-(id)initWithObservable:(id)arg0 scheduler:(id)arg1 ;
-(id)subscribe:(id)arg0 ;


@end


#endif