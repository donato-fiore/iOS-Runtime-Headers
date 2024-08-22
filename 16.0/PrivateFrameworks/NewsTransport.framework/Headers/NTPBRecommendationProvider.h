// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBRECOMMENDATIONPROVIDER_H
#define NTPBRECOMMENDATIONPROVIDER_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBRecommendationProvider : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasProviderId;
@property (retain, nonatomic) NSString *providerId; // ivar: _providerId
@property (retain, nonatomic) NSMutableArray *tagRecommendations; // ivar: _tagRecommendations


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tagRecommendationsAtIndex:(NSUInteger)arg0 ;
-(void)addTagRecommendations:(id)arg0 ;
-(void)clearTagRecommendations;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif