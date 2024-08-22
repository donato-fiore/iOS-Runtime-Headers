// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTAUTHENTICATIONKEY_H
#define BKSHIDEVENTAUTHENTICATIONKEY_H

@class NSData, NSString;
@protocol NSSecureCoding, BSProtobufSerializable;

#import <Foundation/Foundation.h>


@interface BKSHIDEventAuthenticationKey : NSObject <NSSecureCoding, BSProtobufSerializable>

 {
    NSData *_keyData;
    ? _hmacContext;
    atomic_flag _hmacInitialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger generation; // ivar: _generation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventAuthenticationKey;
+(id)eventAuthenticationKeyWithKeyBuffer:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)protobufSchema;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif