// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPOIENRICHMENTUPDATE_H
#define GEORPPOIENRICHMENTUPDATE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEORPPoiEnrichmentPlaceContext.h"
#import "GEOPDPlace.h"
#import "GEORPScorecardUpdate.h"
#import "GEORPScorecard.h"

@interface GEORPPoiEnrichmentUpdate : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_imageIds;
    NSMutableArray *_imageUpdates;
    GEORPPoiEnrichmentPlaceContext *_placeContext;
    GEOPDPlace *_place;
    GEORPScorecardUpdate *_scorecardUpdate;
    GEORPScorecard *_scorecard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _action;
    ? _flags;
}


@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceContext;
@property (readonly, nonatomic) BOOL hasScorecard;
@property (readonly, nonatomic) BOOL hasScorecardUpdate;
@property (retain, nonatomic) NSMutableArray *imageIds;
@property (retain, nonatomic) NSMutableArray *imageUpdates;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) GEORPPoiEnrichmentPlaceContext *placeContext;
@property (retain, nonatomic) GEORPScorecard *scorecard;
@property (retain, nonatomic) GEORPScorecardUpdate *scorecardUpdate;


+(BOOL)isValid:(id)arg0 ;
+(Class)imageIdType;
+(Class)imageUpdateType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageIdAtIndex:(NSUInteger)arg0 ;
-(id)imageUpdateAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAction:(id)arg0 ;
-(void)addImageId:(id)arg0 ;
-(void)addImageUpdate:(id)arg0 ;
-(void)clearImageIds;
-(void)clearImageUpdates;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif