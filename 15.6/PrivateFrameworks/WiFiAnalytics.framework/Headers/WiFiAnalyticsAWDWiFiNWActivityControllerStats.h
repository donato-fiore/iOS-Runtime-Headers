// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYCONTROLLERSTATS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYCONTROLLERSTATS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics.h"
#import "WiFiAnalyticsAWDWiFiNWActivityBtCoex.h"
#import "WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions.h"
#import "WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation.h"
#import "WiFiAnalyticsAWDWiFiNWActivityPowerPStats.h"
#import "WiFiAnalyticsAWDWiFiNWActivityScanActivity.h"

@interface WiFiAnalyticsAWDWiFiNWActivityControllerStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *aggregateMetrics; // ivar: _aggregateMetrics
@property (nonatomic) unsigned int backoffStuck; // ivar: _backoffStuck
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityBtCoex *btCoex; // ivar: _btCoex
@property (nonatomic) unsigned int ccCaptureDriverLogs; // ivar: _ccCaptureDriverLogs
@property (nonatomic) unsigned int channel; // ivar: _channel
@property (nonatomic) unsigned int channelBandwidth; // ivar: _channelBandwidth
@property (nonatomic) unsigned int channelsVisited0; // ivar: _channelsVisited0
@property (nonatomic) unsigned int channelsVisited1; // ivar: _channelsVisited1
@property (nonatomic) unsigned int commanderHalted; // ivar: _commanderHalted
@property (nonatomic) NSUInteger commandsIssued; // ivar: _commandsIssued
@property (nonatomic) unsigned int controllerResets; // ivar: _controllerResets
@property (readonly, nonatomic) BOOL hasAggregateMetrics;
@property (nonatomic) BOOL hasBackoffStuck;
@property (readonly, nonatomic) BOOL hasBtCoex;
@property (nonatomic) BOOL hasCcCaptureDriverLogs;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasChannelBandwidth;
@property (nonatomic) BOOL hasChannelsVisited0;
@property (nonatomic) BOOL hasChannelsVisited1;
@property (nonatomic) BOOL hasCommanderHalted;
@property (nonatomic) BOOL hasCommandsIssued;
@property (nonatomic) BOOL hasControllerResets;
@property (readonly, nonatomic) BOOL hasImpedingFunctions;
@property (nonatomic) BOOL hasIorSuccess;
@property (nonatomic) BOOL hasIorWA;
@property (readonly, nonatomic) BOOL hasPhyrate;
@property (readonly, nonatomic) BOOL hasPowerActivity;
@property (readonly, nonatomic) BOOL hasScanActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *impedingFunctions; // ivar: _impedingFunctions
@property (nonatomic) unsigned int iorSuccess; // ivar: _iorSuccess
@property (nonatomic) unsigned int iorWA; // ivar: _iorWA
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *phyrate; // ivar: _phyrate
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityPowerPStats *powerActivity; // ivar: _powerActivity
@property (retain, nonatomic) NSMutableArray *rxmdpuLosts; // ivar: _rxmdpuLosts
@property (retain, nonatomic) NSMutableArray *rxmpduWMEs; // ivar: _rxmpduWMEs
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityScanActivity *scanActivity; // ivar: _scanActivity
@property (retain, nonatomic) NSMutableArray *txmpduWMEs; // ivar: _txmpduWMEs


+(Class)rxmdpuLostType;
+(Class)rxmpduWMEType;
+(Class)txmpduWMEType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rxmdpuLostAtIndex:(NSUInteger)arg0 ;
-(id)rxmpduWMEAtIndex:(NSUInteger)arg0 ;
-(id)txmpduWMEAtIndex:(NSUInteger)arg0 ;
-(void)addRxmdpuLost:(id)arg0 ;
-(void)addRxmpduWME:(id)arg0 ;
-(void)addTxmpduWME:(id)arg0 ;
-(void)clearRxmdpuLosts;
-(void)clearRxmpduWMEs;
-(void)clearTxmpduWMEs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif