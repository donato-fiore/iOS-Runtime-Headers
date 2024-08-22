// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSIGNGUIDANCE_H
#define GEOSIGNGUIDANCE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOPBTransitArtwork.h"
#import "GEOJunctionInfo.h"
#import "GEONameInfo.h"

@interface GEOSignGuidance : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artworkOverride;
    GEOJunctionInfo *_junctionInfo;
    NSMutableArray *_secondarySigns;
    GEONameInfo *_shieldName;
    NSMutableArray *_signDetails;
    NSMutableArray *_signTitles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _maneuverArrowOverride;
    unsigned int _stackRanking;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property (readonly, nonatomic) BOOL hasArtworkOverride;
@property (readonly, nonatomic) BOOL hasJunctionInfo;
@property (nonatomic) BOOL hasManeuverArrowOverride;
@property (readonly, nonatomic) BOOL hasShieldName;
@property (nonatomic) BOOL hasStackRanking;
@property (retain, nonatomic) GEOJunctionInfo *junctionInfo;
@property (nonatomic) int maneuverArrowOverride;
@property (retain, nonatomic) NSMutableArray *secondarySigns;
@property (retain, nonatomic) GEONameInfo *shieldName;
@property (retain, nonatomic) NSMutableArray *signDetails;
@property (retain, nonatomic) NSMutableArray *signTitles;
@property (nonatomic) unsigned int stackRanking;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)secondarySignType;
+(Class)signDetailType;
+(Class)signTitleType;
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
-(id)maneuverArrowOverrideAsString:(int)arg0 ;
-(id)secondarySignAtIndex:(NSUInteger)arg0 ;
-(id)signDetailAtIndex:(NSUInteger)arg0 ;
-(id)signTitleAtIndex:(NSUInteger)arg0 ;
-(int)StringAsManeuverArrowOverride:(id)arg0 ;
-(void)addSecondarySign:(id)arg0 ;
-(void)addSignDetail:(id)arg0 ;
-(void)addSignTitle:(id)arg0 ;
-(void)clearSecondarySigns;
-(void)clearSignDetails;
-(void)clearSignTitles;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif