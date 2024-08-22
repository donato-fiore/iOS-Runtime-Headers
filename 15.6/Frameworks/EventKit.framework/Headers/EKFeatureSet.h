// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKFEATURESET_H
#define EKFEATURESET_H


#import <Foundation/Foundation.h>


@interface EKFeatureSet : NSObject



+(BOOL)areApplicationBadgesSupported;
+(BOOL)areContextualRemindersSupported;
+(BOOL)areQuickActionsSupported;
+(BOOL)areVehicleTriggersEnabled;
+(BOOL)automaticGeocodingEnabled;
+(BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+(BOOL)calendarListViewCellsFeaturesExtraContent;
+(BOOL)eventDetailsDayPreviewEnabled;
+(BOOL)eventsFoundInAppsEnabled;
+(BOOL)isConservativeEntryEnabled;
+(BOOL)isContinuitySupported;
+(BOOL)isSuggestionsEnabled;
+(BOOL)isTravelAdvisorySupported;
+(BOOL)mustDisplaySplashScreenToUser;
+(NSUInteger)_currentSplashScreenVersion;
+(void)userAcknowledgedSplashScreen;


@end


#endif