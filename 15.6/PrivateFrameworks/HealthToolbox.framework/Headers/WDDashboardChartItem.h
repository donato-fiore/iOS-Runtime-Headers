// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDASHBOARDCHARTITEM_H
#define WDDASHBOARDCHARTITEM_H

@class NSDictionary, HKUnitPreferenceController, HKValueDataProvider, HKActivitySummaryDataProvider, NSString, HKDisplayCategory, HKDisplayType, NSDate, NSAttributedString;
@protocol HKValueDataProviderObserver, HKActivitySummaryDataProviderObserver, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource, WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate;

#import <Foundation/Foundation.h>

#import "WDProfile.h"

@interface WDDashboardChartItem : NSObject <HKValueDataProviderObserver, HKActivitySummaryDataProviderObserver, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource>

 {
    NSDictionary *_dataPoints;
    BOOL _isActive;
    HKUnitPreferenceController *_unitController;
    WDProfile *_profile;
    HKValueDataProvider *_currentValueDataProvider;
    HKValueDataProvider *_secondaryValueDataProvider;
}


@property (readonly, nonatomic) HKActivitySummaryDataProvider *activitySummaryProvider; // ivar: _activitySummaryProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayCategory *displayCategory; // ivar: _displayCategory
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (nonatomic) BOOL localeDidChange; // ivar: _localeDidChange
@property (readonly, nonatomic) NSString *primaryValueContextualText;
@property (weak, nonatomic) NSObject<WDDashboardCellPrimaryValueSourceDelegate> *primaryValueSourceDelegate; // ivar: _primaryValueSourceDelegate
@property (readonly, nonatomic) NSAttributedString *secondaryValue;
@property (weak, nonatomic) NSObject<WDDashboardCellSecondaryValueSourceDelegate> *secondaryValueSourceDelegate; // ivar: _secondaryValueSourceDelegate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger timeScope; // ivar: _timeScope


-(BOOL)shouldHideAverageLineForTimeScope:(NSInteger)arg0 ;
-(BOOL)shouldHideMinMaxOnBackgroundForTimeScope:(NSInteger)arg0 ;
-(id)init;
-(id)initWithDisplayType:(id)arg0 useAlternateCurrentValue:(BOOL)arg1 displayCategory:(id)arg2 profile:(id)arg3 healthStore:(id)arg4 ;
-(id)mostRecentValueWithValueFont:(id)arg0 unitFont:(id)arg1 ;
-(struct UIEdgeInsets )_chartInsetsForTimeScope:(NSInteger)arg0 ;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg0 ;
-(void)dataProviderDidUpdateValues:(id)arg0 ;
-(void)dealloc;
-(void)invalidateChart;


@end


#endif