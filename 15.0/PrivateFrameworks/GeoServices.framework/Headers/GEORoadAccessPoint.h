// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROADACCESSPOINT_H
#define GEOROADACCESSPOINT_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEORoadAccessPoint : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    int _cyclingDirection;
    int _drivingDirection;
    unsigned int _significance;
    int _source;
    int _transitDirection;
    int _walkingDirection;
    BOOL _isApproximate;
    ? _flags;
}


@property (nonatomic) int cyclingDirection;
@property (nonatomic) int drivingDirection;
@property (nonatomic) BOOL hasCyclingDirection;
@property (nonatomic) BOOL hasDrivingDirection;
@property (nonatomic) BOOL hasIsApproximate;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTransitDirection;
@property (nonatomic) BOOL hasWalkingDirection;
@property (nonatomic) BOOL isApproximate;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) unsigned int significance;
@property (nonatomic) int source;
@property (nonatomic) int transitDirection;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int walkingDirection;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cyclingDirectionAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)drivingDirectionAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)sourceAsString:(int)arg0 ;
-(id)transitDirectionAsString:(int)arg0 ;
-(id)walkingDirectionAsString:(int)arg0 ;
-(int)StringAsCyclingDirection:(id)arg0 ;
-(int)StringAsDrivingDirection:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(int)StringAsTransitDirection:(id)arg0 ;
-(int)StringAsWalkingDirection:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif