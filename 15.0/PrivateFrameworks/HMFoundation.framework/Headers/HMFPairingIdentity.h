// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFPAIRINGIDENTITY_H
#define HMFPAIRINGIDENTITY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "HMFObject.h"
#import "HMFPairingKey.h"
#import "HMFPairingIdentity.h"

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) HMFPairingKey *privateKey; // ivar: _privateKey
@property (readonly, copy, nonatomic) HMFPairingKey *publicKey; // ivar: _publicKey
@property (readonly, copy) HMFPairingIdentity *publicPairingIdentity;


+(BOOL)supportsSecureCoding;
+(id)pairingIdentity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 publicKey:(id)arg1 privateKey:(id)arg2 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif