// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMSTORAGEUSERVALUES_H
#define GEOMAPITEMSTORAGEUSERVALUES_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSData;
@protocol NSCopying;



@interface GEOMapItemStorageUserValues : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSString *_phoneNumber;
    NSData *_timeZoneData;
    NSString *_timeZoneName;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (readonly, nonatomic) BOOL hasTimeZoneData;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSData *timeZoneData;
@property (retain, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *url;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif