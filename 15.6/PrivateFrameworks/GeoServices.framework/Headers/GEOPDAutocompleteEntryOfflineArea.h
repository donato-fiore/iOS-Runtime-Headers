// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDAUTOCOMPLETEENTRYOFFLINEAREA_H
#define GEOPDAUTOCOMPLETEENTRYOFFLINEAREA_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDAutocompleteEntryOfflineArea : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _featureId;
    BOOL _availableForDownload;
    ? _flags;
}


@property (nonatomic) BOOL availableForDownload;
@property (nonatomic) NSUInteger featureId;
@property (nonatomic) BOOL hasAvailableForDownload;
@property (nonatomic) BOOL hasFeatureId;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif