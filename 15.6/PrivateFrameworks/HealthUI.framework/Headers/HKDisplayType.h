// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDISPLAYTYPE_H
#define HKDISPLAYTYPE_H

@class NSPredicate, NSDictionary, NSString, UIImage, NSAttributedString, NSSet, HKObjectType, HKSampleType, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKDisplayTypeChartingRules.h"
#import "HKValueRange.h"
#import "HKDisplayCategory.h"

@interface HKDisplayType : NSObject <NSCopying>

 {
    NSPredicate *_defaultChartingPredicate;
    NSDictionary *_chartingPredicatesByTimeScope;
    NSUInteger _portraitPresentationOptions;
    NSDictionary *_portraitPresentationOptionOverrides;
    NSString *_labelDisplayNameKey;
    NSString *_shortenedDisplayNameKey;
    NSString *_embeddedDisplayNameKey;
    NSString *_titleEmbeddedDisplayNameKey;
    NSString *_keywordsNameKey;
    NSString *_summaryNameKey;
    NSString *_summaryForEnhancedFeatureNameKey;
    NSString *_summaryPairedWatchNameKey;
    NSString *_displayNameFitnessJrKey;
    NSString *_summaryFitnessJrKey;
    NSString *_cautionaryTextKey;
    NSString *_unitChangeCautionaryTextKey;
    NSString *_healthKitLocalizationTableNameOverride;
    NSString *_listIconImageNameOverride;
    UIImage *_listIconOverride;
    NSString *_detailImageName;
    UIImage *_detailImage;
}


@property (getter=_isWheelchairUser, setter=_setWheelchairUser:) BOOL _wheelchairUser; // ivar: __wheelchairUser
@property (readonly, nonatomic) BOOL allowsManualEntry;
@property (readonly, nonatomic) BOOL anyPortraitChartDefinition;
@property (readonly, nonatomic) NSAttributedString *attributedSummaryAttribution; // ivar: _attributedSummaryAttribution
@property (readonly, nonatomic) BOOL canBecomeFavorite;
@property (readonly, nonatomic) NSInteger categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, nonatomic) NSString *cautionaryText;
@property (readonly, nonatomic) HKDisplayTypeChartingRules *chartingRules; // ivar: _chartingRules
@property (retain, nonatomic) HKValueRange *defaultAxisRangeOverride; // ivar: _defaultAxisRangeOverride
@property (readonly, nonatomic) UIImage *detailImage;
@property (readonly, nonatomic) BOOL disallowsSourceReordering; // ivar: _disallowsSourceReordering
@property (readonly, nonatomic) HKDisplayCategory *displayCategory;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayNameForFitnessJr;
@property (readonly, copy, nonatomic) NSString *displayNameKey; // ivar: _displayNameKey
@property (readonly, nonatomic) UIImage *displayTypeIcon;
@property (readonly, nonatomic) NSInteger displayTypeIdentifier; // ivar: _displayTypeIdentifier
@property (readonly, nonatomic) NSString *embeddedDisplayName;
@property (readonly, nonatomic) BOOL excludeFromDataTypeSearch; // ivar: _excludeFromDataTypeSearch
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL isActivitySummary;
@property (readonly, nonatomic) BOOL isCharacteristic;
@property (nonatomic) BOOL isCriticalForAutoscale; // ivar: _isCriticalForAutoscale
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isElectrocardiogram;
@property (readonly, nonatomic) NSSet *keywords;
@property (readonly, nonatomic) NSString *labelDisplayName;
@property (readonly, nonatomic) UIImage *listIcon;
@property (readonly, nonatomic) NSString *listIconImageName;
@property (readonly, nonatomic) NSString *localizationTableNameOverride;
@property (readonly, nonatomic) HKObjectType *objectType; // ivar: _objectType
@property (readonly, nonatomic) HKSampleType *recordSampleType;
@property (readonly, nonatomic) NSUInteger roundingMode;
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (readonly, nonatomic) CGFloat scalarValue; // ivar: _scalarValue
@property (readonly, nonatomic) NSArray *secondaryCategoryIdentifiers; // ivar: _secondaryCategoryIdentifiers
@property (readonly, nonatomic) NSArray *secondaryDisplayCategories;
@property (readonly, nonatomic) UIImage *shareIcon;
@property (readonly, nonatomic) NSString *shortenedDisplayName;
@property (nonatomic) BOOL shouldDisplayUnitStringOnYAxis; // ivar: _shouldDisplayUnitStringOnYAxis
@property (readonly, nonatomic) BOOL shouldUseSingleSecondaryValue; // ivar: _shouldUseSingleSecondaryValue
@property (readonly, nonatomic) BOOL showAllDataHierarchically; // ivar: _showAllDataHierarchically
@property (readonly, nonatomic) NSUInteger statisticsMergeStrategy; // ivar: _statisticsMergeStrategy
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) BOOL summaryAttributionHasLink; // ivar: _summaryAttributionHasLink
@property (readonly, nonatomic) NSString *summaryForEnhancedFeature;
@property (readonly, nonatomic) NSString *summaryForFitnessJr;
@property (readonly, nonatomic) NSString *summaryForPairedWatch;
@property (readonly, nonatomic) BOOL supportsAssociatedSamples;
@property (readonly, nonatomic) NSString *titleEmbeddedDisplayName;
@property (readonly, nonatomic) NSString *unitChangeCautionaryText;
@property (readonly, nonatomic) UIImage *unitIcon;
@property (readonly, nonatomic) NSDictionary *unitNameKeyOverrides; // ivar: _unitNameKeyOverrides
@property (readonly, nonatomic) BOOL unitPreferencesRequireChangeConfirmation;
@property (readonly, nonatomic) BOOL useSecondsWhenDisplayingDuration; // ivar: _useSecondsWhenDisplayingDuration


+(id)hk_enumeratedValueLabelsWithDisplayTypeIdentifier:(NSInteger)arg0 ;
-(BOOL)_isNikeFuel;
-(BOOL)_supportsDayTimeScope;
-(BOOL)_supportsFiveYearTimeScope;
-(BOOL)_supportsHourTimeScope;
-(BOOL)_supportsMonthTimeScope;
-(BOOL)_supportsSixMonthTimeScope;
-(BOOL)_supportsWeekTimeScope;
-(BOOL)_supportsYearTimeScope;
-(BOOL)contextItemShouldDisplayEventCountForDistributionStyle:(NSInteger)arg0 ;
-(BOOL)contextItemShouldUseTightSpacingBetweenValueAndUnit;
-(BOOL)hk_interactiveChartsDataSourceDependsOnTimeScope;
-(BOOL)hk_isSupportedTimeScope:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)adjustedDoubleForClientDouble:(CGFloat)arg0 ;
-(CGFloat)adjustedDoubleForDaemonDouble:(CGFloat)arg0 ;
-(NSInteger)hk_stackedChartSectionsCountForTimeScope:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)hk_chartCalendarUnitForTimeScope:(NSInteger)arg0 ;
-(NSUInteger)hk_interactiveChartOptions;
-(NSUInteger)presentationOptionsForTimeScope:(NSInteger)arg0 ;
-(id)_audioExposureHistogramDataSourceForAudioExposureTypeIdentifier:(id)arg0 withHealthStore:(id)arg1 unitController:(id)arg2 ;
-(id)_bloodPressureDataSourceWithHealthStore:(id)arg0 ;
-(id)_bloodPressureUserInfoBlock:(SEL)arg0 ;
-(id)_countDataSourceWithHealthStore:(id)arg0 ;
-(id)_dataSourceForQuantityType:(id)arg0 timeScope:(NSInteger)arg1 unitController:(id)arg2 healthStore:(id)arg3 ;
-(id)_dataSourceForTimeScope:(NSInteger)arg0 dataCacheController:(id)arg1 ;
-(id)_dataSourceForWorkoutsWithTimeScope:(NSInteger)arg0 healthStore:(id)arg1 ;
-(id)_generateBarSeriesWithFillStyle:(id)arg0 ;
-(id)_generateBloodPressureSeriesWithColor:(id)arg0 ;
-(id)_generateGraphSeriesForTimeScope:(NSInteger)arg0 displayCategory:(id)arg1 unitController:(id)arg2 ;
-(id)_generateHandwashingBarSeriesWithDisplayCategory:(id)arg0 ;
-(id)_generateInsulinBarSeriesWithDisplayCategory;
-(id)_generateJulianIndexedSevenDayQuantitySeriesWithColor:(id)arg0 ;
-(id)_generateLevelCategorySeriesWithColor:(id)arg0 ;
-(id)_generateMinMaxSeriesWithColor:(id)arg0 ;
-(id)_generateSingleLineSeriesWithColor:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_generateStackedSeriesWithColor:(id)arg0 ;
-(id)_handwashingDataSourceWithHealthStore:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_heartRateHistogramDataSourceWithHealthStore:(id)arg0 unitController:(id)arg1 ;
-(id)_hk_defaultChartAxisBoundStringFromValue:(id)arg0 defaultNumberFormatter:(id)arg1 unitController:(id)arg2 ;
-(id)_insulinDataSourceWithHealthStore:(id)arg0 ;
-(id)_levelCategoryValuesDataSourceForCategoryType:(id)arg0 timeScope:(NSInteger)arg1 healthStore:(id)arg2 displayIdentifier:(NSInteger)arg3 ;
-(id)_localizedStringWithKey:(id)arg0 ;
-(id)_minMaxUserInfoBlockWithUnitController:(SEL)arg0 displayType:(id)arg1 ;
-(id)_oxygenSaturationHistogramDataSourceWithHealthStore:(id)arg0 unitController:(id)arg1 ;
-(id)_rawLocalizedStringForKey:(id)arg0 ;
-(id)_singleCenteredLineDataSourceForCategoryType:(id)arg0 timeScope:(NSInteger)arg1 healthStore:(id)arg2 displayTypeIdentifier:(NSInteger)arg3 ;
-(id)_singleValueUserInfoBlockWithUnitController:(SEL)arg0 displayType:(id)arg1 statisticsOption:(id)arg2 ;
-(id)_stackedDataSourceForCategoryType:(id)arg0 timeScope:(NSInteger)arg1 healthStore:(id)arg2 ;
-(id)_statFormatterItemOptionsForQuantityType:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_timePeriodDataSourceForSampleType:(id)arg0 timeScope:(NSInteger)arg1 healthStore:(id)arg2 ;
-(id)_timePeriodDisplayPrefix;
-(id)_walkingMetricHistogramDataSourceForWalkingTypeIdentifier:(id)arg0 withHealthStore:(id)arg1 unitController:(id)arg2 ;
-(id)adjustedValueForClientValue:(id)arg0 ;
-(id)adjustedValueForDaemonValue:(id)arg0 ;
-(id)bloodGlucoseHistogramDataSourceWithHealthStore:(id)arg0 unitController:(id)arg1 ;
-(id)cardioFitnessDataSourceWithUnitController:(id)arg0 healthStore:(id)arg1 ;
-(id)chartingPredicateForTimeScope:(NSInteger)arg0 ;
-(id)colorWithDisplayCategoryController:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultDataRange;
-(id)defaultValuePredicate;
-(id)description;
-(id)generateDistributionSeriesWithColor:(id)arg0 numberFormatter:(id)arg1 ;
-(id)generateDistributionSeriesWithColor:(id)arg0 numberFormatter:(id)arg1 lineWidth:(CGFloat)arg2 ;
-(id)generateLineSeriesWithColor:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)generateScatterPlotSeriesWithColor:(id)arg0 ;
-(id)hk_customSeriesPointIntervalComponentsForTimeScope:(NSInteger)arg0 ;
-(id)hk_dashboardChartBoundStringFromValue:(id)arg0 defaultNumberFormatter:(id)arg1 unitController:(id)arg2 ;
-(id)hk_dimensionForChartAxisWithUnitController:(id)arg0 ;
-(id)hk_enumeratedValueLabels;
-(id)hk_interactiveChartAxisStringFromValue:(id)arg0 defaultNumberFormatter:(id)arg1 unitController:(id)arg2 ;
-(id)hk_interactiveChartsDataSourceForTimeScope:(NSInteger)arg0 healthStore:(id)arg1 unitController:(id)arg2 ;
-(id)hk_interactiveChartsFormatterForTimeScope:(NSInteger)arg0 ;
-(id)hk_numberFormatterForUnit:(id)arg0 ;
-(id)hk_numberFormatterForUnit:(id)arg0 formattingContext:(NSInteger)arg1 ;
-(id)hk_standardSeriesForTimeScope:(NSInteger)arg0 displayCategory:(id)arg1 unitController:(id)arg2 dataCacheController:(id)arg3 displayCategoryController:(id)arg4 ;
-(id)hk_standardSeriesForTimeScope:(NSInteger)arg0 graphSeriesDataSource:(id)arg1 displayCategory:(id)arg2 unitController:(id)arg3 dataCacheController:(id)arg4 displayCategoryController:(id)arg5 ;
-(id)hk_startOfDayTransform:(SEL)arg0 ;
-(id)hk_valueFormatterForUnit:(id)arg0 ;
-(id)hk_valueFormatterForUnit:(id)arg0 formattingContext:(NSInteger)arg1 ;
-(id)hk_valueOrderForStackedCharts;
-(id)initFromDictionary:(id)arg0 ;
-(id)respiratoryRateHistogramDataSourceWithHealthStore:(id)arg0 unitController:(id)arg1 ;
-(id)unitDisplayNameKeyOverrideForUnit:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)unitNameForValue:(id)arg0 unitPreferenceController:(id)arg1 ;
-(void)_applyChartingProperties:(id)arg0 ;
-(void)_applyScalarValue:(id)arg0 ;
-(void)_applySummaryAndAttributionPropertiesWithDictionary:(id)arg0 ;
-(void)_applyTextualPropertiesWithDictionary:(id)arg0 displayNameKey:(id)arg1 ;


@end


#endif