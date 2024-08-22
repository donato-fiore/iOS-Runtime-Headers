// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBREPORTCONCERN_H
#define NTPBREPORTCONCERN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBReportConcern : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int articleFeedCellHostType; // ivar: _articleFeedCellHostType
@property (nonatomic) int articleFeedCellSection; // ivar: _articleFeedCellSection
@property (retain, nonatomic) NSString *articleParentFeedId; // ivar: _articleParentFeedId
@property (nonatomic) int articleParentFeedType; // ivar: _articleParentFeedType
@property (nonatomic) NSInteger backendArticleVersion; // ivar: _backendArticleVersion
@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (retain, nonatomic) NSString *concernComments; // ivar: _concernComments
@property (nonatomic) int concernReason; // ivar: _concernReason
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (nonatomic) int contentType; // ivar: _contentType
@property (nonatomic) int feedFeedType; // ivar: _feedFeedType
@property (retain, nonatomic) NSString *feedPresentationSearchString; // ivar: _feedPresentationSearchString
@property (nonatomic) int feedViewPresentationReason; // ivar: _feedViewPresentationReason
@property (nonatomic) BOOL hasArticleFeedCellHostType;
@property (nonatomic) BOOL hasArticleFeedCellSection;
@property (readonly, nonatomic) BOOL hasArticleParentFeedId;
@property (nonatomic) BOOL hasArticleParentFeedType;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (readonly, nonatomic) BOOL hasClientId;
@property (readonly, nonatomic) BOOL hasConcernComments;
@property (nonatomic) BOOL hasConcernReason;
@property (readonly, nonatomic) BOOL hasContentId;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) BOOL hasFeedFeedType;
@property (readonly, nonatomic) BOOL hasFeedPresentationSearchString;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasOriginProductType;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (nonatomic) int originProductType; // ivar: _originProductType
@property (nonatomic) NSInteger publisherArticleVersion; // ivar: _publisherArticleVersion
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (nonatomic) int reportVersion; // ivar: _reportVersion
@property (retain, nonatomic) NSString *userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleFeedCellHostTypeAsString:(int)arg0 ;
-(id)articleFeedCellSectionAsString:(int)arg0 ;
-(id)articleParentFeedTypeAsString:(int)arg0 ;
-(id)contentTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedFeedTypeAsString:(int)arg0 ;
-(id)feedViewPresentationReasonAsString:(int)arg0 ;
-(int)StringAsArticleFeedCellHostType:(id)arg0 ;
-(int)StringAsArticleFeedCellSection:(id)arg0 ;
-(int)StringAsArticleParentFeedType:(id)arg0 ;
-(int)StringAsContentType:(id)arg0 ;
-(int)StringAsFeedFeedType:(id)arg0 ;
-(int)StringAsFeedViewPresentationReason:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif