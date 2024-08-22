// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKREMOTEDATEINTERVALS_H
#define _HKREMOTEDATEINTERVALS_H

@class NSDateInterval;

#import <Foundation/Foundation.h>


@interface _HKRemoteDateIntervals : NSObject

@property (readonly, nonatomic) NSDateInterval *monthDateInterval; // ivar: _monthDateInterval
@property (readonly, nonatomic) NSDateInterval *sixMonthDateInterval; // ivar: _sixMonthDateInterval


-(id)initWithMonthDateInterval:(id)arg0 sixMonthDateInterval:(id)arg1 ;


@end


#endif