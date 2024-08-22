// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPBTRANSITSHIELD_H
#define GEOPBTRANSITSHIELD_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOTransitShieldDataSource, NSCopying;



@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    NSString *_shieldText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _shieldEnumValue;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasShieldColor;
@property (nonatomic) BOOL hasShieldEnumValue;
@property (readonly, nonatomic) BOOL hasShieldText;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *shieldColor;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (nonatomic) unsigned int shieldEnumValue;
@property (readonly, nonatomic) NSString *shieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSInteger shieldType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
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