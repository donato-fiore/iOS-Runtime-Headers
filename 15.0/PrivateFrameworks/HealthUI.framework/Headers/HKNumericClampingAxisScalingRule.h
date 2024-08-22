// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKNUMERICCLAMPINGAXISSCALINGRULE_H
#define HKNUMERICCLAMPINGAXISSCALINGRULE_H

@class NSArray, NSString;
@protocol HKInteractiveChartsAxisScalingRule;

#import <Foundation/Foundation.h>


@interface HKNumericClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>

 {
    NSArray *_chartBoundsRuleChoices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)ruleWithChartBoundsRuleChoices:(id)arg0 ;
-(id)portraitYValueRangeForRange:(id)arg0 zoomLevel:(NSInteger)arg1 allowedDecimalPrecision:(NSInteger)arg2 ;
-(id)yValueRangeForRange:(id)arg0 zoomLevel:(NSInteger)arg1 ;


@end


#endif