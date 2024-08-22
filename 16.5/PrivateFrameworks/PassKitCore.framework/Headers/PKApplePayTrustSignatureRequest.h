// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLEPAYTRUSTSIGNATUREREQUEST_H
#define PKAPPLEPAYTRUSTSIGNATUREREQUEST_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, copy, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (readonly, copy, nonatomic) NSData *nonce; // ivar: _nonce


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyIdentifier:(id)arg0 manifestHash:(id)arg1 nonce:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif