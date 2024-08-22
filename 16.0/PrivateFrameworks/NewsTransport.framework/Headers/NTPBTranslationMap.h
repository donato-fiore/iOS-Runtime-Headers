// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTRANSLATIONMAP_H
#define NTPBTRANSLATIONMAP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBTranslationMap : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *favoritesLanguageBuckets; // ivar: _favoritesLanguageBuckets
@property (retain, nonatomic) NSMutableArray *topicLanguageBuckets; // ivar: _topicLanguageBuckets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)favoritesLanguageBucketsAtIndex:(NSUInteger)arg0 ;
-(id)topicLanguageBucketsAtIndex:(NSUInteger)arg0 ;
-(void)addFavoritesLanguageBuckets:(id)arg0 ;
-(void)addTopicLanguageBuckets:(id)arg0 ;
-(void)clearFavoritesLanguageBuckets;
-(void)clearTopicLanguageBuckets;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif