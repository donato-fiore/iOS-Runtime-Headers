// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESLEGACYKEYCREATERESPONSE_H
#define SESLEGACYKEYCREATERESPONSE_H

@class NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESLegacyKeyCreateResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *CASDSignature; // ivar: _CASDSignature
@property (retain, nonatomic) NSNumber *keySlot; // ivar: _keySlot
@property (retain, nonatomic) NSData *legacyKeyAttestation; // ivar: _legacyKeyAttestation
@property (retain, nonatomic) NSData *publicKeyData; // ivar: _publicKeyData


+(BOOL)supportsSecureCoding;
+(id)withPublicKeyData:(id)arg0 CASDSignature:(id)arg1 keySlot:(id)arg2 legacyKeyAttestation:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif