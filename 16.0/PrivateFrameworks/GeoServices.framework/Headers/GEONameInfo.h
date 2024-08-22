// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAMEINFO_H
#define GEONAMEINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEONameInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _phoneticType;
    int _shieldType;
    int _signType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (nonatomic) BOOL hasPhoneticType;
@property (readonly, nonatomic) BOOL hasShield;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) BOOL hasSignType;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *phoneticName;
@property (nonatomic) int phoneticType;
@property (retain, nonatomic) NSString *shield;
@property (nonatomic) int shieldType;
@property (nonatomic) int signType;
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
-(id)jsonRepresentation;
-(id)phoneticTypeAsString:(int)arg0 ;
-(id)signTypeAsString:(int)arg0 ;
-(int)StringAsPhoneticType:(id)arg0 ;
-(int)StringAsSignType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif