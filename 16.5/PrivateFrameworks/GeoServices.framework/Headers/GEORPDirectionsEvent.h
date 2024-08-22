// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPDIRECTIONSEVENT_H
#define GEORPDIRECTIONSEVENT_H

@class PBCodable, PBDataReader, NSString, NSData;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEORPDirectionsEvent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSInteger _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    NSData *_occurrenceRouteId;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _occurrenceResponseIndex;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    int _synthesizedStepManeuverType;
    int _type;
    ? _flags;
}


@property (nonatomic) NSInteger errorCode;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (readonly, nonatomic) BOOL hasOccurrenceLatLng;
@property (nonatomic) BOOL hasOccurrenceResponseIndex;
@property (readonly, nonatomic) BOOL hasOccurrenceRouteId;
@property (nonatomic) BOOL hasOccurrenceStepIndex;
@property (nonatomic) BOOL hasSwitchedToResponseIndex;
@property (readonly, nonatomic) BOOL hasSwitchedToRouteId;
@property (readonly, nonatomic) BOOL hasSynthesizedStepInstructions;
@property (nonatomic) BOOL hasSynthesizedStepManeuverType;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) GEOLatLng *occurrenceLatLng;
@property (nonatomic) unsigned int occurrenceResponseIndex;
@property (retain, nonatomic) NSData *occurrenceRouteId;
@property (nonatomic) unsigned int occurrenceStepIndex;
@property (nonatomic) unsigned int switchedToResponseIndex;
@property (retain, nonatomic) NSData *switchedToRouteId;
@property (retain, nonatomic) NSString *synthesizedStepInstructions;
@property (nonatomic) int synthesizedStepManeuverType;
@property (nonatomic) int type;


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
-(id)synthesizedStepManeuverTypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsSynthesizedStepManeuverType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif