// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSERNOTIFICATIONLOGGINGEVENT_H
#define ATXUSERNOTIFICATIONLOGGINGEVENT_H

@class NSString;
@protocol BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>

#import "ATXUserNotification.h"

@interface ATXUserNotificationLoggingEvent : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deliveryReason; // ivar: _deliveryReason
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly, nonatomic) ATXUserNotification *notification; // ivar: _notification
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)eventCausesNotificationInactivity;
-(BOOL)eventCausesNotificationNonprominence;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUserNotificationLoggingEvent:(id)arg0 ;
-(BOOL)isReceiveEvent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)initFromUserNotification:(id)arg0 eventType:(NSInteger)arg1 timestamp:(CGFloat)arg2 ;
-(id)initFromUserNotification:(id)arg0 eventType:(NSInteger)arg1 timestamp:(CGFloat)arg2 deliveryReason:(NSUInteger)arg3 ;
-(id)initFromUserNotification:(id)arg0 eventType:(NSInteger)arg1 timestamp:(CGFloat)arg2 deliveryReason:(NSUInteger)arg3 modeIdentifier:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRepresentation;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif