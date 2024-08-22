// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBNOTIFICATIONSETTINGSSCREENVIEW_H
#define NTPBNOTIFICATIONSETTINGSSCREENVIEW_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBNotificationSettingsScreenView : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasNotificationSettingsScreenViewPresentationReason;
@property (nonatomic) int notificationSettingsScreenViewPresentationReason; // ivar: _notificationSettingsScreenViewPresentationReason


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