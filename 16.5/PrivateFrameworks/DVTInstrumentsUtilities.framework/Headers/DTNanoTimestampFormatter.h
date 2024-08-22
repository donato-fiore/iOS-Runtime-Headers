// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTNANOTIMESTAMPFORMATTER_H
#define DTNANOTIMESTAMPFORMATTER_H

@class NSNumberFormatter;



@interface DTNanoTimestampFormatter : NSNumberFormatter



+(id)stringForNanoseconds:(NSUInteger)arg0 ;
+(id)stringForNanoseconds:(NSUInteger)arg0 highestResolutionTimeEnabled:(BOOL)arg1 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif