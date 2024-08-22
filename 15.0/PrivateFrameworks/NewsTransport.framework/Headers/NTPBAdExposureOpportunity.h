// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBADEXPOSUREOPPORTUNITY_H
#define NTPBADEXPOSUREOPPORTUNITY_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBAdExposureOpportunity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *adCreativeId; // ivar: _adCreativeId
@property (nonatomic) int adCreativeType; // ivar: _adCreativeType
@property (nonatomic) NSInteger adErrorCode; // ivar: _adErrorCode
@property (retain, nonatomic) NSString *adOpportunityId; // ivar: _adOpportunityId
@property (retain, nonatomic) NSString *adSlotId; // ivar: _adSlotId
@property (nonatomic) int adType; // ivar: _adType
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) int durationInFeed; // ivar: _durationInFeed
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *eventId; // ivar: _eventId
@property (nonatomic) int exposureLocationType; // ivar: _exposureLocationType
@property (retain, nonatomic) NSString *exposureLocationTypeId; // ivar: _exposureLocationTypeId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (readonly, nonatomic) BOOL hasAdCreativeId;
@property (nonatomic) BOOL hasAdCreativeType;
@property (nonatomic) BOOL hasAdErrorCode;
@property (readonly, nonatomic) BOOL hasAdOpportunityId;
@property (readonly, nonatomic) BOOL hasAdSlotId;
@property (nonatomic) BOOL hasAdType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasDurationInFeed;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasEventId;
@property (nonatomic) BOOL hasExposureLocationType;
@property (readonly, nonatomic) BOOL hasExposureLocationTypeId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasIsExpanded;
@property (nonatomic) BOOL hasIsFilled;
@property (nonatomic) BOOL hasIsViewable;
@property (nonatomic) BOOL hasResponseTime;
@property (nonatomic) BOOL hasScreenfulsFromTop;
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (nonatomic) BOOL isFilled; // ivar: _isFilled
@property (nonatomic) BOOL isViewable; // ivar: _isViewable
@property (nonatomic) int responseTime; // ivar: _responseTime
@property (nonatomic) int screenfulsFromTop; // ivar: _screenfulsFromTop


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)adCreativeTypeAsString:(int)arg0 ;
-(id)adTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(int)StringAsAdCreativeType:(id)arg0 ;
-(int)StringAsAdType:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif