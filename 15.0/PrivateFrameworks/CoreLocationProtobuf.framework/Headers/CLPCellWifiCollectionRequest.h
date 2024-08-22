// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPCELLWIFICOLLECTIONREQUEST_H
#define CLPCELLWIFICOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CLPMeta.h"

@interface CLPCellWifiCollectionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *cdmaCellTowerLocations; // ivar: _cdmaCellTowerLocations
@property (retain, nonatomic) NSMutableArray *cellOutOfServiceInfos; // ivar: _cellOutOfServiceInfos
@property (retain, nonatomic) NSMutableArray *cellTowerLocations; // ivar: _cellTowerLocations
@property (retain, nonatomic) NSMutableArray *lteCellTowerLocations; // ivar: _lteCellTowerLocations
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (retain, nonatomic) NSMutableArray *nrCellTowerLocations; // ivar: _nrCellTowerLocations
@property (retain, nonatomic) NSMutableArray *scdmaCellTowerLocations; // ivar: _scdmaCellTowerLocations
@property (retain, nonatomic) NSMutableArray *wifiAPLocations; // ivar: _wifiAPLocations


+(Class)cdmaCellTowerLocationType;
+(Class)cellOutOfServiceInfoType;
+(Class)cellTowerLocationType;
+(Class)lteCellTowerLocationType;
+(Class)nrCellTowerLocationType;
+(Class)scdmaCellTowerLocationType;
+(Class)wifiAPLocationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)cdmaCellTowerLocationAtIndex:(NSUInteger)arg0 ;
-(id)cellOutOfServiceInfoAtIndex:(NSUInteger)arg0 ;
-(id)cellTowerLocationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)lteCellTowerLocationAtIndex:(NSUInteger)arg0 ;
-(id)nrCellTowerLocationAtIndex:(NSUInteger)arg0 ;
-(id)scdmaCellTowerLocationAtIndex:(NSUInteger)arg0 ;
-(id)wifiAPLocationAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addCdmaCellTowerLocation:(id)arg0 ;
-(void)addCellOutOfServiceInfo:(id)arg0 ;
-(void)addCellTowerLocation:(id)arg0 ;
-(void)addLteCellTowerLocation:(id)arg0 ;
-(void)addNrCellTowerLocation:(id)arg0 ;
-(void)addScdmaCellTowerLocation:(id)arg0 ;
-(void)addWifiAPLocation:(id)arg0 ;
-(void)clearCdmaCellTowerLocations;
-(void)clearCellOutOfServiceInfos;
-(void)clearCellTowerLocations;
-(void)clearLteCellTowerLocations;
-(void)clearNrCellTowerLocations;
-(void)clearWifiAPLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif