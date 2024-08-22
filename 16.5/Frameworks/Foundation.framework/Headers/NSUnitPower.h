// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITPOWER_H
#define NSUNITPOWER_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitPower : NSDimension <NSSecureCoding>





+(BOOL)supportsRegionalPreference;
+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)femtowatts;
+(id)gigawatts;
+(id)horsepower;
+(id)icuType;
+(id)kilowatts;
+(id)megawatts;
+(id)microwatts;
+(id)milliwatts;
+(id)nanowatts;
+(id)picowatts;
+(id)terawatts;
+(id)watts;
+(void)initialize;


@end


#endif