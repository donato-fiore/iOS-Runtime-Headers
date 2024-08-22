// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBENDOFARTICLEEXPOSURE_H
#define NTPBENDOFARTICLEEXPOSURE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface NTPBEndOfArticleExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int articleType; // ivar: _articleType
@property (nonatomic) int backendArticleVersion; // ivar: _backendArticleVersion
@property (nonatomic) NSInteger backendArticleVersionInt64; // ivar: _backendArticleVersionInt64
@property (nonatomic) int characterCount; // ivar: _characterCount
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) BOOL hasCharacterCount;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSMutableArray *namedEntities; // ivar: _namedEntities
@property (nonatomic) NSInteger personalizationTreatmentId; // ivar: _personalizationTreatmentId
@property (nonatomic) int publisherArticleVersion; // ivar: _publisherArticleVersion
@property (nonatomic) NSInteger publisherArticleVersionInt64; // ivar: _publisherArticleVersionInt64
@property (retain, nonatomic) NSMutableArray *recommendedArticleIds; // ivar: _recommendedArticleIds
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (retain, nonatomic) NSMutableArray *referencedRecommendedArticleIds; // ivar: _referencedRecommendedArticleIds
@property (retain, nonatomic) NSString *sectionHeadlineId; // ivar: _sectionHeadlineId
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (retain, nonatomic) NSString *surfacedBySectionId; // ivar: _surfacedBySectionId
@property (retain, nonatomic) NSString *surfacedByTopicId; // ivar: _surfacedByTopicId


+(Class)recommendedArticleIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)namedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)recommendedArticleIdAtIndex:(NSUInteger)arg0 ;
-(id)referencedRecommendedArticleIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsArticleType:(id)arg0 ;
-(void)addNamedEntities:(id)arg0 ;
-(void)addRecommendedArticleId:(id)arg0 ;
-(void)addReferencedRecommendedArticleIds:(id)arg0 ;
-(void)clearNamedEntities;
-(void)clearRecommendedArticleIds;
-(void)clearReferencedRecommendedArticleIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif