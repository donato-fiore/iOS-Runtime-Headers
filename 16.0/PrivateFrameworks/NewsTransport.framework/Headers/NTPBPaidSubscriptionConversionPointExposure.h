// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPAIDSUBSCRIPTIONCONVERSIONPOINTEXPOSURE_H
#define NTPBPAIDSUBSCRIPTIONCONVERSIONPOINTEXPOSURE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBIssueData.h"

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL arrivedFromAd; // ivar: _arrivedFromAd
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasArrivedFromAd;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (nonatomic) BOOL hasPurchaseType;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (nonatomic) BOOL hasUserAction;
@property (retain, nonatomic) NSString *iadQtoken; // ivar: _iadQtoken
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation; // ivar: _paidSubscriptionConversionPointExposureLocation
@property (nonatomic) int paidSubscriptionConversionPointExposurePresentationReason; // ivar: _paidSubscriptionConversionPointExposurePresentationReason
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (retain, nonatomic) NSString *parentFeedId; // ivar: _parentFeedId
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (retain, nonatomic) NSString *purchaseId; // ivar: _purchaseId
@property (nonatomic) int purchaseType; // ivar: _purchaseType
@property (retain, nonatomic) NSString *sectionId; // ivar: _sectionId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) BOOL subscriptionOnlyArticlePreview; // ivar: _subscriptionOnlyArticlePreview
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId; // ivar: _subscriptionPurchaseSessionId
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupTypeAsString:(int)arg0 ;
-(id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg0 ;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg0 ;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(id)purchaseTypeAsString:(int)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(int)StringAsPurchaseType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif