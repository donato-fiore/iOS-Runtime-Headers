// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBALREADYSUBSCRIBERSIGNIN_H
#define NTPBALREADYSUBSCRIBERSIGNIN_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBIssueData.h"

@interface NTPBAlreadySubscriberSignIn : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL arrivedFromAd; // ivar: _arrivedFromAd
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (retain, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasArrivedFromAd;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (nonatomic) BOOL hasSuccessfulNewsTokenVerification;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *iadQtoken; // ivar: _iadQtoken
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (retain, nonatomic) NSString *sectionId; // ivar: _sectionId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) BOOL subscriptionOnlyArticlePreview; // ivar: _subscriptionOnlyArticlePreview
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId; // ivar: _subscriptionPurchaseSessionId
@property (nonatomic) BOOL successfulNewsTokenVerification; // ivar: _successfulNewsTokenVerification
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
-(id)topicIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(void)addTopicIds:(id)arg0 ;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif