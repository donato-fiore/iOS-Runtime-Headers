// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPANIONWALKSTEP_H
#define GEOCOMPANIONWALKSTEP_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol GEOCompanionManeuverStep, NSCopying, GEOTransitArtworkDataSource;


#import "GEOPBTransitArtwork.h"

@interface GEOCompanionWalkStep : PBCodable <GEOCompanionManeuverStep, NSCopying>

 {
    PBDataReader *_reader;
    *GEOJunctionElement _junctionElements;
    NSUInteger _junctionElementsCount;
    NSUInteger _junctionElementsSpace;
    GEOPBTransitArtwork *_artworkOverride;
    NSMutableArray *_maneuverNames;
    NSMutableArray *_signposts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _junctionType;
    int _maneuverType;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArtworkOverride;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *GEOJunctionElement junctionElements;
@property (readonly, nonatomic) *GEOJunctionElement junctionElements;
@property (readonly, nonatomic) NSUInteger junctionElementsCount;
@property (readonly, nonatomic) NSUInteger junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *maneuverArtworkOverride;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (nonatomic) int maneuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int transportType;


+(BOOL)isValid:(id)arg0 ;
+(Class)maneuverNameType;
+(Class)signpostType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)junctionTypeAsString:(int)arg0 ;
-(id)maneuverNameAtIndex:(NSUInteger)arg0 ;
-(id)maneuverTypeAsString:(int)arg0 ;
-(id)signpostAtIndex:(NSUInteger)arg0 ;
-(int)StringAsJunctionType:(id)arg0 ;
-(int)StringAsManeuverType:(id)arg0 ;
-(struct GEOJunctionElement )junctionElementAtIndex:(NSUInteger)arg0 ;
-(void)addJunctionElement:(struct GEOJunctionElement )arg0 ;
-(void)addManeuverName:(id)arg0 ;
-(void)addSignpost:(id)arg0 ;
-(void)clearJunctionElements;
-(void)clearManeuverNames;
-(void)clearSignposts;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif