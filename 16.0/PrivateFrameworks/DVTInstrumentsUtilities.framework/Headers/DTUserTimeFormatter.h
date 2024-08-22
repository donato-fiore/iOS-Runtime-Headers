// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTUSERTIMEFORMATTER_H
#define DTUSERTIMEFORMATTER_H

@class NSNumberFormatter;



@interface DTUserTimeFormatter : NSNumberFormatter



+(id)stringForNanoseconds:(NSUInteger)arg0 ;
+(id)stringForNanoseconds:(NSUInteger)arg0 highestResolutionTimeEnabled:(BOOL)arg1 ;
+(id)stringForObjectValue:(id)arg0 ;
+(id)valueUnitStringForNanoseconds:(NSUInteger)arg0 ;
+(void)initialize;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif