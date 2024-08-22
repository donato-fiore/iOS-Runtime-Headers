// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPONENTCARRIERINFO_H
#define COMPONENTCARRIERINFO_H

@class PBCodable;
@protocol NSCopying;



@interface ComponentCarrierInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int dlBandwidth; // ivar: _dlBandwidth
@property (nonatomic) unsigned int dlEarfcn; // ivar: _dlEarfcn
@property (nonatomic) unsigned int dlRfBand; // ivar: _dlRfBand
@property (nonatomic) BOOL hasDlBandwidth;
@property (nonatomic) BOOL hasDlEarfcn;
@property (nonatomic) BOOL hasDlRfBand;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dlBandwidthAsString:(int)arg0 ;
-(int)StringAsDlBandwidth:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif