// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEROENTRIESPB_H
#define ATXHEROENTRIESPB_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ATXHeroEntriesPb : PBCodable <NSCopying>

 {
    ? _adamIds;
    ? _deltaLatitudes;
    ? _deltaLongitudes;
    ? _isTouristApps;
    ? _muids;
    ? _radius;
    ? _ranks;
}


@property (readonly, nonatomic) *unsigned int adamIds;
@property (readonly, nonatomic) NSUInteger adamIdsCount;
@property (readonly, nonatomic) *int deltaLatitudes;
@property (readonly, nonatomic) NSUInteger deltaLatitudesCount;
@property (readonly, nonatomic) *int deltaLongitudes;
@property (readonly, nonatomic) NSUInteger deltaLongitudesCount;
@property (readonly, nonatomic) *BOOL isTouristApps;
@property (readonly, nonatomic) NSUInteger isTouristAppsCount;
@property (readonly, nonatomic) *NSUInteger muids;
@property (readonly, nonatomic) NSUInteger muidsCount;
@property (retain, nonatomic) NSMutableArray *poiCategorys; // ivar: _poiCategorys
@property (readonly, nonatomic) *unsigned int radius;
@property (readonly, nonatomic) NSUInteger radiusCount;
@property (readonly, nonatomic) *unsigned int ranks;
@property (readonly, nonatomic) NSUInteger ranksCount;
@property (nonatomic) int tileLatitudeE7; // ivar: _tileLatitudeE7
@property (nonatomic) int tileLongitudeE7; // ivar: _tileLongitudeE7
@property (retain, nonatomic) NSMutableArray *urlHashs; // ivar: _urlHashs


+(Class)poiCategoryType;
+(Class)urlHashType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTouristAppAtIndex:(NSUInteger)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)muidAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)poiCategoryAtIndex:(NSUInteger)arg0 ;
-(id)urlHashAtIndex:(NSUInteger)arg0 ;
-(int)deltaLatitudeAtIndex:(NSUInteger)arg0 ;
-(int)deltaLongitudeAtIndex:(NSUInteger)arg0 ;
-(unsigned int)adamIdAtIndex:(NSUInteger)arg0 ;
-(unsigned int)radiusAtIndex:(NSUInteger)arg0 ;
-(unsigned int)rankAtIndex:(NSUInteger)arg0 ;
-(void)addAdamId:(unsigned int)arg0 ;
-(void)addDeltaLatitude:(int)arg0 ;
-(void)addDeltaLongitude:(int)arg0 ;
-(void)addIsTouristApp:(BOOL)arg0 ;
-(void)addMuid:(NSUInteger)arg0 ;
-(void)addPoiCategory:(id)arg0 ;
-(void)addRadius:(unsigned int)arg0 ;
-(void)addRank:(unsigned int)arg0 ;
-(void)addUrlHash:(id)arg0 ;
-(void)clearAdamIds;
-(void)clearDeltaLatitudes;
-(void)clearDeltaLongitudes;
-(void)clearIsTouristApps;
-(void)clearMuids;
-(void)clearPoiCategorys;
-(void)clearRadius;
-(void)clearRanks;
-(void)clearUrlHashs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif