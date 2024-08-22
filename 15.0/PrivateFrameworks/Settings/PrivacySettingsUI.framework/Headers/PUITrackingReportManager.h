// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKINGREPORTMANAGER_H
#define PUITRACKINGREPORTMANAGER_H

@class NSDictionary, NSDate, UsageFeed, AnalyticsWorkspace;

#import <Foundation/Foundation.h>


@interface PUITrackingReportManager : NSObject

@property (retain, nonatomic) NSDictionary *appsToTrackers; // ivar: _appsToTrackers
@property (retain, nonatomic) NSDictionary *appsToTrackersInAppOnly; // ivar: _appsToTrackersInAppOnly
@property (retain, nonatomic) NSDictionary *appsToWebsitesToTrackers; // ivar: _appsToWebsitesToTrackers
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) UsageFeed *feed; // ivar: _feed
@property (retain, nonatomic) NSDictionary *trackersToApps; // ivar: _trackersToApps
@property (retain, nonatomic) NSDictionary *trackersToAppsInAppOnly; // ivar: _trackersToAppsInAppOnly
@property (retain, nonatomic) NSDictionary *trackersToWebsitesToTrackers; // ivar: _trackersToWebsitesToTrackers
@property (retain, nonatomic) AnalyticsWorkspace *workspace; // ivar: _workspace


-(BOOL)hadDataInLastQuery;
-(BOOL)shouldIncludeBundleID:(id)arg0 ;
-(BOOL)trackingReportEnabled;
-(NSInteger)highestNumberOfTrackerDataPerAppInAppOnly:(BOOL)arg0 ;
-(NSInteger)highestNumberOfTrackerDataPerTrackerInAppOnly:(BOOL)arg0 ;
-(id)allData;
-(id)appsIDsContactingTrackersInAppOnly:(BOOL)arg0 ;
-(id)appsToTrackersInAppOnlyFromAppsToTrackers:(id)arg0 ;
-(id)appsToTrackersWithoutHiddenApps:(id)arg0 ;
-(id)appsToWebsitesDictFromAppsToTrackersDict:(id)arg0 ;
-(id)enabledDate;
-(id)init;
-(id)trackerDataForAppID:(id)arg0 inAppOnly:(BOOL)arg1 ;
-(id)trackerDataForAppID:(id)arg0 websiteDomain:(id)arg1 ;
-(id)trackerDataForTrackerDomain:(id)arg0 inAppOnly:(BOOL)arg1 ;
-(id)trackerDataForTrackerDomain:(id)arg0 websiteDomain:(id)arg1 ;
-(id)trackerDomainsInAppOnly:(BOOL)arg0 ;
-(id)trackersToAppsDictFromAppsToTrackersDict:(id)arg0 ;
-(id)trackersToWebsitesDictFromAppsToTrackersDict:(id)arg0 ;
-(id)websiteDomainsForAppID:(id)arg0 ;
-(id)websiteDomainsForTrackerDomain:(id)arg0 ;
-(void)dataDidChange;
-(void)exportToStream:(id)arg0 error:(*id)arg1 ;
-(void)reloadDataWithCompletion:(id)arg0 ;
-(void)reloadEnabledWithCompletion:(id)arg0 ;
-(void)reloadWithCompletion:(id)arg0 ;
-(void)setTrackingReportEnabled:(BOOL)arg0 ;


@end


#endif