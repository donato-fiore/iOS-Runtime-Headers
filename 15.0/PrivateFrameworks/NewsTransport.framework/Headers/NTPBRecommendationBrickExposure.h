// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBRECOMMENDATIONBRICKEXPOSURE_H
#define NTPBRECOMMENDATIONBRICKEXPOSURE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL exposedFromReferredUser; // ivar: _exposedFromReferredUser
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (nonatomic) BOOL hasExposedFromReferredUser;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) BOOL hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType; // ivar: _recommendationBrickType
@property (retain, nonatomic) NSMutableArray *recommendedFeedIds; // ivar: _recommendedFeedIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)recommendationBrickTypeAsString:(int)arg0 ;
-(id)recommendedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsRecommendationBrickType:(id)arg0 ;
-(void)addRecommendedFeedIds:(id)arg0 ;
-(void)clearRecommendedFeedIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif