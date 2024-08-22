// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTDEFERRINGENVIRONMENT_H
#define BKSHIDEVENTDEFERRINGENVIRONMENT_H

@class NSString;
@protocol BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding>

 {
    NSString *_identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)environmentWithIdentifier:(id)arg0 ;
+(id)keyboardFocusEnvironment;
+(id)protobufSchema;
+(id)systemEnvironment;
-(BOOL)_isKeyboardFocusEnvironment;
-(BOOL)_isSystemEnvironment;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif