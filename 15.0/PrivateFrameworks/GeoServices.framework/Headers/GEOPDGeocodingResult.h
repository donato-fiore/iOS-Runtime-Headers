// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDGEOCODINGRESULT_H
#define GEOPDGEOCODINGRESULT_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOPDGeocodingResult : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
}




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