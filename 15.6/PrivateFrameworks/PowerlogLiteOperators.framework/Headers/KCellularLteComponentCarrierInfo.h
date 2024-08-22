// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KCELLULARLTECOMPONENTCARRIERINFO_H
#define KCELLULARLTECOMPONENTCARRIERINFO_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface KCellularLteComponentCarrierInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *carrierInfos; // ivar: _carrierInfos
@property (nonatomic) BOOL hasPccBandwidth;
@property (nonatomic) BOOL hasPccEarfcn;
@property (nonatomic) BOOL hasPccRfBand;
@property (nonatomic) BOOL hasScc0Bandwidth;
@property (nonatomic) BOOL hasScc0Earfcn;
@property (nonatomic) BOOL hasScc0RfBand;
@property (nonatomic) BOOL hasScc1Bandwidth;
@property (nonatomic) BOOL hasScc1Earfcn;
@property (nonatomic) BOOL hasScc1RfBand;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int pccBandwidth; // ivar: _pccBandwidth
@property (nonatomic) unsigned int pccEarfcn; // ivar: _pccEarfcn
@property (nonatomic) unsigned int pccRfBand; // ivar: _pccRfBand
@property (nonatomic) int scc0Bandwidth; // ivar: _scc0Bandwidth
@property (nonatomic) unsigned int scc0Earfcn; // ivar: _scc0Earfcn
@property (nonatomic) unsigned int scc0RfBand; // ivar: _scc0RfBand
@property (nonatomic) int scc1Bandwidth; // ivar: _scc1Bandwidth
@property (nonatomic) unsigned int scc1Earfcn; // ivar: _scc1Earfcn
@property (nonatomic) unsigned int scc1RfBand; // ivar: _scc1RfBand
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)carrierInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)carrierInfoAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pccBandwidthAsString:(int)arg0 ;
-(id)scc0BandwidthAsString:(int)arg0 ;
-(id)scc1BandwidthAsString:(int)arg0 ;
-(int)StringAsPccBandwidth:(id)arg0 ;
-(int)StringAsScc0Bandwidth:(id)arg0 ;
-(int)StringAsScc1Bandwidth:(id)arg0 ;
-(void)addCarrierInfo:(id)arg0 ;
-(void)clearCarrierInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif