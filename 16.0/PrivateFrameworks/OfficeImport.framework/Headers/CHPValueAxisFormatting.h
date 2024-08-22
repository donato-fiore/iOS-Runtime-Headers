// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHPVALUEAXISFORMATTING_H
#define CHPVALUEAXISFORMATTING_H



#import "EDProcessor.h"

@interface CHPValueAxisFormatting : EDProcessor



-(BOOL)isObjectSupported:(id)arg0 ;
-(BOOL)isPercentageFormattingInContentFormatString:(id)arg0 edValue:(struct EDValue *)arg1 ;
-(id)dataPointFormattingInData:(id)arg0 ;
-(id)dataPointFormattingInSeriesCollection:(id)arg0 ;
-(id)dataPointFormattingInSources:(id)arg0 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;


@end


#endif