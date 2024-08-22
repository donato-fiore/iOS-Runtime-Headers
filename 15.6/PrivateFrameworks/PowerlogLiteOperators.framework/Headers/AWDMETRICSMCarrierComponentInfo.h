// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDMETRICSMCARRIERCOMPONENTINFO_H
#define AWDMETRICSMCARRIERCOMPONENTINFO_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSMCarrierComponentInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int band; // ivar: _band
@property (nonatomic) unsigned int bandwidth; // ivar: _bandwidth
@property (nonatomic) int duplex; // ivar: _duplex
@property (nonatomic) unsigned int earfcn; // ivar: _earfcn
@property (nonatomic) BOOL hasBand;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) BOOL hasDuplex;
@property (nonatomic) BOOL hasEarfcn;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)duplexAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsDuplex:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif