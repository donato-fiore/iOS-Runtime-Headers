// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXFEEDBACK_H
#define _ATXFEEDBACK_H

@class NSString;
@protocol _ATXFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "_ATXInternalUninstallNotification.h"
#import "_ATXAppLaunchCategoricalHistogram.h"

@interface _ATXFeedback : NSObject <_ATXFeedbackProtocol>

 {
    _ATXDataStore *_store;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    CGFloat _priorAlpha;
    CGFloat _priorBeta;
    NSString *_abGroupIdentifier;
    _ATXAppLaunchCategoricalHistogram *_appCoarseTimePOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appSpecificTimeDOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appCoarseTimePOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appSpecificTimeDOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsCoarseGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appRejectsCoarseGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsSpecificGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appRejectsSpecificGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appExplicitRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppExplicitRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryExplicitRejectsCoarseTimePOWLocation;
}


@property (readonly, nonatomic) CGFloat currentAlpha;
@property (readonly, nonatomic) CGFloat currentBeta;


+(BOOL)isWidgetOrSpotlight:(NSUInteger)arg0 ;
+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg0 histogramManager:(id)arg1 ;
-(void)decayCounts;
-(void)doDecayAtTime:(CGFloat)arg0 ;
-(void)feedbackLaunchedWithConsumerType:(NSUInteger)arg0 forBundleId:(id)arg1 rejected:(id)arg2 context:(id)arg3 ;
-(void)feedbackLaunchedWithConsumerType:(NSUInteger)arg0 forBundleId:(id)arg1 rejected:(id)arg2 explicitlyRejected:(id)arg3 context:(id)arg4 ;
-(void)populateFeedbackForConsumerType:(NSUInteger)arg0 forBundleId:(id)arg1 withContext:(id)arg2 forFeedbackCategory:(NSInteger)arg3 ;
-(void)putFeedbackScoresForApps:(id)arg0 intoScores:(*CGFloat)arg1 confirms:(*CGFloat)arg2 rejects:(*CGFloat)arg3 ;
-(void)putNopScoresForApps:(id)arg0 into:(*CGFloat)arg1 atTime:(CGFloat)arg2 ;
-(void)removeFeedbackForBundle:(id)arg0 ;
-(void)removeFeedbackForBundles:(id)arg0 ;
-(void)resetData;


@end


#endif