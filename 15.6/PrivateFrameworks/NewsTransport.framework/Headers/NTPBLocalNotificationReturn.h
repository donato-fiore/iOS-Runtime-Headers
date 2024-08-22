// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBLOCALNOTIFICATIONRETURN_H
#define NTPBLOCALNOTIFICATIONRETURN_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBLocalNotificationReturn : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLocalNoticationNumberReceived;
@property (nonatomic) BOOL hasLocalNotificationDirectOpen;
@property (nonatomic) BOOL hasLocalNotificationDirectOpenNumber;
@property (nonatomic) BOOL hasLocalNotificationSentTimestamp;
@property (nonatomic) BOOL hasLocalNotificationType;
@property (nonatomic) int localNoticationNumberReceived; // ivar: _localNoticationNumberReceived
@property (nonatomic) BOOL localNotificationDirectOpen; // ivar: _localNotificationDirectOpen
@property (nonatomic) int localNotificationDirectOpenNumber; // ivar: _localNotificationDirectOpenNumber
@property (nonatomic) NSInteger localNotificationSentTimestamp; // ivar: _localNotificationSentTimestamp
@property (nonatomic) int localNotificationType; // ivar: _localNotificationType


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