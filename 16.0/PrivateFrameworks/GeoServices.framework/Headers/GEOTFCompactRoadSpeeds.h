// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTFCOMPACTROADSPEEDS_H
#define GEOTFCOMPACTROADSPEEDS_H

@class PBCodable, PBDataReader, NSData, NSMutableArray;
@protocol NSCopying;



@interface GEOTFCompactRoadSpeeds : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _geoIds;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    unsigned int _speedKph;
    float _startOffset;
    BOOL _hidden;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif