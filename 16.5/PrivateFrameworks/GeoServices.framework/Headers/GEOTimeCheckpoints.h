// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTIMECHECKPOINTS_H
#define GEOTIMECHECKPOINTS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;



@interface GEOTimeCheckpoints : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _distToNextCheckpoints;
    ? _timeToNextCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int distToNextCheckpoints;
@property (readonly, nonatomic) NSUInteger distToNextCheckpointsCount;
@property (readonly, nonatomic) *unsigned int timeToNextCheckpoints;
@property (readonly, nonatomic) NSUInteger timeToNextCheckpointsCount;
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
-(unsigned int)distToNextCheckpointAtIndex:(NSUInteger)arg0 ;
-(unsigned int)timeToNextCheckpointAtIndex:(NSUInteger)arg0 ;
-(void)addDistToNextCheckpoint:(unsigned int)arg0 ;
-(void)addTimeToNextCheckpoint:(unsigned int)arg0 ;
-(void)clearDistToNextCheckpoints;
-(void)clearTimeToNextCheckpoints;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif