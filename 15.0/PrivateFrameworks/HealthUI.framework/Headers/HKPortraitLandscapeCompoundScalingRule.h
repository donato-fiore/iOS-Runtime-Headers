// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKPORTRAITLANDSCAPECOMPOUNDSCALINGRULE_H
#define HKPORTRAITLANDSCAPECOMPOUNDSCALINGRULE_H

@class NSString;
@protocol HKInteractiveChartsAxisScalingRule;

#import <Foundation/Foundation.h>


@interface HKPortraitLandscapeCompoundScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>

 {
    id<HKInteractiveChartsAxisScalingRule> *_portraitScalingRule;
    id<HKInteractiveChartsAxisScalingRule> *_landscapeScalingRule;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)ruleWithPortraitRule:(id)arg0 landscapeRule:(id)arg1 ;
-(id)portraitYValueRangeForRange:(id)arg0 zoomLevel:(NSInteger)arg1 allowedDecimalPrecision:(NSInteger)arg2 ;
-(id)yValueRangeForRange:(id)arg0 zoomLevel:(NSInteger)arg1 ;


@end


#endif