// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWALKINGOPTIONS_H
#define GEOWALKINGOPTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOWalkingUserPreferences.h"

@interface GEOWalkingOptions : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _avoidedModes;
    CGFloat _preferredSpeed;
    GEOWalkingUserPreferences *_walkingUserPreferences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int avoidedModes;
@property (readonly, nonatomic) NSUInteger avoidedModesCount;
@property (nonatomic) BOOL hasPreferredSpeed;
@property (readonly, nonatomic) BOOL hasWalkingUserPreferences;
@property (nonatomic) CGFloat preferredSpeed;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOWalkingUserPreferences *walkingUserPreferences;


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
-(int)StringAsAvoidedModes:(id)arg0 ;
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