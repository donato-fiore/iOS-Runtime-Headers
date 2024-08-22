// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDCATEGORY_H
#define GEOPDCATEGORY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDCategory : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_eventCategoryId;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _level;
    ? _flags;
}


@property (retain, nonatomic) NSString *eventCategoryId;
@property (readonly, nonatomic) BOOL hasEventCategoryId;
@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)hasCategoryNamesForPlaceData:(id)arg0 type:(unsigned int)arg1 ;
+(BOOL)isValid:(id)arg0 ;
+(Class)localizedNameType;
+(id)_allCategoriesForPlaceData:(id)arg0 type:(unsigned int)arg1 ;
+(id)categoryNamesForPlaceData:(id)arg0 type:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizedNameAtIndex:(NSUInteger)arg0 ;
-(void)addLocalizedName:(id)arg0 ;
-(void)clearLocalizedNames;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif