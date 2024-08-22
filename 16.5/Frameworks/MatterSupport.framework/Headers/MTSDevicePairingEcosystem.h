// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICEPAIRINGECOSYSTEM_H
#define MTSDEVICEPAIRINGECOSYSTEM_H

@class NSArray, NSString, NSData, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MTSDevicePairingVendor.h"

@interface MTSDevicePairingEcosystem : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly, copy) MTSDevicePairingVendor *vendor; // ivar: _vendor


+(BOOL)supportsSecureCoding;
+(id)UUIDFromRootPublicKey:(id)arg0 vendor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRootPublicKey:(id)arg0 vendor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif