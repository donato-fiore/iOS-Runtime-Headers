// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WADEVICEANALYTICSCLIENT_H
#define WADEVICEANALYTICSCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AnalyticsStoreFileWriter.h"
#import "AnalyticsReader.h"
#import "AnalyticsStoreMOHandler.h"

@interface WADeviceAnalyticsClient : NSObject

@property (retain, nonatomic) AnalyticsStoreFileWriter *analyticsFileWriter; // ivar: _analyticsFileWriter
@property (retain, nonatomic) AnalyticsReader *analyticsReader; // ivar: _analyticsReader
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler; // ivar: _managedObjectHandler


-(BOOL)dumpDeploymentGraphJSONFileWithCompletion:(id)arg0 ;
-(BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id)arg0 ;
// -(BOOL)dumpDeviceAnalyticsToFileWithCompletion:(id)arg0 fetchLimit:(unk)arg1 maxAge:(NSUInteger)arg2  ;
// -(BOOL)dumpDeviceAnalyticsUsingBatchSizeToFileWithCompletion:(id)arg0 batchSize:(unk)arg1 maxAge:(NSUInteger)arg2  ;
-(BOOL)isHistoricallyBadLinkQualityNetwork:(id)arg0 ;
-(BOOL)isMovingNetwork:(id)arg0 ;
-(BOOL)isOmnipresentNetwork:(id)arg0 ;
-(BOOL)parsedBeaconInfoIsStored:(id)arg0 ssid:(id)arg1 ;
-(NSInteger)autoLeaveRssiForBSS:(id)arg0 ssid:(id)arg1 ;
-(NSInteger)rssiRoamTriggerForBSS:(id)arg0 ssid:(id)arg1 ;
-(NSUInteger)isNetworkWithinRangeOfLocation:(id)arg0 range:(CGFloat)arg1 location:(id)arg2 ;
-(NSUInteger)manualLeaveCountForBss:(id)arg0 ssid:(id)arg1 ;
-(id)copyAllStoredNetworkSsids;
-(id)copyAllStoredNetworkSsidsWithColocatedScopeId:(id)arg0 ;
-(id)copyAllStoredNetworkSsidsWithTrait:(NSUInteger)arg0 ;
-(id)copyColocatedScopeIdForSsid:(id)arg0 ;
-(id)copyColocatedScopeTransitionInfo:(id)arg0 bssid:(id)arg1 minRssi:(int)arg2 maxRssi:(int)arg3 band:(unsigned int)arg4 ;
-(id)copyGeoTagsForNetwork:(id)arg0 location:(id)arg1 ;
-(id)copyLocationsForNetwork:(id)arg0 ;
-(id)copyNetworkUsageDictionary:(id)arg0 ;
-(id)copyNetworksAvailableAtLocationWithinDistanceInBand:(id)arg0 distance:(CGFloat)arg1 band:(unsigned int)arg2 ;
-(id)copyNetworksUsageDictionaryForMostUsedNetworks:(NSUInteger)arg0 ascending:(BOOL)arg1 ;
-(id)copyPreferenceScoreDictionaryForNetwork:(id)arg0 ;
-(id)copyScoreSortedNetworksAvailableAtLocationWithinDistance:(id)arg0 distance:(CGFloat)arg1 authComparator:(id)arg2 ;
-(id)init;
-(id)neighborChannelsForBSS:(id)arg0 ssid:(id)arg1 ;
-(id)neighborsForBSS:(id)arg0 ssid:(id)arg1 ;
-(void)dealloc;


@end


#endif