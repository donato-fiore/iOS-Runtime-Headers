// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDKEYBOARDDEVICEPROPERTIES_H
#define BKSHIDKEYBOARDDEVICEPROPERTIES_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable;

#import <Foundation/Foundation.h>


@interface BKSHIDKeyboardDeviceProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable>

 {
    NSString *_transport;
    NSString *_language;
    NSString *_layout;
    unsigned char _countryCode;
    unsigned int _standardType;
    NSInteger _subinterfaceID;
    BOOL _capsLockKeyHasLanguageSwitchLabel;
}


@property (readonly, nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (readonly, nonatomic) unsigned char countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *layout;
@property (readonly, nonatomic) unsigned int standardType;
@property (readonly, nonatomic) NSInteger subinterfaceID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transport;


+(BOOL)supportsSecureCoding;
+(id)build:(id)arg0 ;
+(id)new;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif