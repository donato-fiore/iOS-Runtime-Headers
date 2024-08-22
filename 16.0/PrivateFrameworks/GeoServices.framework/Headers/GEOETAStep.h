// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOETASTEP_H
#define GEOETASTEP_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOStopStepEVInfo.h"
#import "GEOEVStateInfo.h"
#import "GEOTimeCheckpoints.h"

@interface GEOETAStep : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStopStepEVInfo *_evInfo;
    GEOEVStateInfo *_evStateInfo;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _distanceCm;
    unsigned int _expectedTime;
    unsigned int _stepID;
    unsigned int _zilchPathIndex;
    int _zilchPointIndex;
    ? _flags;
}


@property (nonatomic) unsigned int distanceCm;
@property (retain, nonatomic) GEOStopStepEVInfo *evInfo;
@property (retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) BOOL hasDistanceCm;
@property (readonly, nonatomic) BOOL hasEvInfo;
@property (readonly, nonatomic) BOOL hasEvStateInfo;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) BOOL hasStepID;
@property (readonly, nonatomic) BOOL hasTimeCheckpoints;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) BOOL hasZilchPointIndex;
@property (nonatomic) unsigned int stepID;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) int zilchPointIndex;


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