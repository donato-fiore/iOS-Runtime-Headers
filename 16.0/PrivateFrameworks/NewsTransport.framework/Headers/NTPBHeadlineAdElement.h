// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBHEADLINEADELEMENT_H
#define NTPBHEADLINEADELEMENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBHeadlineAdElement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *articleIAdCategories; // ivar: _articleIAdCategories
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords; // ivar: _articleIAdKeywords
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs; // ivar: _articleIAdSectionIDs
@property (retain, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain, nonatomic) NSString *articleRating; // ivar: _articleRating
@property (nonatomic) NSInteger channelContentProviderID; // ivar: _channelContentProviderID
@property (retain, nonatomic) NSMutableArray *channelIAdCategories; // ivar: _channelIAdCategories
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords; // ivar: _channelIAdKeywords
@property (retain, nonatomic) NSString *channelID; // ivar: _channelID
@property (retain, nonatomic) NSString *channelRating; // ivar: _channelRating
@property (nonatomic) BOOL draftArticle; // ivar: _draftArticle
@property (readonly, nonatomic) BOOL hasArticleID;
@property (readonly, nonatomic) BOOL hasArticleRating;
@property (nonatomic) BOOL hasChannelContentProviderID;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (readonly, nonatomic) BOOL hasChannelRating;
@property (nonatomic) BOOL hasDraftArticle;
@property (nonatomic) BOOL hasPaidArticle;
@property (nonatomic) BOOL hasSponsoredArticle;
@property (nonatomic) BOOL paidArticle; // ivar: _paidArticle
@property (nonatomic) BOOL sponsoredArticle; // ivar: _sponsoredArticle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleIAdCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)articleIAdKeywordsAtIndex:(NSUInteger)arg0 ;
-(id)articleIAdSectionIDsAtIndex:(NSUInteger)arg0 ;
-(id)channelIAdCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)channelIAdKeywordsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addArticleIAdCategories:(id)arg0 ;
-(void)addArticleIAdKeywords:(id)arg0 ;
-(void)addArticleIAdSectionIDs:(id)arg0 ;
-(void)addChannelIAdCategories:(id)arg0 ;
-(void)addChannelIAdKeywords:(id)arg0 ;
-(void)clearArticleIAdCategories;
-(void)clearArticleIAdKeywords;
-(void)clearArticleIAdSectionIDs;
-(void)clearChannelIAdCategories;
-(void)clearChannelIAdKeywords;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif