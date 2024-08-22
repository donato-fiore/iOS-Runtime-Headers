// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBPAIDSUBSCRIPTIONRESULT_H
#define NTPBPAIDSUBSCRIPTIONRESULT_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBIssueData.h"

@interface NTPBPaidSubscriptionResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int amsPurchaseErrorCode; // ivar: _amsPurchaseErrorCode
@property (nonatomic) BOOL arrivedFromAd; // ivar: _arrivedFromAd
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasAmsPurchaseErrorCode;
@property (nonatomic) BOOL hasArrivedFromAd;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (nonatomic) BOOL hasPurchaseType;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) BOOL hasSawSubscriptionSheet;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasStorekitError;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *iadQtoken; // ivar: _iadQtoken
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (retain, nonatomic) NSString *parentFeedId; // ivar: _parentFeedId
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (retain, nonatomic) NSString *purchaseId; // ivar: _purchaseId
@property (nonatomic) int purchaseType; // ivar: _purchaseType
@property (nonatomic) int resultType; // ivar: _resultType
@property (nonatomic) BOOL sawSubscriptionSheet; // ivar: _sawSubscriptionSheet
@property (retain, nonatomic) NSString *sectionId; // ivar: _sectionId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) int storekitError; // ivar: _storekitError
@property (nonatomic) BOOL subscriptionOnlyArticlePreview; // ivar: _subscriptionOnlyArticlePreview
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId; // ivar: _subscriptionPurchaseSessionId
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (retain, nonatomic) NSString *surfacedByTopicId; // ivar: _surfacedByTopicId
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupTypeAsString:(int)arg0 ;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg0 ;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(id)purchaseTypeAsString:(int)arg0 ;
-(id)storekitErrorAsString:(int)arg0 ;
-(id)topicIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(int)StringAsPurchaseType:(id)arg0 ;
-(int)StringAsStorekitError:(id)arg0 ;
-(void)addTopicIds:(id)arg0 ;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif