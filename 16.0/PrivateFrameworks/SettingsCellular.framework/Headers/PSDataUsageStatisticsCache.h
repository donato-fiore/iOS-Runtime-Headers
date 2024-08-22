// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSDATAUSAGESTATISTICSCACHE_H
#define PSDATAUSAGESTATISTICSCACHE_H

@class CTDeviceDataUsage, CoreTelephonyClient, NSDictionary;

#import <Foundation/Foundation.h>


@interface PSDataUsageStatisticsCache : NSObject {
    *__CTServerConnection _serverConnection;
}


@property BOOL cacheNeedsRefresh; // ivar: _cacheNeedsRefresh
@property (retain) CTDeviceDataUsage *cachedDeviceDataUsage; // ivar: _cachedDeviceDataUsage
@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (retain) NSDictionary *hotspotClientsUsage; // ivar: _hotspotClientsUsage
@property (copy) id *refreshCompletionHandler; // ivar: _refreshCompletionHandler
@property BOOL refreshInProgress; // ivar: _refreshInProgress
@property (retain) NSDictionary *workspaceInfoDict; // ivar: _workspaceInfoDict


+(id)sharedInstance;
-(BOOL)billingCycleSupported;
-(BOOL)useCalendarMonthBillingCycle;
-(NSUInteger)totalCellularUsageForPeriod:(NSUInteger)arg0 ;
-(NSUInteger)totalHotspotClientUsageForPeriod:(NSUInteger)arg0 ;
-(NSUInteger)totalRoamingUsageForPeriod:(NSUInteger)arg0 ;
-(NSUInteger)usageForHotspotClientID:(id)arg0 inPeriod:(NSUInteger)arg1 ;
-(id)appBundleIDs;
-(id)billingCycleEndDate;
-(id)displayNameForAppBundleID:(id)arg0 ;
-(id)displayNameForHotspotClientID:(id)arg0 ;
-(id)displayNameForSystemServiceBundleID:(id)arg0 ;
-(id)displayNameForUninstalledAppBundleID:(id)arg0 ;
-(id)displayNameForWatchOnlyAppBundleID:(id)arg0 ;
-(id)getLogger;
-(id)hotspotClientIDsForPeriod:(NSUInteger)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)previousBillingCycleEndDate;
-(id)systemServiceBundleIDsForPeriod:(NSUInteger)arg0 ;
-(id)totalAppUsageForPeriod:(NSUInteger)arg0 ;
-(id)totalSystemServicesUsageForPeriod:(NSUInteger)arg0 ;
-(id)totalUninstalledAppUsageForPeriod:(NSUInteger)arg0 ;
-(id)totalWatchOnlyAppUsageForPeriod:(NSUInteger)arg0 ;
-(id)uninstalledAppBundleIDsForPeriod:(NSUInteger)arg0 ;
-(id)usageForBundleID:(id)arg0 inPeriod:(NSUInteger)arg1 ;
-(id)watchOnlyAppBundleIDsForPeriod:(NSUInteger)arg0 ;
-(id)wifiAssistUsageForPeriod:(NSUInteger)arg0 ;
-(void)_clearCache;
-(void)_handleUsageOrInfoChanged;
-(void)dealloc;
-(void)fetchDeviceDataUsage;
-(void)fetchDeviceDataUsageWithCompletion:(id)arg0 ;
-(void)fetchHotspotClientsUsage;
-(void)fetchWorkspaceInfo;
-(void)refreshCacheIfNeeded;
-(void)willEnterForeground;


@end


#endif