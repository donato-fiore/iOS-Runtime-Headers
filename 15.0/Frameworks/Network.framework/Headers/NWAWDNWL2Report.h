// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDNWL2REPORT_H
#define NWAWDNWL2REPORT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NWAWDNWL2Report : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cellularBand; // ivar: _cellularBand
@property (nonatomic) int cellularBandInfo; // ivar: _cellularBandInfo
@property (nonatomic) int cellularBandwidth; // ivar: _cellularBandwidth
@property (nonatomic) int cellularBars; // ivar: _cellularBars
@property (retain, nonatomic) NSString *cellularCellType; // ivar: _cellularCellType
@property (nonatomic) int cellularDualSimStatus; // ivar: _cellularDualSimStatus
@property (nonatomic) BOOL cellularKnownGood; // ivar: _cellularKnownGood
@property (nonatomic) int cellularLqm; // ivar: _cellularLqm
@property (nonatomic) int cellularMcc; // ivar: _cellularMcc
@property (nonatomic) int cellularMnc; // ivar: _cellularMnc
@property (nonatomic) int cellularMode; // ivar: _cellularMode
@property (nonatomic) BOOL cellularOutranksWifi; // ivar: _cellularOutranksWifi
@property (nonatomic) int cellularPid; // ivar: _cellularPid
@property (nonatomic) int cellularPowerCostDownload; // ivar: _cellularPowerCostDownload
@property (nonatomic) int cellularPowerCostUpload; // ivar: _cellularPowerCostUpload
@property (nonatomic) int cellularRadioTechnology; // ivar: _cellularRadioTechnology
@property (nonatomic) int cellularSecondaryMcc; // ivar: _cellularSecondaryMcc
@property (nonatomic) int cellularSecondaryMnc; // ivar: _cellularSecondaryMnc
@property (nonatomic) int cellularTac; // ivar: _cellularTac
@property (nonatomic) int cellularUarfcn; // ivar: _cellularUarfcn
@property (nonatomic) BOOL hasCellularBand;
@property (nonatomic) BOOL hasCellularBandInfo;
@property (nonatomic) BOOL hasCellularBandwidth;
@property (nonatomic) BOOL hasCellularBars;
@property (readonly, nonatomic) BOOL hasCellularCellType;
@property (nonatomic) BOOL hasCellularDualSimStatus;
@property (nonatomic) BOOL hasCellularKnownGood;
@property (nonatomic) BOOL hasCellularLqm;
@property (nonatomic) BOOL hasCellularMcc;
@property (nonatomic) BOOL hasCellularMnc;
@property (nonatomic) BOOL hasCellularMode;
@property (nonatomic) BOOL hasCellularOutranksWifi;
@property (nonatomic) BOOL hasCellularPid;
@property (nonatomic) BOOL hasCellularPowerCostDownload;
@property (nonatomic) BOOL hasCellularPowerCostUpload;
@property (nonatomic) BOOL hasCellularRadioTechnology;
@property (nonatomic) BOOL hasCellularSecondaryMcc;
@property (nonatomic) BOOL hasCellularSecondaryMnc;
@property (nonatomic) BOOL hasCellularTac;
@property (nonatomic) BOOL hasCellularUarfcn;
@property (nonatomic) BOOL hasWifiKnownGood;
@property (nonatomic) BOOL hasWifiLqm;
@property (nonatomic) BOOL hasWifiRadioTechnology;
@property (nonatomic) BOOL hasWifiRssi;
@property (retain, nonatomic) NSMutableArray *queueStats; // ivar: _queueStats
@property (nonatomic) BOOL wifiKnownGood; // ivar: _wifiKnownGood
@property (nonatomic) int wifiLqm; // ivar: _wifiLqm
@property (nonatomic) int wifiRadioTechnology; // ivar: _wifiRadioTechnology
@property (nonatomic) int wifiRssi; // ivar: _wifiRssi


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cellularBandAsString:(int)arg0 ;
-(id)cellularDualSimStatusAsString:(int)arg0 ;
-(id)cellularModeAsString:(int)arg0 ;
-(id)cellularPowerCostDownloadAsString:(int)arg0 ;
-(id)cellularPowerCostUploadAsString:(int)arg0 ;
-(id)cellularRadioTechnologyAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)queueStatsAtIndex:(NSUInteger)arg0 ;
-(id)wifiRadioTechnologyAsString:(int)arg0 ;
-(int)StringAsCellularBand:(id)arg0 ;
-(int)StringAsCellularDualSimStatus:(id)arg0 ;
-(int)StringAsCellularMode:(id)arg0 ;
-(int)StringAsCellularPowerCostDownload:(id)arg0 ;
-(int)StringAsCellularPowerCostUpload:(id)arg0 ;
-(int)StringAsCellularRadioTechnology:(id)arg0 ;
-(int)StringAsWifiRadioTechnology:(id)arg0 ;
-(void)addQueueStats:(id)arg0 ;
-(void)clearQueueStats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif