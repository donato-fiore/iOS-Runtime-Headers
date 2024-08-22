// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOBUSINESSOPTIONS_H
#define GEOBUSINESSOPTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOBusinessOptions : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    NSMutableArray *_photoOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _maxBusinessResults;
    BOOL _includeBusinessHours;
    BOOL _includeCenter;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *attributeKeys;
@property (nonatomic) BOOL hasIncludeBusinessHours;
@property (nonatomic) BOOL hasIncludeCenter;
@property (nonatomic) BOOL hasMaxBusinessResults;
@property (nonatomic) BOOL includeBusinessHours;
@property (nonatomic) BOOL includeCenter;
@property (nonatomic) int maxBusinessResults;
@property (retain, nonatomic) NSMutableArray *photoOptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)attributeKeyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeKeyAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)photoOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addAttributeKey:(id)arg0 ;
-(void)addPhotoOptions:(id)arg0 ;
-(void)clearAttributeKeys;
-(void)clearPhotoOptions;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif