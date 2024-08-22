// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDPHOTOFILTER_H
#define GEOPDPHOTOFILTER_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDPhotoFilter : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    *GEOPDPhotoSizeFilterValue _photoSizeFilters;
    NSUInteger _photoSizeFiltersCount;
    NSUInteger _photoSizeFiltersSpace;
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