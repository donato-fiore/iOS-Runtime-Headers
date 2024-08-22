// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANALYTICSREADER_H
#define ANALYTICSREADER_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "AnalyticsStoreMOHandler.h"

@interface AnalyticsReader : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *backgroundReadingMOC; // ivar: _backgroundReadingMOC
@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler; // ivar: _managedObjectHandler


-(BOOL)isHistoricallyBadLinkQualityNetwork:(id)arg0 ;
-(BOOL)isMovingNetwork:(id)arg0 ;
-(BOOL)isNetworkWithinRangeOfLocation:(id)arg0 range:(CGFloat)arg1 location:(id)arg2 count:(*NSUInteger)arg3 ;
-(BOOL)isOmnipresentNetwork:(id)arg0 ;
-(BOOL)parsedBeaconInfoIsStored:(id)arg0 ssid:(id)arg1 ;
-(NSInteger)autoLeaveRssiForBss:(id)arg0 ssid:(id)arg1 ;
-(NSInteger)rssiRoamTriggerForBSS:(id)arg0 ssid:(id)arg1 ;
-(NSUInteger)manualLeaveCountForBss:(id)arg0 ssid:(id)arg1 ;
-(id)_copyNetworkUsageDictionaryWithMOC:(id)arg0 moc:(id)arg1 ;
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
-(id)initWithAnalyticsStore:(id)arg0 ;
-(id)neighborChannelsForBSS:(id)arg0 ssid:(id)arg1 ;
-(id)neighborsForBSS:(id)arg0 ssid:(id)arg1 ;


@end


#endif