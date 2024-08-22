// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPNRCELLTOWERLOCATION_H
#define CLPNRCELLTOWERLOCATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "CLPLocation.h"
#import "CLPCellNeighborsGroup.h"

@interface CLPNRCellTowerLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) int bandInfo; // ivar: _bandInfo
@property (nonatomic) int bandwidth; // ivar: _bandwidth
@property (nonatomic) unsigned int bwpSupport; // ivar: _bwpSupport
@property (nonatomic) CGFloat cellLatitude; // ivar: _cellLatitude
@property (nonatomic) CGFloat cellLongitude; // ivar: _cellLongitude
@property (nonatomic) NSInteger ci; // ivar: _ci
@property (nonatomic) unsigned int downlinkBandwidth; // ivar: _downlinkBandwidth
@property (nonatomic) int ecn0; // ivar: _ecn0
@property (nonatomic) unsigned int gscn; // ivar: _gscn
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasBandInfo;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) BOOL hasBwpSupport;
@property (nonatomic) BOOL hasCellLatitude;
@property (nonatomic) BOOL hasCellLongitude;
@property (nonatomic) BOOL hasCi;
@property (nonatomic) BOOL hasDownlinkBandwidth;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasGscn;
@property (nonatomic) BOOL hasIsLimitedService;
@property (nonatomic) BOOL hasIsStalled;
@property (nonatomic) BOOL hasLatency;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMaxThroughput;
@property (nonatomic) BOOL hasMcc;
@property (nonatomic) BOOL hasMnc;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (nonatomic) BOOL hasNrarfcn;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) BOOL hasPmax;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasScs;
@property (nonatomic) BOOL hasServerHash;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (nonatomic) BOOL hasTac;
@property (nonatomic) BOOL isLimitedService; // ivar: _isLimitedService
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (nonatomic) unsigned int latency; // ivar: _latency
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (nonatomic) unsigned int maxThroughput; // ivar: _maxThroughput
@property (nonatomic) int mcc; // ivar: _mcc
@property (nonatomic) int mnc; // ivar: _mnc
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // ivar: _neighborGroup
@property (retain, nonatomic) NSMutableArray *neighbors; // ivar: _neighbors
@property (nonatomic) int nrarfcn; // ivar: _nrarfcn
@property (retain, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) unsigned int pmax; // ivar: _pmax
@property (nonatomic) int rscp; // ivar: _rscp
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) unsigned int scs; // ivar: _scs
@property (nonatomic) int serverHash; // ivar: _serverHash
@property (retain, nonatomic) NSString *serviceProviderName; // ivar: _serviceProviderName
@property (nonatomic) int tac; // ivar: _tac


+(Class)neighborType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)neighborAtIndex:(NSUInteger)arg0 ;
-(void)addNeighbor:(id)arg0 ;
-(void)clearNeighbors;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif