// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHIPECOSYSTEM_H
#define HMCHIPECOSYSTEM_H

@class NSUUID, NSArray, NSString, NSNumber, NSData;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMCHIPVendor.h"

@interface HMCHIPEcosystem : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, getter=isAppleEcosystem) BOOL appleEcosystem;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) HMCHIPVendor *vendor; // ivar: _vendor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 ;
-(id)initWithRootPublicKey:(id)arg0 vendor:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif