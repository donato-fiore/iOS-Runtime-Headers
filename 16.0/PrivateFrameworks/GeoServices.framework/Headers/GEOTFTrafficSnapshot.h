// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTFTRAFFICSNAPSHOT_H
#define GEOTFTRAFFICSNAPSHOT_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOTFTrafficSnapshot : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_compactSpeeds;
    NSString *_feedId;
    NSUInteger _feedPublishTime;
    NSInteger _feedUpdateTime;
    NSMutableArray *_incidents;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _trafficVersion;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *compactSpeeds;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) NSUInteger feedPublishTime;
@property (nonatomic) NSInteger feedUpdateTime;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedPublishTime;
@property (nonatomic) BOOL hasFeedUpdateTime;
@property (readonly, nonatomic) BOOL hasSnapshotId;
@property (nonatomic) BOOL hasTrafficVersion;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSString *snapshotId;
@property (retain, nonatomic) NSMutableArray *speeds;
@property (nonatomic) unsigned int trafficVersion;


+(BOOL)isValid:(id)arg0 ;
+(Class)regionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)compactSpeedsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)incidentsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)regionAtIndex:(NSUInteger)arg0 ;
-(id)speedsAtIndex:(NSUInteger)arg0 ;
-(void)addCompactSpeeds:(id)arg0 ;
-(void)addIncidents:(id)arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)addSpeeds:(id)arg0 ;
-(void)clearCompactSpeeds;
-(void)clearIncidents;
-(void)clearRegions;
-(void)clearSpeeds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif