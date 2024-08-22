// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCPEVENTSENDERPROPERTIES_H
#define RCPEVENTSENDERPROPERTIES_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSUInteger senderID; // ivar: _senderID


+(BOOL)supportsSecureCoding;
+(id)_cachedPropertiesOrCacheIfNeeded:(id)arg0 senderID:(NSUInteger)arg1 ;
+(id)_senderWithProperties:(id)arg0 senderID:(NSUInteger)arg1 ;
+(id)gamepadSender;
+(id)keyboardSender;
+(id)keyboardSenderForDisplayUUID:(id)arg0 ;
+(id)mouseSender;
+(id)pencilDigitizerSender;
+(id)senderFromIOHIDService:(struct __IOHIDServiceClient *)arg0 ;
+(id)senderWithProperties:(id)arg0 ;
+(id)senderWithProperties:(id)arg0 senderID:(NSUInteger)arg1 ;
+(id)supplyMissingStandardProperties:(id)arg0 senderID:(NSUInteger)arg1 ;
+(id)touchScreenDigitizerSender;
+(id)touchScreenDigitizerSenderForDisplayUUID:(id)arg0 ;
+(id)trackpadSender;
+(id)tvRemoteSender;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif