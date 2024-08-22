// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIRECURRENCERULEBUILDER_H
#define EKUIRECURRENCERULEBUILDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EKUIRecurrenceRuleBuilder : NSObject

@property NSUInteger count; // ivar: _count
@property (retain) NSArray *dayNumbers; // ivar: _dayNumbers
@property int days; // ivar: _days
@property NSInteger frequency; // ivar: _frequency
@property NSInteger interval; // ivar: _interval
@property (retain) NSArray *monthNumbers; // ivar: _monthNumbers
@property int ordinalValue; // ivar: _ordinalValue


-(id)daysOfTheWeekWithWeek:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)recurrenceRule;
-(id)setPositions;
-(void)_setDefaultValues;


@end


#endif