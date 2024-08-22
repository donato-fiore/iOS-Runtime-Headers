// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITOPTIONS_H
#define GEOTRANSITOPTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOFareOptions.h"

@interface GEOTransitOptions : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _avoidedModes;
    GEOFareOptions *_fareOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _prioritization;
    int _routingBehavior;
    BOOL _enableIncidents;
    ? _flags;
}


@property (readonly, nonatomic) *int avoidedModes;
@property (readonly, nonatomic) NSUInteger avoidedModesCount;
@property (nonatomic) BOOL enableIncidents;
@property (retain, nonatomic) GEOFareOptions *fareOptions;
@property (nonatomic) BOOL hasEnableIncidents;
@property (readonly, nonatomic) BOOL hasFareOptions;
@property (nonatomic) BOOL hasPrioritization;
@property (nonatomic) BOOL hasRoutingBehavior;
@property (nonatomic) int prioritization;
@property (nonatomic) int routingBehavior;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)avoidedModesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)prioritizationAsString:(int)arg0 ;
-(id)routingBehaviorAsString:(int)arg0 ;
-(int)StringAsAvoidedModes:(id)arg0 ;
-(int)StringAsPrioritization:(id)arg0 ;
-(int)StringAsRoutingBehavior:(id)arg0 ;
-(int)avoidedModeAtIndex:(NSUInteger)arg0 ;
-(void)addAvoidedMode:(int)arg0 ;
-(void)clearAvoidedModes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif