// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDISPLAYTYPECHARTINGRULES_H
#define HKDISPLAYTYPECHARTINGRULES_H

@class NSMutableDictionary, NSDictionary, NSNumber;
@protocol HKDecimalPrecisionRule, HKInteractiveChartsAxisScalingRule;

#import <Foundation/Foundation.h>


@interface HKDisplayTypeChartingRules : NSObject {
    NSInteger _defaultStyle;
    NSMutableDictionary *_rulesByTimeScope;
    id<HKDecimalPrecisionRule> *_allowedDecimalPrecisionRule;
    NSDictionary *_perUnitDecimalPrecision;
}


@property (retain, nonatomic) NSObject<HKInteractiveChartsAxisScalingRule> *axisScalingRule; // ivar: _axisScalingRule
@property (retain, nonatomic) NSObject<HKInteractiveChartsAxisScalingRule> *compactChartAxisScalingRule; // ivar: _compactChartAxisScalingRule
@property (readonly, nonatomic) NSInteger defaultChartStyle; // ivar: _defaultChartStyle
@property (retain, nonatomic) NSNumber *maximumYAxisLabelCount; // ivar: _maximumYAxisLabelCount
@property (retain, nonatomic) NSNumber *maximumYAxisLabelWidth; // ivar: _maximumYAxisLabelWidth
@property (nonatomic) NSInteger preferredTimeScope; // ivar: _preferredTimeScope
@property (readonly, nonatomic) BOOL shouldConnectSamplesWithLines; // ivar: _shouldConnectSamplesWithLines
@property (readonly, nonatomic) BOOL shouldDisplayUnitForAxisLabels; // ivar: _shouldDisplayUnitForAxisLabels
@property (readonly, nonatomic) BOOL shouldInvertYAxis; // ivar: _shouldInvertYAxis
@property (readonly, nonatomic) BOOL shouldRoundYAxisDuringExpansion; // ivar: _shouldRoundYAxisDuringExpansion
@property (readonly, nonatomic) BOOL shouldShowInitialLollipop; // ivar: _shouldShowInitialLollipop


+(BOOL)chartStyleContainsHorizontalGridlines:(NSInteger)arg0 ;
+(id)basalBodyTemperatureChartingRules;
+(id)bloodGlucoseChartingRules;
+(id)charonDepthChartingRules;
+(id)charonTemperatureChartingRules;
+(id)chartingRulesWithDefaultChartStyle:(NSInteger)arg0 axisScalingRule:(id)arg1 ;
+(id)chartingRulesWithDefaultChartStyle:(NSInteger)arg0 chartStyleForTimeScopes:(id)arg1 axisScalingRule:(id)arg2 compactAxisScalingRule:(id)arg3 preferredTimeScope:(NSInteger)arg4 chartingOptions:(NSUInteger)arg5 ;
+(id)chartingRulesWithDefaultChartStyle:(NSInteger)arg0 chartStyleForTimeScopes:(id)arg1 axisScalingRule:(id)arg2 preferredTimeScope:(NSInteger)arg3 chartingOptions:(NSUInteger)arg4 ;
+(id)levelCategoryChartingRules;
+(id)levelCategorySpanningChartingRules;
+(id)restingAndWalkingHeartRateChartingRules;
+(id)sleepingWristTemperatureChartingRules;
+(id)standHourChartingRulesWithDayChartStyle:(NSInteger)arg0 ;
// +(id)timePeriodChartingRulesWithDayChartStyle:(NSInteger)arg0 minimumYAxisSpacingPerDay:(CGFloat)arg1 startOfDayTransform:(id)arg2 noDataAxisRange:(unk)arg3  ;
+(id)walkingSteadinessChartingRules;
-(BOOL)lineChartExtendFirstValueForTimeScope:(NSInteger)arg0 ;
-(BOOL)lineChartExtendLastValueForTimeScope:(NSInteger)arg0 ;
-(BOOL)lineChartFlatLastValueForTimeScope:(NSInteger)arg0 ;
-(BOOL)lineChartUsesPointMarkerImageForTimeScope:(NSInteger)arg0 ;
-(BOOL)lineChartUsesValueAxisAnnotationForTimeScope:(NSInteger)arg0 ;
-(CGFloat)chartPointLineWidthForTimeScope:(NSInteger)arg0 ;
-(CGFloat)chartPointRadiusForTimeScope:(NSInteger)arg0 ;
-(NSInteger)chartStyleForTimeScope:(NSInteger)arg0 ;
-(id)_ruleForKey:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)allowedDecimalPrecisionRuleForUnit:(id)arg0 ;
-(id)initWithDefaultChartStyle:(NSInteger)arg0 ;
-(id)initWithDefaultChartStyle:(NSInteger)arg0 chartingOptions:(NSUInteger)arg1 ;
-(id)intervalComponentsForTimeScope:(NSInteger)arg0 ;
-(void)_setRule:(id)arg0 forKey:(id)arg1 timeScope:(NSInteger)arg2 ;
-(void)setAllowedDecimalPrecisionRule:(id)arg0 perUnitPrecisionRules:(id)arg1 ;
-(void)setChartPointLineWidth:(CGFloat)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setChartPointRadius:(CGFloat)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setChartStyle:(NSInteger)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setIntervalComponents:(id)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setLineChartExtendFirstValue:(BOOL)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setLineChartExtendLastValue:(BOOL)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setLineChartFlatLastValue:(BOOL)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setLineChartUsesPointMarkerImage:(BOOL)arg0 forTimeScope:(NSInteger)arg1 ;
-(void)setLineChartUsesValueAxisAnnotation:(BOOL)arg0 forTimeScope:(NSInteger)arg1 ;


@end


#endif