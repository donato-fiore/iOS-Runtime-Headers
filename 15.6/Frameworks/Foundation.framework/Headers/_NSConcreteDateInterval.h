// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCONCRETEDATEINTERVAL_H
#define _NSCONCRETEDATEINTERVAL_H

@class NSDate;


#import "NSDateInterval.h"

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    CGFloat _duration;
}




-(CGFloat)duration;
-(id)endDate;
-(id)init;
-(id)initWithStartDate:(id)arg0 duration:(CGFloat)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)startDate;
-(void)dealloc;


@end


#endif