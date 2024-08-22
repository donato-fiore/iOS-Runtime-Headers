// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOADDRESSCORRECTIONINITRESPONSE_H
#define GEOADDRESSCORRECTIONINITRESPONSE_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    NSMutableArray *_address;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *address;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (nonatomic) int statusCode;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addAddress:(id)arg0 ;
-(void)clearAddress;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif