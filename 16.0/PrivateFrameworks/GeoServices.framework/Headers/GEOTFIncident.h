// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTFINCIDENT_H
#define GEOTFINCIDENT_H

@class PBCodable, PBDataReader, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface GEOTFIncident : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _geoids;
    NSString *_crossStreet;
    NSUInteger _durationMin;
    CGFloat _endOffset;
    NSString *_incidentId;
    NSMutableArray *_infos;
    CGFloat _latitude;
    CGFloat _longitude;
    NSData *_openlr;
    CGFloat _startOffset;
    NSInteger _startTime;
    NSString *_street;
    NSInteger _updateTime;
    NSData *_zilch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _alertCCode;
    int _color;
    float _delay;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoomLevel;
    unsigned int _minZoomLevel;
    int _significance;
    float _speed;
    int _trafficTrend;
    int _type;
    BOOL _blocked;
    BOOL _endTimeReliable;
    BOOL _hardBlocked;
    BOOL _hidden;
    BOOL _navigationAlert;
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