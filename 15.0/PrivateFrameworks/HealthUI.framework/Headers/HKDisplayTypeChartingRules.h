// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDISPLAYTYPECHARTINGRULES_H
#define HKDISPLAYTYPECHARTINGRULES_H

@class NSMutableDictionary, NSDictionary;
@protocol HKDecimalPrecisionRule, HKInteractiveChartsAxisScalingRule;

#import <Foundation/Foundation.h>


@interface HKDisplayTypeChartingRules : NSObject {
    NSInteger _defaultStyle;
    NSMutableDictionary *_rulesByTimeScope;
    id<HKDecimalPrecisionRule> *_allowedDecimalPrecisionRule;
    NSDictionary *_perUnitDecimalPrecision;
}


@property (retain, nonatomic) NSObject<HKInteractiveChartsAxisScalingRule> *axisScalingRule; // ivar: _axisScalingRule
@property (readonly, nonatomic) NSInteger defaultChartStyle; // ivar: _defaultChartStyle
@property (nonatomic) NSInteger preferredTimeScope; // ivar: _preferredTimeScope
@property (nonatomic) BOOL shouldConnectSamplesWithLines; // ivar: _shouldConnectSamplesWithLines
@property (nonatomic) BOOL shouldDisplayUnitForAxisLabels; // ivar: _shouldDisplayUnitForAxisLabels
@property (nonatomic) BOOL shouldHideAverageLine; // ivar: _shouldHideAverageLine
@property (nonatomic) BOOL shouldRoundYAxisDuringExpansion; // ivar: _shouldRoundYAxisDuringExpansion
@property (nonatomic) BOOL shouldShowInitialLollipop; // ivar: _shouldShowInitialLollipop


+(BOOL)chartStyleContainsHorizontalGridlines:(NSInteger)arg0 ;
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
-(id)intervalComponentsForTimeScope:(NSInteger)arg0 ;
-(void)_setRule:(id)arg0 forKey:(id)arg1 timeScope:(NSInteger)arg2 ;
-(void)adjustedBoundsForPortraitChartWithMin:(CGFloat)arg0 max:(CGFloat)arg1 minOut:(*CGFloat)arg2 maxOut:(*CGFloat)arg3 decimalPrecision:(*NSInteger)arg4 unit:(id)arg5 timeScope:(NSInteger)arg6 ;
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