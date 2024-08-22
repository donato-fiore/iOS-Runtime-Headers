// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDLIBNETCORECELLULARFALLBACKREPORT_H
#define NWAWDLIBNETCORECELLULARFALLBACKREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NWAWDLibnetcoreCellularFallbackReport : PBCodable <NSCopying>

 {
    ? _networkEvents;
    ? _timeToNetworkEventsMsecs;
    ? _has;
}


@property (nonatomic) int cellularBand; // ivar: _cellularBand
@property (nonatomic) int cellularRadioTechnology; // ivar: _cellularRadioTechnology
@property (retain, nonatomic) NSMutableArray *dataUsageSnapshotsAtNetworkEvents; // ivar: _dataUsageSnapshotsAtNetworkEvents
@property (nonatomic) int denyReason; // ivar: _denyReason
@property (nonatomic) NSUInteger fallbackTimerMsecs; // ivar: _fallbackTimerMsecs
@property (nonatomic) BOOL fellback; // ivar: _fellback
@property (nonatomic) BOOL hasCellularBand;
@property (nonatomic) BOOL hasCellularRadioTechnology;
@property (nonatomic) BOOL hasDenyReason;
@property (nonatomic) BOOL hasFallbackTimerMsecs;
@property (nonatomic) BOOL hasFellback;
@property (nonatomic) BOOL hasWifiRadioTechnology;
@property (readonly, nonatomic) *int networkEvents;
@property (readonly, nonatomic) NSUInteger networkEventsCount;
@property (retain, nonatomic) NSMutableArray *primaryInterfaceAttemptStatisticsReports; // ivar: _primaryInterfaceAttemptStatisticsReports
@property (readonly, nonatomic) *NSUInteger timeToNetworkEventsMsecs;
@property (readonly, nonatomic) NSUInteger timeToNetworkEventsMsecsCount;
@property (nonatomic) int wifiRadioTechnology; // ivar: _wifiRadioTechnology


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)timeToNetworkEventsMsecsAtIndex:(NSUInteger)arg0 ;
-(id)cellularBandAsString:(int)arg0 ;
-(id)cellularRadioTechnologyAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataUsageSnapshotsAtNetworkEventsAtIndex:(NSUInteger)arg0 ;
-(id)denyReasonAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkEventsAsString:(int)arg0 ;
-(id)primaryInterfaceAttemptStatisticsReportsAtIndex:(NSUInteger)arg0 ;
-(id)wifiRadioTechnologyAsString:(int)arg0 ;
-(int)StringAsCellularBand:(id)arg0 ;
-(int)StringAsCellularRadioTechnology:(id)arg0 ;
-(int)StringAsDenyReason:(id)arg0 ;
-(int)StringAsNetworkEvents:(id)arg0 ;
-(int)StringAsWifiRadioTechnology:(id)arg0 ;
-(int)networkEventsAtIndex:(NSUInteger)arg0 ;
-(void)addDataUsageSnapshotsAtNetworkEvents:(id)arg0 ;
-(void)addNetworkEvents:(int)arg0 ;
-(void)addPrimaryInterfaceAttemptStatisticsReports:(id)arg0 ;
-(void)addTimeToNetworkEventsMsecs:(NSUInteger)arg0 ;
-(void)clearDataUsageSnapshotsAtNetworkEvents;
-(void)clearNetworkEvents;
-(void)clearPrimaryInterfaceAttemptStatisticsReports;
-(void)clearTimeToNetworkEventsMsecs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif