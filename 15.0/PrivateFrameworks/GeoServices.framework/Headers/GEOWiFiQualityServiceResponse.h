// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOWIFIQUALITYSERVICERESPONSE_H
#define GEOWIFIQUALITYSERVICERESPONSE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_locationResults;
    NSMutableArray *_networkResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _statusCode;
    ? _flags;
}


@property (nonatomic) BOOL hasStatusCode;
@property (retain, nonatomic) NSMutableArray *locationResults;
@property (retain, nonatomic) NSMutableArray *networkResults;
@property (nonatomic) int statusCode;


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
-(id)locationResultsAtIndex:(NSUInteger)arg0 ;
-(id)networkResultsAtIndex:(NSUInteger)arg0 ;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addLocationResults:(id)arg0 ;
-(void)addNetworkResults:(id)arg0 ;
-(void)clearLocationResults;
-(void)clearNetworkResults;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif