// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITINFORMATIONSTORAGE_H
#define NSUNITINFORMATIONSTORAGE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitInformationStorage : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)bits;
+(id)bytes;
+(id)exabits;
+(id)exabytes;
+(id)exbibits;
+(id)exbibytes;
+(id)gibibits;
+(id)gibibytes;
+(id)gigabits;
+(id)gigabytes;
+(id)icuType;
+(id)kibibits;
+(id)kibibytes;
+(id)kilobits;
+(id)kilobytes;
+(id)mebibits;
+(id)mebibytes;
+(id)megabits;
+(id)megabytes;
+(id)nibbles;
+(id)pebibits;
+(id)pebibytes;
+(id)petabits;
+(id)petabytes;
+(id)tebibits;
+(id)tebibytes;
+(id)terabits;
+(id)terabytes;
+(id)yobibits;
+(id)yobibytes;
+(id)yottabits;
+(id)yottabytes;
+(id)zebibits;
+(id)zebibytes;
+(id)zettabits;
+(id)zettabytes;
+(void)initialize;


@end


#endif