// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASCOALESCINGTIMERGUARDEDDATA_H
#define _PASCOALESCINGTIMERGUARDEDDATA_H

@class NSDate, NSMutableSet;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _PASCoalescingTimerGuardedData : NSObject {
    NSObject<OS_dispatch_source> *coalescingSource;
    NSUInteger currentCoalescingTimerId;
    NSDate *nextCoalescedEventTime;
    NSMutableSet *nonCoalescingSources;
    NSUInteger currentNonCoalescingTimerGeneration;
    id *acc;
}






@end


#endif