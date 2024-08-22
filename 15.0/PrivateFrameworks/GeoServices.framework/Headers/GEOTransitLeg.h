// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITLEG_H
#define GEOTRANSITLEG_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOTransitLeg : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _restrictedToSectionIndexs;
    int _sectionOptionIndex;
    ? _flags;
}


@property (nonatomic) BOOL hasSectionOptionIndex;
@property (readonly, nonatomic) *int restrictedToSectionIndexs;
@property (readonly, nonatomic) NSUInteger restrictedToSectionIndexsCount;
@property (nonatomic) int sectionOptionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)restrictedToSectionIndexAtIndex:(NSUInteger)arg0 ;
-(void)addRestrictedToSectionIndex:(int)arg0 ;
-(void)clearRestrictedToSectionIndexs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif