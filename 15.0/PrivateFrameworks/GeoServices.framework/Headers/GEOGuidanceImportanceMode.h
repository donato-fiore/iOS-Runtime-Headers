// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOGUIDANCEIMPORTANCEMODE_H
#define GEOGUIDANCEIMPORTANCEMODE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOGuidanceImportanceMode : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _guidancePreferenceTypes;
}


@property (readonly, nonatomic) *int guidancePreferenceTypes;
@property (readonly, nonatomic) NSUInteger guidancePreferenceTypesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)guidancePreferenceTypesAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsGuidancePreferenceTypes:(id)arg0 ;
-(int)guidancePreferenceTypeAtIndex:(NSUInteger)arg0 ;
-(void)addGuidancePreferenceType:(int)arg0 ;
-(void)clearGuidancePreferenceTypes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif