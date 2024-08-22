// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVLFSLAMTRACK_H
#define GEOVLFSLAMTRACK_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOVLFPoint3D.h"

@interface GEOVLFSLAMTrack : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _descriptors;
    ? _observationImageIndices;
    NSMutableArray *_imagePositions;
    GEOVLFPoint3D *_position;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int descriptors;
@property (readonly, nonatomic) NSUInteger descriptorsCount;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) NSMutableArray *imagePositions;
@property (readonly, nonatomic) *unsigned int observationImageIndices;
@property (readonly, nonatomic) NSUInteger observationImageIndicesCount;
@property (retain, nonatomic) GEOVLFPoint3D *position;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imagePositionsAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)descriptorsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)observationImageIndicesAtIndex:(NSUInteger)arg0 ;
-(void)addDescriptors:(unsigned int)arg0 ;
-(void)addImagePositions:(id)arg0 ;
-(void)addObservationImageIndices:(unsigned int)arg0 ;
-(void)clearDescriptors;
-(void)clearImagePositions;
-(void)clearObservationImageIndices;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif