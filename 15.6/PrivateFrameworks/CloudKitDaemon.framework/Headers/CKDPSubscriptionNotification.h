// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPSUBSCRIPTIONNOTIFICATION_H
#define CKDPSUBSCRIPTIONNOTIFICATION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "CKDPSubscriptionNotificationAlert.h"

@interface CKDPSubscriptionNotification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *additionalFields; // ivar: _additionalFields
@property (retain, nonatomic) CKDPSubscriptionNotificationAlert *alert; // ivar: _alert
@property (retain, nonatomic) NSString *collapseIdKey; // ivar: _collapseIdKey
@property (readonly, nonatomic) BOOL hasAlert;
@property (readonly, nonatomic) BOOL hasCollapseIdKey;
@property (nonatomic) BOOL hasShouldBadge;
@property (nonatomic) BOOL hasShouldSendContentAvailable;
@property (nonatomic) BOOL hasShouldSendMutableContent;
@property (nonatomic) BOOL shouldBadge; // ivar: _shouldBadge
@property (nonatomic) BOOL shouldSendContentAvailable; // ivar: _shouldSendContentAvailable
@property (nonatomic) BOOL shouldSendMutableContent; // ivar: _shouldSendMutableContent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)additionalFieldsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAdditionalFields:(id)arg0 ;
-(void)clearAdditionalFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif