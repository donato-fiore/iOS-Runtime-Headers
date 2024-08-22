// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPASSWORDCREDENTIALIDENTITY_H
#define ASPASSWORDCREDENTIALIDENTITY_H

@class SFExternalCredentialIdentityStoreIdentifier, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASCredentialServiceIdentifier.h"

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier; // ivar: _credentialIdentityStoreIdentifier
@property (nonatomic) NSInteger rank; // ivar: _rank
@property (readonly, copy, nonatomic) NSString *recordIdentifier; // ivar: _recordIdentifier
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
+(id)identityWithServiceIdentifier:(id)arg0 user:(id)arg1 recordIdentifier:(id)arg2 ;
-(id)_initWithFoundationCredentialIdentity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 user:(id)arg1 recordIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif