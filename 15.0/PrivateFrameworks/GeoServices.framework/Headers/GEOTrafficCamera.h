// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRAFFICCAMERA_H
#define GEOTRAFFICCAMERA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOMiniCard.h"
#import "GEOLatLng.h"

@interface GEOTrafficCamera : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    CGFloat _speedThreshold;
    GEOMiniCard *_speedingCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _cameraPriority;
    unsigned int _highlightDistance;
    int _type;
    ? _flags;
}


@property (nonatomic) unsigned int cameraPriority;
@property (nonatomic) BOOL hasCameraPriority;
@property (nonatomic) BOOL hasHighlightDistance;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasInfoCard;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasSpeedLimitText;
@property (nonatomic) BOOL hasSpeedThreshold;
@property (readonly, nonatomic) BOOL hasSpeedingCard;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int highlightDistance;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) GEOMiniCard *infoCard;
@property (retain, nonatomic) GEOLatLng *position;
@property (retain, nonatomic) NSString *speedLimitText;
@property (nonatomic) CGFloat speedThreshold;
@property (retain, nonatomic) GEOMiniCard *speedingCard;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif