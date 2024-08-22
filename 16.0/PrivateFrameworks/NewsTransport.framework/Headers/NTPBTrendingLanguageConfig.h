// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTRENDINGLANGUAGECONFIG_H
#define NTPBTRENDINGLANGUAGECONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag; // ivar: _languageTag
@property (retain, nonatomic) NSMutableArray *trendingTopics; // ivar: _trendingTopics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trendingTopicsAtIndex:(NSUInteger)arg0 ;
-(void)addTrendingTopics:(id)arg0 ;
-(void)clearTrendingTopics;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif