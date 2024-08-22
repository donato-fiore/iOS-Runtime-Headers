// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTVLFUSAGE_H
#define GEOLOGMSGEVENTVLFUSAGE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOVLFARFailureTypes.h"
#import "GEOVLFEntryPoint.h"
#import "GEOVLFLocation.h"
#import "GEOVLFInitializationFailureDetails.h"
#import "GEOVLFCorrection.h"

@interface GEOLogMsgEventVLFUsage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOVLFPositionContextClassification _initialPositionContextClassification;
    GEOVLFARFailureTypes *_arFailureTypes;
    NSMutableArray *_arStates;
    NSMutableArray *_deviceOrientations;
    GEOVLFEntryPoint *_entryPoint;
    GEOVLFLocation *_initialLocation;
    GEOVLFInitializationFailureDetails *_initializationFailureDetails;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_postFusionCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _finalState;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    ? _flags;
}


@property (retain, nonatomic) GEOVLFARFailureTypes *arFailureTypes;
@property (retain, nonatomic) NSMutableArray *arStates;
@property (retain, nonatomic) NSMutableArray *deviceOrientations;
@property (retain, nonatomic) GEOVLFEntryPoint *entryPoint;
@property (nonatomic) int finalState;
@property (readonly, nonatomic) BOOL hasArFailureTypes;
@property (readonly, nonatomic) BOOL hasEntryPoint;
@property (nonatomic) BOOL hasFinalState;
@property (readonly, nonatomic) BOOL hasInitialLocation;
@property (nonatomic) BOOL hasInitialPositionContextClassification;
@property (readonly, nonatomic) BOOL hasInitializationFailureDetails;
@property (readonly, nonatomic) BOOL hasPostFusionCorrection;
@property (nonatomic) BOOL hasSessionTimeMs;
@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (retain, nonatomic) GEOVLFLocation *initialLocation;
@property (nonatomic) GEOVLFPositionContextClassification initialPositionContextClassification;
@property (retain, nonatomic) GEOVLFInitializationFailureDetails *initializationFailureDetails;
@property (retain, nonatomic) NSMutableArray *localizationDetails;
@property (retain, nonatomic) GEOVLFCorrection *postFusionCorrection;
@property (nonatomic) unsigned int sessionTimeMs;
@property (nonatomic) unsigned int timeRoundedToHour;


+(BOOL)isValid:(id)arg0 ;
+(Class)arStateType;
+(Class)deviceOrientationType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)arStateAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceOrientationAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)finalStateAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizationDetailsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFinalState:(id)arg0 ;
-(void)addArState:(id)arg0 ;
-(void)addDeviceOrientation:(id)arg0 ;
-(void)addLocalizationDetails:(id)arg0 ;
-(void)clearArStates;
-(void)clearDeviceOrientations;
-(void)clearLocalizationDetails;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif