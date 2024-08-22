// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPCDMACELLTOWERLOCATION_H
#define CLPCDMACELLTOWERLOCATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "CLPLocation.h"
#import "CLPCellNeighborsGroup.h"

@interface CLPCdmaCellTowerLocation : PBCodable <NSCopying>

 {
    ? _derivedMccs;
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) int bandclass; // ivar: _bandclass
@property (nonatomic) CGFloat bsLatitude; // ivar: _bsLatitude
@property (nonatomic) CGFloat bsLongitude; // ivar: _bsLongitude
@property (nonatomic) int bsid; // ivar: _bsid
@property (nonatomic) int celltype; // ivar: _celltype
@property (nonatomic) int channel; // ivar: _channel
@property (nonatomic) int dayLightSavings; // ivar: _dayLightSavings
@property (readonly, nonatomic) *int derivedMccs;
@property (readonly, nonatomic) NSUInteger derivedMccsCount;
@property (nonatomic) int ecn0; // ivar: _ecn0
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasBandclass;
@property (nonatomic) BOOL hasBsLatitude;
@property (nonatomic) BOOL hasBsLongitude;
@property (nonatomic) BOOL hasCelltype;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasDayLightSavings;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasIsLimitedService;
@property (nonatomic) BOOL hasLtmOffset;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (nonatomic) BOOL hasPnoffset;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasSectorLatitude;
@property (nonatomic) BOOL hasSectorLongitude;
@property (readonly, nonatomic) BOOL hasSectorid;
@property (nonatomic) BOOL hasServerHash;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (nonatomic) BOOL hasZoneid;
@property (nonatomic) BOOL isLimitedService; // ivar: _isLimitedService
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (nonatomic) int ltmOffset; // ivar: _ltmOffset
@property (nonatomic) int mcc; // ivar: _mcc
@property (nonatomic) int mnc; // ivar: _mnc
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // ivar: _neighborGroup
@property (retain, nonatomic) NSMutableArray *neighbors; // ivar: _neighbors
@property (nonatomic) int nid; // ivar: _nid
@property (retain, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (nonatomic) int pnoffset; // ivar: _pnoffset
@property (nonatomic) int rat; // ivar: _rat
@property (nonatomic) int rscp; // ivar: _rscp
@property (nonatomic) CGFloat sectorLatitude; // ivar: _sectorLatitude
@property (nonatomic) CGFloat sectorLongitude; // ivar: _sectorLongitude
@property (retain, nonatomic) NSString *sectorid; // ivar: _sectorid
@property (nonatomic) int serverHash; // ivar: _serverHash
@property (retain, nonatomic) NSString *serviceProviderName; // ivar: _serviceProviderName
@property (nonatomic) int sid; // ivar: _sid
@property (nonatomic) int zoneid; // ivar: _zoneid


+(Class)neighborType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)neighborAtIndex:(NSUInteger)arg0 ;
-(int)derivedMccAtIndex:(NSUInteger)arg0 ;
-(void)addDerivedMcc:(int)arg0 ;
-(void)addNeighbor:(id)arg0 ;
-(void)clearDerivedMccs;
-(void)clearNeighbors;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif