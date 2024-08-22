// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USUSAGEQUERYING_H
#define USUSAGEQUERYING_H

@class BMCoreDuetStream;
@protocol _CDUserContext;

#import <Foundation/Foundation.h>


@interface USUsageQuerying : NSObject

@property (readonly) NSObject<_CDUserContext> *context; // ivar: _context
@property (readonly) BMCoreDuetStream *duetStream; // ivar: _duetStream


+(id)getLocalDeviceIdentifierAndReturnError:(*id)arg0 ;
+(void)synchronizeUsageWithCompletionHandler:(id)arg0 ;
-(CGFloat)_computeUsageForApplications:(id)arg0 webDomains:(id)arg1 categories:(id)arg2 applicationUsageEvents:(id)arg3 webUsageEvents:(id)arg4 nowPlayingEvents:(id)arg5 videoUsageEvents:(id)arg6 categoryByBundleIdentifier:(id)arg7 categoryByWebDomain:(id)arg8 interval:(id)arg9 referenceDate:(id)arg10 focalOnly:(BOOL)arg11 ;
-(CGFloat)_generateUsageTimeWithApplicationUsageIntervals:(id)arg0 webUsageIntervalsByDevice:(id)arg1 categoryUsageIntervalsByDevice:(id)arg2 aggregatedApplicationUsageIntervalsByDevice:(id)arg3 aggregatedWebUsageIntervalsByDevice:(id)arg4 categoryByBundleIdentifier:(id)arg5 categoryByWebDomain:(id)arg6 applications:(id)arg7 webDomains:(id)arg8 categories:(id)arg9 ;
-(id)_computeApplicationUsageWithEvents:(id)arg0 unboundApplicationUsageIntervalsByDevice:(*id)arg1 timeZoneByDevice:(id)arg2 lastEventDateByDevice:(id)arg3 categoryUsageIntervalsByDevice:(id)arg4 aggregatedApplicationUsageIntervalsByDevice:(id)arg5 categoryByBundleIdentifier:(id)arg6 partition:(id)arg7 referenceDate:(id)arg8 focalOnly:(BOOL)arg9 ;
-(id)_computeNotificationsWithEvents:(id)arg0 timeZoneByDevice:(id)arg1 lastEventDateByDevice:(id)arg2 partition:(id)arg3 ;
-(id)_computeScreenTime:(BOOL)arg0 withEvents:(id)arg1 intersectingScreenTimeIntervalsByDevice:(*id)arg2 longestSessionByDevice:(*id)arg3 timeZoneByDevice:(id)arg4 lastEventDateByDevice:(id)arg5 partition:(id)arg6 referenceDate:(id)arg7 ;
-(id)_computeWebUsageWithEvents:(id)arg0 timeZoneByDevice:(id)arg1 lastEventDateByDevice:(id)arg2 categoryUsageIntervalsByDevice:(id)arg3 aggregatedApplicationUsageIntervalsByDevice:(id)arg4 aggregatedWebUsageIntervalsByDevice:(id)arg5 categoryByWebDomain:(id)arg6 partition:(id)arg7 referenceDate:(id)arg8 focalOnly:(BOOL)arg9 ;
-(id)_currentNowPlayingUsageIntervalsDuringInterval:(id)arg0 referenceDate:(id)arg1 ;
-(id)_currentScreenTimeIntervalDuringInterval:(id)arg0 usageStartDate:(*id)arg1 referenceDate:(id)arg2 ;
-(id)_generatePickupsByBundleIdentifierWithPickupIntervals:(id)arg0 applicationUsageIntervals:(id)arg1 pickupsWithoutApplicationUsage:(*NSUInteger)arg2 firstPickup:(*id)arg3 ;
-(id)_generateUncategorizedLocalWebUsageWithWebUsageIntervals:(id)arg0 uncategorizedDomains:(id)arg1 ;
-(id)_getBundleIdentiersFromApplicationUsageEvents:(id)arg0 videoUsageEvents:(id)arg1 interval:(id)arg2 referenceDate:(id)arg3 focalOnly:(BOOL)arg4 ;
-(id)_getWebDomainsFromWebUsageEvents:(id)arg0 videoUsageEvents:(id)arg1 interval:(id)arg2 referenceDate:(id)arg3 focalOnly:(BOOL)arg4 ;
-(id)_newReportWithNonIntersectingScreenTimeIntervals:(id)arg0 pickupsByBundleIdentifier:(id)arg1 pickupsWithoutApplicationUsage:(NSUInteger)arg2 firstPickup:(id)arg3 longestSession:(id)arg4 applicationUsageIntervals:(id)arg5 webUsageIntervals:(id)arg6 categoryUsageIntervals:(id)arg7 aggregatedApplicationUsageIntervals:(id)arg8 aggregatedWebUsageIntervals:(id)arg9 categoryByBundleIdentifier:(id)arg10 categoryByWebDomain:(id)arg11 notifications:(id)arg12 interval:(id)arg13 timeZone:(id)arg14 lastEventDate:(id)arg15 ;
-(id)init;
-(id)initWithContext:(id)arg0 coreDuetStream:(id)arg1 ;
-(id)initWithContext:(id)arg0 eventStorage:(id)arg1 ;
-(id)queryForApplications:(id)arg0 webDomains:(id)arg1 categories:(id)arg2 interval:(id)arg3 error:(*id)arg4 ;
-(id)queryForApplications:(id)arg0 webDomains:(id)arg1 categories:(id)arg2 interval:(id)arg3 focalOnly:(BOOL)arg4 error:(*id)arg5 ;
-(id)queryForApplications:(id)arg0 webDomains:(id)arg1 categories:(id)arg2 interval:(id)arg3 segmentInterval:(CGFloat)arg4 error:(*id)arg5 ;
-(void)_computeNowPlayingUsageWithEvents:(id)arg0 categoryUsageIntervalsByDevice:(id)arg1 timeZoneByDevice:(id)arg2 lastEventDateByDevice:(id)arg3 partition:(id)arg4 referenceDate:(id)arg5 ;
-(void)_computeUncategorizedLocalWebUsageWithWebUsageEvents:(id)arg0 uncategorizedDomains:(id)arg1 interval:(id)arg2 referenceDate:(id)arg3 completionHandler:(id)arg4 ;
-(void)_computeUsageWithDisplayBacklitEvents:(id)arg0 applicationUsageEvents:(id)arg1 webUsageEvents:(id)arg2 nowPlayingEvents:(id)arg3 videoUsageEvents:(id)arg4 notificationEvents:(id)arg5 categoryByBundleIdentifier:(id)arg6 categoryByWebDomain:(id)arg7 interval:(id)arg8 partitionInterval:(CGFloat)arg9 referenceDate:(id)arg10 focalOnly:(BOOL)arg11 completionHandler:(id)arg12 ;
-(void)_enumerateCurrentApplicationUsageIntervalsDuringInterval:(id)arg0 referenceDate:(id)arg1 focalOnly:(BOOL)arg2 block:(id)arg3 ;
-(void)_enumerateCurrentVideoUsageIntervalsDuringInterval:(id)arg0 referenceDate:(id)arg1 block:(id)arg2 ;
-(void)_enumerateCurrentWebUsageIntervalsDuringInterval:(id)arg0 referenceDate:(id)arg1 focalOnly:(BOOL)arg2 block:(id)arg3 ;
-(void)_enumerateEvents:(id)arg0 intervalEndDate:(id)arg1 block:(id)arg2 ;
-(void)_updateApplicationUsageWithInterval:(id)arg0 unboundInterval:(id)arg1 bundleIdentifier:(id)arg2 trustedApplicationUsage:(BOOL)arg3 deviceIdentifier:(id)arg4 event:(id)arg5 applicationUsageIntervalsByDevice:(id)arg6 unboundApplicationUsageIntervalsByDevice:(id)arg7 categoryUsageIntervalsByDevice:(id)arg8 aggregatedApplicationUsageIntervalsByDevice:(id)arg9 categoryByBundleIdentifier:(id)arg10 timeZoneByDevice:(id)arg11 lastEventDateByDevice:(id)arg12 ;
-(void)_updateLocalReports:(id)arg0 remoteReports:(id)arg1 aggregateReports:(id)arg2 nonIntersectingScreenTimeIntervals:(id)arg3 intersectingScreenTimeIntervals:(id)arg4 longestSessionByDevice:(id)arg5 applicationUsageIntervals:(id)arg6 unboundApplicationUsageIntervals:(id)arg7 webUsageIntervalsByDevice:(id)arg8 categoryUsageIntervalsByDevice:(id)arg9 aggregatedApplicationUsageIntervalsByDevice:(id)arg10 aggregatedWebUsageIntervalsByDevice:(id)arg11 categoryByBundleIdentifier:(id)arg12 categoryByWebDomain:(id)arg13 notificationsByDevice:(id)arg14 interval:(id)arg15 timeZoneByDevice:(id)arg16 lastEventDateByDevice:(id)arg17 ;
-(void)_updateNotificationsWithEvent:(id)arg0 bundleIdentifier:(id)arg1 trustedNotification:(BOOL)arg2 deviceIdentifier:(id)arg3 notificationsByDevice:(id)arg4 timeZoneByDevice:(id)arg5 lastEventDateByDevice:(id)arg6 ;
-(void)_updateNowPlayingUsageWithInterval:(id)arg0 event:(id)arg1 deviceIdentifier:(id)arg2 categoryUsageIntervalsByDevice:(id)arg3 timeZoneByDevice:(id)arg4 lastEventDateByDevice:(id)arg5 ;
-(void)_updateScreenTimeWithInterval:(id)arg0 rawInterval:(id)arg1 deviceIdentifier:(id)arg2 partition:(id)arg3 event:(id)arg4 nonIntersectingScreenTimeIntervalsByDevice:(id)arg5 intersectingScreenTimeIntervalsByDevice:(id)arg6 longestSessionByDevice:(id)arg7 timeZoneByDevice:(id)arg8 lastEventDateByDevice:(id)arg9 ;
-(void)_updateWebUsageWithInterval:(id)arg0 webDomain:(id)arg1 trustedWebUsage:(BOOL)arg2 deviceIdentifier:(id)arg3 event:(id)arg4 webUsageIntervalsByDevice:(id)arg5 categoryUsageIntervalsByDevice:(id)arg6 aggregatedApplicationUsageIntervalsByDevice:(id)arg7 aggregatedWebUsageIntervalsByDevice:(id)arg8 categoryByWebDomain:(id)arg9 timeZoneByDevice:(id)arg10 lastEventDateByDevice:(id)arg11 ;
-(void)queryForUncategorizedLocalWebUsageDuringInterval:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryUsageDuringInterval:(id)arg0 partitionInterval:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)queryUsageDuringInterval:(id)arg0 partitionInterval:(CGFloat)arg1 focalOnly:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif