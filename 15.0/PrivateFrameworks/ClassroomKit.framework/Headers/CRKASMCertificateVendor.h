// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCERTIFICATEVENDOR_H
#define CRKASMCERTIFICATEVENDOR_H


#import <Foundation/Foundation.h>

#import "CRKASMCredentialStore.h"

@interface CRKASMCertificateVendor : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore; // ivar: _credentialStore


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)certificatesForUserIdentifier:(id)arg0 ;
-(id)certificatesForUserIdentifiers:(id)arg0 ;
-(id)initWithCredentialStore:(id)arg0 ;
-(id)manifest;
-(void)forgetPersistentIDs:(id)arg0 ;


@end


#endif