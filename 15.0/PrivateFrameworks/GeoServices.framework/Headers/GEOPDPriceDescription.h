// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDPRICEDESCRIPTION_H
#define GEOPDPRICEDESCRIPTION_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPDPriceDescription : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_priceDescription;
}




+(id)priceDescriptionForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif