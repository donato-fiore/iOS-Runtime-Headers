// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSIGNIFICANTLOCATION_H
#define GEOSIGNIFICANTLOCATION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOStructuredAddress.h"
#import "GEOLocation.h"

@interface GEOSignificantLocation : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOStructuredAddress *_address;
    CGFloat _confidence;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    ? _flags;
}


@property (retain, nonatomic) GEOStructuredAddress *address;
@property (nonatomic) CGFloat confidence;
@property (readonly, nonatomic) BOOL hasAddress;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLocationIndex;
@property (nonatomic) BOOL hasNumberOfVisitsBucket;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) unsigned int locationIndex;
@property (nonatomic) unsigned int numberOfVisitsBucket;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif