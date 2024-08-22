// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DBANALYTICSAPPINFO_H
#define _DBANALYTICSAPPINFO_H

@class DBAnalyticsTimeAccumulator, NSString;


#import "DBApplicationInfo.h"

@interface _DBAnalyticsAppInfo : DBAnalyticsTimeAccumulator

@property (readonly, nonatomic) DBApplicationInfo *appInfo; // ivar: _appInfo
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSUInteger dashboardWidgetType; // ivar: _dashboardWidgetType
@property (nonatomic) NSUInteger numberOfSiriPresentations; // ivar: _numberOfSiriPresentations
@property (nonatomic) BOOL wasVisibleBeforeCarScreen; // ivar: _wasVisibleBeforeCarScreen
@property (nonatomic) BOOL wasVisibleBeforeSiri; // ivar: _wasVisibleBeforeSiri
@property (nonatomic) BOOL wasVisibleInDashboardBeforeCarScreen; // ivar: _wasVisibleInDashboardBeforeCarScreen


-(id)debugDescription;
-(id)initWithAppInfo:(id)arg0 policyEvaluator:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 appDeclaration:(id)arg1 policyEvaluator:(id)arg2 ;
-(void)startCountingDashboardVisibleTime;
-(void)startCountingVisibleTime;
-(void)stopCountingDashboardVisibleTime;
-(void)stopCountingVisibleTime;


@end


#endif