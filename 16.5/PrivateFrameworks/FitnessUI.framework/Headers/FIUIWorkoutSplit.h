// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIWORKOUTSPLIT_H
#define FIUIWORKOUTSPLIT_H

@class NSDateInterval;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutSplit : NSObject

@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) CGFloat distanceInMeters; // ivar: _distanceInMeters
@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistance:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)initWithDistance:(CGFloat)arg0 duration:(CGFloat)arg1 dateInterval:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif