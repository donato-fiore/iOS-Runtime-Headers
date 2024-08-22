// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEMAPSFEATURES_H
#define GEOLOGMSGSTATEMAPSFEATURES_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying>

 {
    int _favoritesCount;
    int _followedPublisherCount;
    int _personalCollectionsCount;
    int _savedCollectionsCount;
    int _submittedPhotosCount;
    int _submittedRatingsCount;
    BOOL _homeFavoriteSet;
    BOOL _schoolFavoriteSet;
    BOOL _transitFavoriteSet;
    BOOL _workFavoriteSet;
    ? _flags;
}


@property (nonatomic) int favoritesCount;
@property (nonatomic) int followedPublisherCount;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) BOOL hasFollowedPublisherCount;
@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (nonatomic) BOOL hasSavedCollectionsCount;
@property (nonatomic) BOOL hasSchoolFavoriteSet;
@property (nonatomic) BOOL hasSubmittedPhotosCount;
@property (nonatomic) BOOL hasSubmittedRatingsCount;
@property (nonatomic) BOOL hasTransitFavoriteSet;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) int personalCollectionsCount;
@property (nonatomic) int savedCollectionsCount;
@property (nonatomic) BOOL schoolFavoriteSet;
@property (nonatomic) int submittedPhotosCount;
@property (nonatomic) int submittedRatingsCount;
@property (nonatomic) BOOL transitFavoriteSet;
@property (nonatomic) BOOL workFavoriteSet;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif