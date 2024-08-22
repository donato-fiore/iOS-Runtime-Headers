// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTDISPLAY_H
#define BKSHIDEVENTDISPLAY_H

@class NSString;
@protocol NSSecureCoding, BSProtobufSerializable, NSCopying;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying>

 {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)builtinDisplay;
+(id)displayWithHardwareIdentifier:(id)arg0 ;
+(id)nullDisplay;
+(id)protobufSchema;
-(BOOL)_isBuiltinDisplay;
-(BOOL)_isNullDisplay;
-(BOOL)isEqual:(id)arg0 ;
-(id)_hardwareIdentifier;
-(id)_initWithHardwareIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif