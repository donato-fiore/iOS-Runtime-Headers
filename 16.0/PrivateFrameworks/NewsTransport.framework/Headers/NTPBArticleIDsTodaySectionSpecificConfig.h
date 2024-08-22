// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBARTICLEIDSTODAYSECTIONSPECIFICCONFIG_H
#define NTPBARTICLEIDSTODAYSECTIONSPECIFICCONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *articles; // ivar: _articles


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articlesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addArticles:(id)arg0 ;
-(void)clearArticles;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif