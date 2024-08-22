// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBNOTIFICATIONENTITY_H
#define NTPBNOTIFICATIONENTITY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBNotificationEntity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) BOOL hasPaidBundleSubscriptionStatus;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int notificationType; // ivar: _notificationType
@property (nonatomic) int paidBundleSubscriptionStatus; // ivar: _paidBundleSubscriptionStatus
@property (nonatomic) int subscriberType; // ivar: _subscriberType
@property (retain, nonatomic) NSMutableArray *tagIds; // ivar: _tagIds


+(Class)tagIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tagIdAtIndex:(NSUInteger)arg0 ;
-(void)addTagId:(id)arg0 ;
-(void)clearTagIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif