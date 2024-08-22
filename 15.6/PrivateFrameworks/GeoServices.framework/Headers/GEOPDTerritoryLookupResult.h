// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDTERRITORYLOOKUPRESULT_H
#define GEOPDTERRITORYLOOKUPRESULT_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDTerritoryLookupResult : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
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