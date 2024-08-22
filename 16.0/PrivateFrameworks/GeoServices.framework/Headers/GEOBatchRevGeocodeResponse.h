// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBATCHREVGEOCODERESPONSE_H
#define GEOBATCHREVGEOCODERESPONSE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    CGFloat _timestamp;
    NSMutableArray *_versionDomains;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _statusCode;
    unsigned int _ttl;
    unsigned int _version;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *batchPlaceResults;
@property (retain, nonatomic) NSMutableArray *clusters;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int statusCode;
@property (nonatomic) CGFloat timestamp;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *versionDomains;


+(BOOL)isValid:(id)arg0 ;
+(Class)batchPlaceResultType;
+(Class)clusterType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)batchPlaceResultAtIndex:(NSUInteger)arg0 ;
-(id)clusterAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusCodeAsString:(int)arg0 ;
-(id)versionDomainAtIndex:(NSUInteger)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addBatchPlaceResult:(id)arg0 ;
-(void)addCluster:(id)arg0 ;
-(void)addVersionDomain:(id)arg0 ;
-(void)clearBatchPlaceResults;
-(void)clearClusters;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearVersionDomains;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif