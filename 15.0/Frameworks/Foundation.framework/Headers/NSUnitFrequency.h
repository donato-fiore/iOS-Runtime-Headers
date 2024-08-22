// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNITFREQUENCY_H
#define NSUNITFREQUENCY_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitFrequency : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)framesPerSecond;
+(id)gigahertz;
+(id)hertz;
+(id)icuType;
+(id)kilohertz;
+(id)megahertz;
+(id)microhertz;
+(id)millihertz;
+(id)nanohertz;
+(id)terahertz;
+(void)initialize;


@end


#endif