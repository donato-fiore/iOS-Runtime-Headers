// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARCONNECTIONEVENT_H
#define CARCONNECTIONEVENT_H

@class NSDictionary, NSDate, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CARConnectionEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSString *transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
+(id)eventWithName:(id)arg0 type:(NSInteger)arg1 date:(id)arg2 payload:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEventName:(id)arg0 type:(NSInteger)arg1 date:(id)arg2 payload:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif