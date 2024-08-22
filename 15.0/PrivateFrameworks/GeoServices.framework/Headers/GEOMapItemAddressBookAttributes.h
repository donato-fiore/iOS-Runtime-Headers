// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMADDRESSBOOKATTRIBUTES_H
#define GEOMAPITEMADDRESSBOOKATTRIBUTES_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressIdentifier;
    NSString *_name;
    NSString *_spokenName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _addressType;
    BOOL _isMe;
    ? _flags;
}


@property (retain, nonatomic) NSString *addressIdentifier;
@property (nonatomic) int addressType;
@property (readonly, nonatomic) BOOL hasAddressIdentifier;
@property (nonatomic) BOOL hasAddressType;
@property (nonatomic) BOOL hasIsMe;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasSpokenName;
@property (nonatomic) BOOL isMe;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *spokenName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAddressType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif