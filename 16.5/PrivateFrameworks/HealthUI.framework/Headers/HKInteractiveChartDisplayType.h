// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTDISPLAYTYPE_H
#define HKINTERACTIVECHARTDISPLAYTYPE_H

@class UIColor, NSDictionary, NSString;


#import "HKDisplayType.h"
#import "HKGraphSeries.h"
#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartDisplayType : HKDisplayType

@property (readonly, nonatomic) HKDisplayType *baseDisplayType; // ivar: _baseDisplayType
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) HKGraphSeries *mainGraphSeries; // ivar: _mainGraphSeries
@property (retain, nonatomic) NSDictionary *seriesForTimeScopeMapping; // ivar: _seriesForTimeScopeMapping
@property (readonly, nonatomic) NSString *specifiedDisplayName; // ivar: _specifiedDisplayName
@property (readonly, nonatomic) NSString *specifiedUnitName; // ivar: _specifiedUnitName
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter; // ivar: _specifiedValueFormatter


-(NSInteger)_internalDisplayTypeIdentifier;
-(id)_initWithDisplayName:(id)arg0 unitDisplayNameOverrides:(id)arg1 localizationTableOverride:(id)arg2 chartingRules:(id)arg3 unitName:(id)arg4 valueFormatter:(id)arg5 dataTypeCode:(NSInteger)arg6 baseDisplayType:(id)arg7 mainGraphSeries:(id)arg8 seriesForTimeScopeMapping:(id)arg9 ;
-(id)colorWithDisplayCategoryController:(id)arg0 ;
-(id)description;
-(id)displayName;
-(id)graphSeriesForTimeScope:(NSInteger)arg0 ;
-(id)hk_interactiveChartsFormatterForTimeScope:(NSInteger)arg0 ;
-(id)initWithBaseDisplayType:(id)arg0 valueFormatter:(id)arg1 dataTypeCode:(NSInteger)arg2 seriesForTimeScopeMapping:(id)arg3 ;
-(id)initWithGraphSeries:(id)arg0 baseDisplayType:(id)arg1 dataTypeCode:(NSInteger)arg2 ;
-(id)initWithGraphSeries:(id)arg0 baseDisplayType:(id)arg1 valueFormatter:(id)arg2 dataTypeCode:(NSInteger)arg3 ;
-(id)initWithGraphSeries:(id)arg0 displayName:(id)arg1 unitName:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(NSInteger)arg4 ;
-(id)unitNameForValue:(id)arg0 unitPreferenceController:(id)arg1 ;
-(void)setIsCriticalForAutoscale:(BOOL)arg0 ;


@end


#endif