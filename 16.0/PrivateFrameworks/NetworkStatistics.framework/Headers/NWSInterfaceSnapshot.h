// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWSINTERFACESNAPSHOT_H
#define NWSINTERFACESNAPSHOT_H

@class NSString;


#import "NWSSnapshot.h"

@interface NWSInterfaceSnapshot : NWSSnapshot {
    NSString *_interfaceName;
    NSString *_interfaceDescription;
    nstat_ifnet_descriptor _descriptor;
}


@property NSUInteger cellConfigBackoffTime; // ivar: _cellConfigBackoffTime
@property NSUInteger cellConfigInactivityTime; // ivar: _cellConfigInactivityTime
@property NSUInteger cellUlAvgQueueSize; // ivar: _cellUlAvgQueueSize
@property NSUInteger cellUlMaxQueueSize; // ivar: _cellUlMaxQueueSize
@property NSUInteger cellUlMinQueueSize; // ivar: _cellUlMinQueueSize
@property NSUInteger dlEffectiveBandwidth; // ivar: _dlEffectiveBandwidth
@property NSUInteger dlMaxBandwidth; // ivar: _dlMaxBandwidth
@property (readonly) NSString *interfaceDescription;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) NSString *interfaceName;
@property (readonly) unsigned int interfaceType;
@property NSUInteger linkQualityMetric; // ivar: _linkQualityMetric
@property (readonly) NSUInteger threshold;
@property NSUInteger ulBytesLost; // ivar: _ulBytesLost
@property NSUInteger ulEffectiveBandwidth; // ivar: _ulEffectiveBandwidth
@property NSUInteger ulEffectiveLatency; // ivar: _ulEffectiveLatency
@property NSUInteger ulMaxBandwidth; // ivar: _ulMaxBandwidth
@property NSUInteger ulMaxLatency; // ivar: _ulMaxLatency
@property NSUInteger ulMinLatency; // ivar: _ulMinLatency
@property NSUInteger ulReTxtLevel; // ivar: _ulReTxtLevel
@property NSUInteger wifiConfigFrequency; // ivar: _wifiConfigFrequency
@property NSUInteger wifiConfigMulticastRate; // ivar: _wifiConfigMulticastRate
@property NSUInteger wifiDlEffectiveLatency; // ivar: _wifiDlEffectiveLatency
@property NSUInteger wifiDlErrorRate; // ivar: _wifiDlErrorRate
@property NSUInteger wifiDlMaxLatency; // ivar: _wifiDlMaxLatency
@property NSUInteger wifiDlMinLatency; // ivar: _wifiDlMinLatency
@property NSUInteger wifiScanCount; // ivar: _wifiScanCount
@property NSUInteger wifiScanDuration; // ivar: _wifiScanDuration
@property NSUInteger wifiUlErrorRate; // ivar: _wifiUlErrorRate


-(id)description;
-(id)initWithCounts:(struct nstat_counts *)arg0 interfaceDescriptor:(struct nstat_ifnet_descriptor *)arg1 sourceIdent:(NSUInteger)arg2 seqno:(NSUInteger)arg3 ;
-(id)provider;
-(id)traditionalDictionary;
-(void)_handleCellExtra:(struct nstat_ifnet_desc_cellular_status *)arg0 ;
-(void)_handleDescriptor:(struct nstat_ifnet_descriptor *)arg0 ;
-(void)_handleWifiExtra:(struct nstat_ifnet_desc_wifi_status *)arg0 ;
-(void)_invalidateAllExtraCounts;
-(void)_invalidateCellCounts;
-(void)_invalidateCommonCounts;
-(void)_invalidateWifiCounts;


@end


#endif