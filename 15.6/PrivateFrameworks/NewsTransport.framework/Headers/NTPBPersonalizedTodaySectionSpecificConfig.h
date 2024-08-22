// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBPERSONALIZEDTODAYSECTIONSPECIFICCONFIG_H
#define NTPBPERSONALIZEDTODAYSECTIONSPECIFICCONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxArticlesShown;
@property (retain, nonatomic) NSMutableArray *mandatoryArticles; // ivar: _mandatoryArticles
@property (nonatomic) NSUInteger maxArticlesShown; // ivar: _maxArticlesShown
@property (retain, nonatomic) NSMutableArray *personalizedArticles; // ivar: _personalizedArticles


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mandatoryArticlesAtIndex:(NSUInteger)arg0 ;
-(id)personalizedArticlesAtIndex:(NSUInteger)arg0 ;
-(void)addMandatoryArticles:(id)arg0 ;
-(void)addPersonalizedArticles:(id)arg0 ;
-(void)clearMandatoryArticles;
-(void)clearPersonalizedArticles;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif