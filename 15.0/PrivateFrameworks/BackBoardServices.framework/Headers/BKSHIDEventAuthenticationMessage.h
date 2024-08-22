// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTAUTHENTICATIONMESSAGE_H
#define BKSHIDEVENTAUTHENTICATIONMESSAGE_H

@class NSData, NSString;
@protocol BSDescriptionStreamable, NSSecureCoding, NSCopying, BSProtobufSerializable;

#import <Foundation/Foundation.h>

#import "BKSHIDEventHitTestLayerInformation.h"

@interface BKSHIDEventAuthenticationMessage : NSObject <BSDescriptionStreamable, NSSecureCoding, NSCopying, BSProtobufSerializable>

 {
    NSData *_signature;
}


@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent; // ivar: _hitTestInformationFromEndEvent
@property (readonly, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent; // ivar: _hitTestInformationFromStartEvent
@property (readonly, nonatomic) NSUInteger originIdentifier; // ivar: _originIdentifier
@property (readonly, nonatomic) BOOL registrantEntitled; // ivar: _registrantEntitled
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int targetContextID; // ivar: _targetContextID
@property (readonly, nonatomic) unsigned int targetSlotID; // ivar: _targetSlotID
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger versionedPID; // ivar: _versionedPID


+(BOOL)supportsSecureCoding;
+(id)new;
+(id)protobufSchema;
+(id)withKey:(id)arg0 buildMessage:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif