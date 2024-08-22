// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMROSTERPROVIDERENVIRONMENT_H
#define CRKASMROSTERPROVIDERENVIRONMENT_H


#import <Foundation/Foundation.h>

#import "CRKASMCertificateVendor.h"
#import "CRKASMRosterProviderConfiguration.h"
#import "CRKASMUserFactory.h"

@interface CRKASMRosterProviderEnvironment : NSObject

@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // ivar: _certificateVendor
@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CRKASMUserFactory *userFactory; // ivar: _userFactory


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)identityVendorForUserIdentifier:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 certificateVendor:(id)arg1 userFactory:(id)arg2 ;


@end


#endif