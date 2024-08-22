// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPLTECELLTOWERLOCATION_H
#define CLPLTECELLTOWERLOCATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "CLPLocation.h"
#import "CLPCellNeighborsGroup.h"

@interface CLPLteCellTowerLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) int bandInfo; // ivar: _bandInfo
@property (nonatomic) int bandwidth; // ivar: _bandwidth
@property (nonatomic) CGFloat cellLatitude; // ivar: _cellLatitude
@property (nonatomic) CGFloat cellLongitude; // ivar: _cellLongitude
@property (nonatomic) int ci; // ivar: _ci
@property (nonatomic) unsigned int deploymentType; // ivar: _deploymentType
@property (nonatomic) unsigned int downlinkBandwidth; // ivar: _downlinkBandwidth
@property (nonatomic) int ecn0; // ivar: _ecn0
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasBandInfo;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) BOOL hasCellLatitude;
@property (nonatomic) BOOL hasCellLongitude;
@property (nonatomic) BOOL hasDeploymentType;
@property (nonatomic) BOOL hasDownlinkBandwidth;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasIsLimitedService;
@property (nonatomic) BOOL hasIsStalled;
@property (nonatomic) BOOL hasLatency;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasServerHash;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) BOOL isLimitedService; // ivar: _isLimitedService
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (nonatomic) unsigned int latency; // ivar: _latency
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (nonatomic) int mcc; // ivar: _mcc
@property (nonatomic) int mnc; // ivar: _mnc
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // ivar: _neighborGroup
@property (retain, nonatomic) NSMutableArray *neighbors; // ivar: _neighbors
@property (retain, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) int rscp; // ivar: _rscp
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) int serverHash; // ivar: _serverHash
@property (retain, nonatomic) NSString *serviceProviderName; // ivar: _serviceProviderName
@property (nonatomic) int tac; // ivar: _tac
@property (nonatomic) int uarfcn; // ivar: _uarfcn


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