// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNITDURATION_H
#define NSUNITDURATION_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitDuration : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)hours;
+(id)icuType;
+(id)microseconds;
+(id)milliseconds;
+(id)minutes;
+(id)nanoseconds;
+(id)picoseconds;
+(id)seconds;
+(void)initialize;


@end


#endif