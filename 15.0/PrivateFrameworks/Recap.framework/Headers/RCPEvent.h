// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPEVENT_H
#define RCPEVENT_H

@class NSArray;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RCPEventSenderProperties.h"

@interface RCPEvent : NSObject <NSCoding, NSCopying>



@property (nonatomic) NSUInteger deliveryTimestamp; // ivar: _deliveryTimestamp
@property (readonly, nonatomic) *__IOHIDEvent hidEvent; // ivar: _hidEvent
@property (readonly, nonatomic) NSArray *preActions; // ivar: _preActions
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly, nonatomic) NSUInteger timestamp;


+(id)eventWithHIDEvent:(struct __IOHIDEvent *)arg0 ;
+(id)eventWithHIDEvent:(struct __IOHIDEvent *)arg0 deliveryTimeStamp:(NSUInteger)arg1 ;
+(id)eventWithHIDEvent:(struct __IOHIDEvent *)arg0 deliveryTimeStamp:(NSUInteger)arg1 senderProperties:(id)arg2 preActions:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventAdjustedForDeliveryTimeInterval:(CGFloat)arg0 eventEnvironment:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeliveryTimeStamp:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif