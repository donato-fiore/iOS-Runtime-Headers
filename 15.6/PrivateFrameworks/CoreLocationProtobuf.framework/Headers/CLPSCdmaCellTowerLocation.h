// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPSCDMACELLTOWERLOCATION_H
#define CLPSCDMACELLTOWERLOCATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "CLPLocation.h"
#import "CLPCellNeighborsGroup.h"

@interface CLPSCdmaCellTowerLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) int arfcn; // ivar: _arfcn
@property (nonatomic) int ci; // ivar: _ci
@property (nonatomic) int ecn0; // ivar: _ecn0
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasArfcn;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasIsLimitedService;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (nonatomic) BOOL hasPsc;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasServerHash;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (nonatomic) BOOL hasTransmit;
@property (nonatomic) BOOL isLimitedService; // ivar: _isLimitedService
@property (nonatomic) int lac; // ivar: _lac
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (nonatomic) int mcc; // ivar: _mcc
@property (nonatomic) int mnc; // ivar: _mnc
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // ivar: _neighborGroup
@property (retain, nonatomic) NSMutableArray *neighbors; // ivar: _neighbors
@property (retain, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (nonatomic) int psc; // ivar: _psc
@property (nonatomic) int rat; // ivar: _rat
@property (nonatomic) int rscp; // ivar: _rscp
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) int serverHash; // ivar: _serverHash
@property (retain, nonatomic) NSString *serviceProviderName; // ivar: _serviceProviderName
@property (nonatomic) int transmit; // ivar: _transmit


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