// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMIDENTITYVENDOR_H
#define CRKASMIDENTITYVENDOR_H

@class NSString;
@protocol CRKIdentity;

#import <Foundation/Foundation.h>

#import "CRKASMCredentialStore.h"

@interface CRKASMIdentityVendor : NSObject

@property (readonly, copy, nonatomic) NSString *commonNamePrefix; // ivar: _commonNamePrefix
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore; // ivar: _credentialStore
@property (readonly, nonatomic) NSObject<CRKIdentity> *identity;
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)existingIdentity;
-(id)initWithUserIdentifier:(id)arg0 commonNamePrefix:(id)arg1 credentialStore:(id)arg2 ;
-(id)makeIdentity;
-(id)makeIdentityAndAddToKeychain;


@end


#endif