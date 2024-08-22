// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDACTIONDATAFILTER_H
#define GEOPDACTIONDATAFILTER_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDActionDataFilter : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _linkTypes;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif