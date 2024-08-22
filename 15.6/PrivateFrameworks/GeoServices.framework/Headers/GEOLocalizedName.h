// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOCALIZEDNAME_H
#define GEOLOCALIZEDNAME_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOLocalizedName : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    NSString *_nameType;
    NSString *_name;
    NSString *_phoneticName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _nameRank;
    BOOL _isDefault;
    ? _flags;
}


@property (nonatomic) BOOL hasIsDefault;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNameRank;
@property (readonly, nonatomic) BOOL hasNameType;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int nameRank;
@property (retain, nonatomic) NSString *nameType;
@property (retain, nonatomic) NSString *phoneticName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
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
-(id)initWithPlaceDataLocalizedString:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif