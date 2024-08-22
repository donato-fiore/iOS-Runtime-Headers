// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTBYTESFORMATTER_H
#define DTBYTESFORMATTER_H

@class NSNumberFormatter;



@interface DTBytesFormatter : NSNumberFormatter



+(id)magnitudeFormatter;
+(id)stringForLongLong:(NSInteger)arg0 ;
+(id)stringForObjectValue:(id)arg0 ;
+(id)stringFromNumber:(id)arg0 ;
+(void)initialize;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromNumber:(id)arg0 ;


@end


#endif