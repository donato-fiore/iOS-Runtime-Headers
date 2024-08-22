// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBNOTIFICATIONSUBSCRIBEUNSUBSCRIBE_H
#define NTPBNOTIFICATIONSUBSCRIBEUNSUBSCRIBE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *channelId; // ivar: _channelId
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasIsPaidUserOfChannel;
@property (nonatomic) BOOL hasNotificationSettingType;
@property (nonatomic) BOOL hasNotificationSubscribeUnsubscribeLocation;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isPaidUserOfChannel; // ivar: _isPaidUserOfChannel
@property (nonatomic) int notificationSettingType; // ivar: _notificationSettingType
@property (nonatomic) int notificationSubscribeUnsubscribeLocation; // ivar: _notificationSubscribeUnsubscribeLocation
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif