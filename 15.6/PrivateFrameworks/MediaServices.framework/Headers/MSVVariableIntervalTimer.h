// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVVARIABLEINTERVALTIMER_H
#define MSVVARIABLEINTERVALTIMER_H

@class NSMutableArray, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "MSVTimer.h"

@interface MSVVariableIntervalTimer : NSObject {
    NSMutableArray *_intervals;
    MSVTimer *_timer;
    NSDate *_currentIntervalStartDate;
}


@property (readonly, nonatomic) CGFloat currentInterval;
@property (readonly, nonatomic) NSArray *remainingIntervals;
@property (readonly, nonatomic) CGFloat timeUntilNextInterval;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithIntervals:(id)arg0 name:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)_processTimerEventWithQueue:(id)arg0 block:(id)arg1 ;


@end


#endif