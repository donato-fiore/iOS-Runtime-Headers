// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBPAYWALLBUTTONTAP_H
#define NTPBPAYWALLBUTTONTAP_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBIssueData.h"

@interface NTPBPaywallButtonTap : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) int groupType; // ivar: _groupType
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (nonatomic) BOOL hasPurchaseType;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscriptionButtonTargetType;
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (retain, nonatomic) NSString *purchaseId; // ivar: _purchaseId
@property (nonatomic) int purchaseType; // ivar: _purchaseType
@property (retain, nonatomic) NSString *sectionId; // ivar: _sectionId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) int subscriptionButtonTargetType; // ivar: _subscriptionButtonTargetType


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
-(id)subscriptionButtonTargetTypeAsString:(int)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(int)StringAsPurchaseType:(id)arg0 ;
-(int)StringAsSubscriptionButtonTargetType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif