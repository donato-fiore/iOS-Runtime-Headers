// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBHEROAPPPREDICTION_H
#define ATXPBHEROAPPPREDICTION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface ATXPBHeroAppPrediction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger adamId; // ivar: _adamId
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSData *clipMetadata; // ivar: _clipMetadata
@property (nonatomic) BOOL hasAdamId;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasClipMetadata;
@property (nonatomic) BOOL hasIsTouristApp;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLatitudeAtPredictionTime;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasLongitudeAtPredictionTime;
@property (readonly, nonatomic) BOOL hasPoiCategory;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (nonatomic) BOOL isTouristApp; // ivar: _isTouristApp
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat latitudeAtPredictionTime; // ivar: _latitudeAtPredictionTime
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat longitudeAtPredictionTime; // ivar: _longitudeAtPredictionTime
@property (retain, nonatomic) NSString *poiCategory; // ivar: _poiCategory
@property (nonatomic) NSInteger radius; // ivar: _radius
@property (nonatomic) NSInteger rank; // ivar: _rank
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *urlHash; // ivar: _urlHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif