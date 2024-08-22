// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDISO3166CODEFILTER_H
#define GEOPDISO3166CODEFILTER_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDISO3166CodeFilter : PBCodable <NSCopying>

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