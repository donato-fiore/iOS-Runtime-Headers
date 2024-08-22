// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBADCTAENGAGEMENT_H
#define NTPBADCTAENGAGEMENT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBAdCtaEngagement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int adCreativeType; // ivar: _adCreativeType
@property (nonatomic) int adCtaEngagemetType; // ivar: _adCtaEngagemetType
@property (nonatomic) int adEngagementType; // ivar: _adEngagementType
@property (retain, nonatomic) NSString *adImpressionId; // ivar: _adImpressionId
@property (nonatomic) int adLocation; // ivar: _adLocation
@property (nonatomic) int adType; // ivar: _adType
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (nonatomic) BOOL hasAdCreativeType;
@property (nonatomic) BOOL hasAdCtaEngagemetType;
@property (nonatomic) BOOL hasAdEngagementType;
@property (readonly, nonatomic) BOOL hasAdImpressionId;
@property (nonatomic) BOOL hasAdLocation;
@property (nonatomic) BOOL hasAdType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasIadAd;
@property (readonly, nonatomic) BOOL hasIadCampaign;
@property (readonly, nonatomic) BOOL hasIadLine;
@property (nonatomic) BOOL hasNewsProductType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasVideoAdDuration;
@property (nonatomic) BOOL hasVideoAdPlacementPosition;
@property (nonatomic) BOOL hasVideoAdPlayTime;
@property (nonatomic) BOOL hasVideoAdType;
@property (nonatomic) BOOL hasVideoAdViewComplete;
@property (retain, nonatomic) NSString *iadAd; // ivar: _iadAd
@property (retain, nonatomic) NSString *iadCampaign; // ivar: _iadCampaign
@property (retain, nonatomic) NSString *iadLine; // ivar: _iadLine
@property (nonatomic) int newsProductType; // ivar: _newsProductType
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) NSInteger videoAdDuration; // ivar: _videoAdDuration
@property (nonatomic) int videoAdPlacementPosition; // ivar: _videoAdPlacementPosition
@property (nonatomic) NSInteger videoAdPlayTime; // ivar: _videoAdPlayTime
@property (nonatomic) int videoAdType; // ivar: _videoAdType
@property (nonatomic) BOOL videoAdViewComplete; // ivar: _videoAdViewComplete


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)adCreativeTypeAsString:(int)arg0 ;
-(id)adEngagementTypeAsString:(int)arg0 ;
-(id)adLocationAsString:(int)arg0 ;
-(id)adTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)newsProductTypeAsString:(int)arg0 ;
-(id)videoAdTypeAsString:(int)arg0 ;
-(int)StringAsAdCreativeType:(id)arg0 ;
-(int)StringAsAdEngagementType:(id)arg0 ;
-(int)StringAsAdLocation:(id)arg0 ;
-(int)StringAsAdType:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsNewsProductType:(id)arg0 ;
-(int)StringAsVideoAdType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif