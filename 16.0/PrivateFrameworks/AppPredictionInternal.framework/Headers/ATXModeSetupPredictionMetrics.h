// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODESETUPPREDICTIONMETRICS_H
#define ATXMODESETUPPREDICTIONMETRICS_H

@class ATXCoreAnalyticsMetric, NSNumber, NSString;



@interface ATXModeSetupPredictionMetrics : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSNumber *allPageFolderCountBucket; // ivar: _allPageFolderCountBucket
@property (copy, nonatomic) NSNumber *allPageWidgetCountBucket; // ivar: _allPageWidgetCountBucket
@property (copy, nonatomic) NSNumber *appLaunchCountOfMode7Days; // ivar: _appLaunchCountOfMode7Days
@property (copy, nonatomic) NSNumber *appLaunchCountOfModeToday; // ivar: _appLaunchCountOfModeToday
@property (nonatomic) BOOL hasOfferedDigest; // ivar: _hasOfferedDigest
@property (nonatomic) BOOL hasSetupDigest; // ivar: _hasSetupDigest
@property (copy, nonatomic) NSNumber *homePageFolderCountBucket; // ivar: _homePageFolderCountBucket
@property (copy, nonatomic) NSNumber *homePageWidgetCountBucket; // ivar: _homePageWidgetCountBucket
@property (nonatomic) BOOL modeHasSetup; // ivar: _modeHasSetup
@property (nonatomic) BOOL modeHasSetup7Days; // ivar: _modeHasSetup7Days
@property (nonatomic) BOOL modeHasSetupToday; // ivar: _modeHasSetupToday
@property (copy, nonatomic) NSNumber *modeInferred7Days; // ivar: _modeInferred7Days
@property (copy, nonatomic) NSNumber *modeInferredToday; // ivar: _modeInferredToday
@property (copy, nonatomic) NSString *modeName; // ivar: _modeName
@property (copy, nonatomic) NSNumber *modeTurnedOnCount7Days; // ivar: _modeTurnedOnCount7Days
@property (copy, nonatomic) NSNumber *modeTurnedOnCountToday; // ivar: _modeTurnedOnCountToday
@property (copy, nonatomic) NSNumber *notificationsClearedCount7Days; // ivar: _notificationsClearedCount7Days
@property (copy, nonatomic) NSNumber *notificationsClearedCountToday; // ivar: _notificationsClearedCountToday
@property (copy, nonatomic) NSNumber *notificationsCount7Days; // ivar: _notificationsCount7Days
@property (copy, nonatomic) NSNumber *notificationsCountToday; // ivar: _notificationsCountToday
@property (copy, nonatomic) NSNumber *weightedAppLaunchCountOfMode7Days; // ivar: _weightedAppLaunchCountOfMode7Days
@property (copy, nonatomic) NSNumber *weightedAppLaunchCountOfModeToday; // ivar: _weightedAppLaunchCountOfModeToday


-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;


@end


#endif