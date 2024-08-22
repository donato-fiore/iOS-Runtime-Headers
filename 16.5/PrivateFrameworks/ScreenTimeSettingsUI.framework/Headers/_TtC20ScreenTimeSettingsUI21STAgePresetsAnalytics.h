// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20SCREENTIMESETTINGSUI21STAGEPRESETSANALYTICS_H
#define _TTC20SCREENTIMESETTINGSUI21STAGEPRESETSANALYTICS_H

@protocol _TtP20ScreenTimeSettingsUI29STAgePresetsAnalyticsProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC20ScreenTimeSettingsUI21STAgePresetsAnalytics : NSObject <_TtP20ScreenTimeSettingsUI29STAgePresetsAnalyticsProtocol_>

 {
    ? sessionId;
}




-(id)init;
-(void)sendChooseAgeButtonTappedAnalyticsEvent;
-(void)sendEnabledRestrictionsEventWithSelectionType:(NSInteger)arg0 lowerBound:(id)arg1 upperBound:(id)arg2 ;
-(void)sendPresetsValueChangedAnalyticsEventWithRecommendedPresetId:(id)arg0 fieldName:(id)arg1 recomendedValue:(id)arg2 selectedValue:(id)arg3 ;
-(void)sendPresetsViewedAnalyticsEventWithIsInitialSetup:(BOOL)arg0 ;
-(void)sendResetAgePresetSelectedAnalyticsEvent;
-(void)sendSelectedAgeRangeAnalyticsEventWithLowerBound:(NSInteger)arg0 upperBound:(NSInteger)arg1 ;
-(void)sendSkippedAnalyticsEvent;


@end


#endif