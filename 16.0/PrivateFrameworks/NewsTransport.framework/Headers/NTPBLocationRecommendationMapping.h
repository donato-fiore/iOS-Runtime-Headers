// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBLOCATIONRECOMMENDATIONMAPPING_H
#define NTPBLOCATIONRECOMMENDATIONMAPPING_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBLocationRecommendationMapping : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (retain, nonatomic) NSMutableArray *recommendationProviders; // ivar: _recommendationProviders


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recommendationProvidersAtIndex:(NSUInteger)arg0 ;
-(void)addRecommendationProviders:(id)arg0 ;
-(void)clearRecommendationProviders;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif