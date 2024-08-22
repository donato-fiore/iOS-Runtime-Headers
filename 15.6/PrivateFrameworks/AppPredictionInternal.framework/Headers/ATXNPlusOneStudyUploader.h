// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNPLUSONESTUDYUPLOADER_H
#define ATXNPLUSONESTUDYUPLOADER_H


#import <Foundation/Foundation.h>


@interface ATXNPlusOneStudyUploader : NSObject



// -(BOOL)_processClientModelUpdateStreamFromStartTime:(CGFloat)arg0 shortcutSuggestionHandler:(id)arg1 infoSuggestionHandler:(unk)arg2 activity:(id)arg3  ;
-(id)_applyPrivacyFilterToEvents:(id)arg0 ;
-(id)_emptyEventsForAllWidgetDescriptorsOnDeviceWithActivity:(id)arg0 ;
-(id)_preparedEventsFromEmptyEvents:(id)arg0 activity:(id)arg1 ;
-(id)_preparedEvents_appLaunchPopularity:(id)arg0 activity:(id)arg1 ;
-(id)_preparedEvents_appPushNotificationEnabled:(id)arg0 activity:(id)arg1 ;
-(id)_preparedEvents_appScreenTimeCategory:(id)arg0 activity:(id)arg1 ;
-(id)_preparedEvents_numAppLaunches:(id)arg0 activity:(id)arg1 ;
-(id)_preparedEvents_suggestionCounts:(id)arg0 activity:(id)arg1 ;
-(id)_preparedEvents_widgetExistsOnScreen:(id)arg0 activity:(id)arg1 ;
-(void)_sendEventsToCoreAnalytics:(id)arg0 ;
-(void)dryRunResultFilterByExtensionBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadStudyDataToCoreAnalyticsWithActivity:(id)arg0 ;


@end


#endif