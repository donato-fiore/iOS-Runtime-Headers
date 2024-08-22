// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVLFLOCALIZATIONDETAILS_H
#define GEOVLFLOCALIZATIONDETAILS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOVLFLocalizationAlgorithmDetails.h"
#import "GEOVLFFailureDetails.h"
#import "GEOVLFGravityVector.h"
#import "GEOVLFLocation.h"
#import "GEOVLFSuccessDetails.h"
#import "GEOVLFTileDetails.h"

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOVLFPositionContextClassification _positionContextClassification;
    GEOVLFLocalizationAlgorithmDetails *_algorithmDetails;
    CGFloat _exposureTargetOffset;
    GEOVLFFailureDetails *_failureDetails;
    GEOVLFGravityVector *_gravityVector;
    GEOVLFLocation *_location;
    GEOVLFSuccessDetails *_successDetails;
    GEOVLFTileDetails *_tileDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _relativeTimestampMs;
    unsigned int _runTimeMs;
    ? _flags;
}


@property (retain, nonatomic) GEOVLFLocalizationAlgorithmDetails *algorithmDetails;
@property (nonatomic) CGFloat exposureTargetOffset;
@property (retain, nonatomic) GEOVLFFailureDetails *failureDetails;
@property (retain, nonatomic) GEOVLFGravityVector *gravityVector;
@property (readonly, nonatomic) BOOL hasAlgorithmDetails;
@property (nonatomic) BOOL hasExposureTargetOffset;
@property (readonly, nonatomic) BOOL hasFailureDetails;
@property (readonly, nonatomic) BOOL hasGravityVector;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasPositionContextClassification;
@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) BOOL hasRunTimeMs;
@property (readonly, nonatomic) BOOL hasSuccessDetails;
@property (readonly, nonatomic) BOOL hasTileDetails;
@property (retain, nonatomic) GEOVLFLocation *location;
@property (nonatomic) GEOVLFPositionContextClassification positionContextClassification;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) unsigned int runTimeMs;
@property (retain, nonatomic) GEOVLFSuccessDetails *successDetails;
@property (retain, nonatomic) GEOVLFTileDetails *tileDetails;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif