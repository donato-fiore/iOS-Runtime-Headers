// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKTIEREDDECIMALPRECISIONPERCENTAGEFORMATTER_H
#define _HKTIEREDDECIMALPRECISIONPERCENTAGEFORMATTER_H

@class HKTieredDecimalPrecisionNumberFormatter;



@interface _HKTieredDecimalPrecisionPercentageFormatter : HKTieredDecimalPrecisionNumberFormatter



+(id)sharedInstance;
-(BOOL)returnsUnitWithValueForDisplay;
-(NSUInteger)style;
-(id)stringFromNumber:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif