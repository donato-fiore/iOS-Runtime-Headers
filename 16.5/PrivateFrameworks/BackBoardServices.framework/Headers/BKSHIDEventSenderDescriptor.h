// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTSENDERDESCRIPTOR_H
#define BKSHIDEVENTSENDERDESCRIPTOR_H

@class NSString;
@protocol BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDisplay.h"

@interface BKSHIDEventSenderDescriptor : NSObject <BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) BKSHIDEventDisplay *associatedDisplay; // ivar: _associatedDisplay
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger hardwareType; // ivar: _hardwareType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int primaryPage; // ivar: _primaryPage
@property (readonly, nonatomic) unsigned int primaryUsage; // ivar: _primaryUsage
@property (readonly, nonatomic) NSUInteger senderID; // ivar: _senderID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)anyBuiltinTouchscreenDigitizer;
+(id)anyDigitizer;
+(id)build:(id)arg0 ;
+(id)protobufSchema;
+(id)wildcard;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDescriptor:(id)arg0 failureReason:(*id)arg1 ;
-(id)_initWithHardwareType:(NSInteger)arg0 associatedDisplay:(id)arg1 authenticated:(BOOL)arg2 primaryPage:(unsigned int)arg3 primaryUsage:(unsigned int)arg4 senderID:(NSUInteger)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initFromPropertyList:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertyListEncoded;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif