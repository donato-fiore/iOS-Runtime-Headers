// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBUSERNOTIFICATIONLOGGINGEVENT_H
#define ATXPBUSERNOTIFICATIONLOGGINGEVENT_H

@class PBCodable, NSString;
@protocol ATXJSONSerializableProtocol, NSCopying;


#import "ATXPBUserNotification.h"

@interface ATXPBUserNotificationLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int deliveryReason; // ivar: _deliveryReason
@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasDeliveryReason;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (readonly, nonatomic) BOOL hasNotification;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (retain, nonatomic) ATXPBUserNotification *notification; // ivar: _notification
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deliveryReasonAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsDeliveryReason:(id)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif