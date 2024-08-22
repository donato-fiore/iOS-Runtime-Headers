// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSLEEPPERIODARRAYBUILDER_H
#define HDSLEEPPERIODARRAYBUILDER_H

@class NSMutableArray, NSDate;

#import <Foundation/Foundation.h>


@interface HDSleepPeriodArrayBuilder : NSObject {
    NSMutableArray *_periods;
    NSMutableArray *_segments;
    NSDate *_minDate;
    NSDate *_maxDate;
}




-(id)finish;
-(id)init;
-(void)addOrderedSegment:(id)arg0 ;


@end


#endif