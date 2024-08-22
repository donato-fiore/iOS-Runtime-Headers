// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNTIMEINTERVALFORMATTER_H
#define CNTIMEINTERVALFORMATTER_H

@class NSFormatter, NSNumberFormatter;



@interface CNTimeIntervalFormatter : NSFormatter

@property (readonly, nonatomic) NSNumberFormatter *numberFormatterWith3SigFigs; // ivar: _numberFormatterWith3SigFigs
@property (readonly, nonatomic) NSNumberFormatter *numberFormatterWith4SigFigs; // ivar: _numberFormatterWith4SigFigs


+(id)multiplierForOrder:(NSInteger)arg0 ;
+(id)numberFormatterWithSignificantDigits:(NSUInteger)arg0 ;
+(id)sharedFormatter;
+(id)stringForTimeInterval:(CGFloat)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForTimeInterval:(CGFloat)arg0 ;


@end


#endif