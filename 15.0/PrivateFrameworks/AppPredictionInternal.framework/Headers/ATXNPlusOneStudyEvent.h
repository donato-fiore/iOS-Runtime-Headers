// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNPLUSONESTUDYEVENT_H
#define ATXNPLUSONESTUDYEVENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXNPlusOneStudyAppLaunchCounts.h"

@interface ATXNPlusOneStudyEvent : NSObject

@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) ATXNPlusOneStudyAppLaunchCounts *appLaunchCounts; // ivar: _appLaunchCounts
@property (nonatomic) CGFloat appLaunchPopularity; // ivar: _appLaunchPopularity
@property (nonatomic) BOOL appPushNotificationEnabled; // ivar: _appPushNotificationEnabled
@property (nonatomic) NSUInteger appScreenTimeCategory; // ivar: _appScreenTimeCategory
@property (retain, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (nonatomic) NSInteger suggestionCountInfoHeuristicHigh; // ivar: _suggestionCountInfoHeuristicHigh
@property (nonatomic) NSInteger suggestionCountInfoHeuristicLow; // ivar: _suggestionCountInfoHeuristicLow
@property (nonatomic) NSInteger suggestionCountInfoHeuristicMed; // ivar: _suggestionCountInfoHeuristicMed
@property (nonatomic) NSInteger suggestionCountRelevantShortcut; // ivar: _suggestionCountRelevantShortcut
@property (nonatomic) NSInteger suggestionCountShortcutConversionHigh; // ivar: _suggestionCountShortcutConversionHigh
@property (nonatomic) NSInteger suggestionCountShortcutConversionLow; // ivar: _suggestionCountShortcutConversionLow
@property (nonatomic) NSInteger suggestionCountShortcutConversionMed; // ivar: _suggestionCountShortcutConversionMed
@property (nonatomic) BOOL widgetExistsOnScreen; // ivar: _widgetExistsOnScreen
@property (retain, nonatomic) NSString *widgetKind; // ivar: _widgetKind


-(id)coreAnalyticsEvent;


@end


#endif