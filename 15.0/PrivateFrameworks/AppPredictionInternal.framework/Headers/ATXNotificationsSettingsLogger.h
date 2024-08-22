// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSSETTINGSLOGGER_H
#define ATXNOTIFICATIONSSETTINGSLOGGER_H


#import <Foundation/Foundation.h>


@interface ATXNotificationsSettingsLogger : NSObject



+(id)getAppGenreFromBundleId:(id)arg0 ;
-(CGFloat)getSamplingRate;
-(id)convertToPBFormat:(id)arg0 setting:(id)arg1 ;
-(id)createPBSettingForBundleID:(id)arg0 settings:(id)arg1 ;
-(id)getAggregatedData:(id)arg0 totalApps:(int)arg1 ;
-(id)getAppUsageDataForBundleID:(id)arg0 ;
-(id)retrieveLogWithActivity:(id)arg0 ;
-(id)retrieveSettingsForBundleIDs:(id)arg0 ;
-(id)wrapLog:(id)arg0 ;
-(void)logNotificationSettingsWithActivity:(id)arg0 ;


@end


#endif