// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPAIDSUBSCRIPTIONSHEETVIEW_H
#define NTPBPAIDSUBSCRIPTIONSHEETVIEW_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBPaidSubscriptionSheetView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL arrivedFromAd; // ivar: _arrivedFromAd
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) int groupType; // ivar: _groupType
@property (nonatomic) BOOL hasArrivedFromAd;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) BOOL hasPaidSubscriptionSheetViewPresentationReason;
@property (nonatomic) BOOL hasParentFeedType;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (nonatomic) BOOL hasUserAction;
@property (retain, nonatomic) NSString *iadQtoken; // ivar: _iadQtoken
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation; // ivar: _paidSubscriptionConversionPointExposureLocation
@property (nonatomic) int paidSubscriptionConversionPointType; // ivar: _paidSubscriptionConversionPointType
@property (nonatomic) int paidSubscriptionSheetViewPresentationReason; // ivar: _paidSubscriptionSheetViewPresentationReason
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
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
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg0 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif