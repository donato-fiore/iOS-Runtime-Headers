// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERAUTILITIES_H
#define HFCAMERAUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFCameraUtilities : NSObject



+(BOOL)_shouldUseTwentyFourHourTime;
+(BOOL)eventSpansMultipleDays:(id)arg0 ;
+(BOOL)forceDisplayMultiCameraUpgradeBanner;
+(BOOL)forceDisplayOfDismissedCameraUpgradeBanner;
+(BOOL)forceDisplaySingleCameraUpgradeBanner;
+(BOOL)hasAcceptedCameraFeedbackEmployeeConsent;
+(BOOL)internalCameraFeedbackSupported;
+(BOOL)isDateToday:(id)arg0 ;
+(BOOL)isDateYesterday:(id)arg0 ;
+(BOOL)shouldCacheScrubberTimeScale;
+(BOOL)shouldDisableHeroFrameDownloads;
+(BOOL)shouldDisplayInternalUpgradeViews;
+(BOOL)shouldDisplayInternalViews;
+(BOOL)shouldPurgePosterFrameCache;
+(BOOL)shouldPurgeVideoFileCache;
+(CGFloat)cachedScrubberTimeScale;
+(CGFloat)durationOfRecordingAtURL:(id)arg0 ;
+(CGFloat)elapsedTimeSinceMidnightForEvent:(id)arg0 ;
+(id)attributedFullTimeStringFromDate:(id)arg0 ;
+(id)attributedShortTimeStringFromDate:(id)arg0 ;
+(id)attributedStringFromDateString:(id)arg0 ;
+(id)attributedStringFromTwentyFourHourDateString:(id)arg0 ;
+(id)cameraFeedbackQueryString;
+(id)dayStringFromDate:(id)arg0 ;
+(id)destinationURLForTimelapseVideoFromCameraClip:(id)arg0 ;
+(id)liveStringFromDate:(id)arg0 ;
+(id)localizerKeyDayNameFromDate:(id)arg0 ;
+(id)percentageOfDurationUntilNextDayForEvent:(id)arg0 ;
+(id)twelveHourTimeStringFromDate:(id)arg0 ;
+(id)twentyFourHourLiveStringFromDate:(id)arg0 ;
+(id)twentyFourHourTimeStringFromDate:(id)arg0 ;
+(void)acceptEmployeeCameraFeedbackConsent;
+(void)cacheScrubberTimeScale:(CGFloat)arg0 ;
+(void)toggleDisplayOfInternalUpgradeViews:(BOOL)arg0 ;


@end


#endif