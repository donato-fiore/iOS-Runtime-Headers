// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PALAZYAUDITTOKENBASEDCLIENTIDENTITY_H
#define PALAZYAUDITTOKENBASEDCLIENTIDENTITY_H

@protocol OS_tcc_identity;

#import <Foundation/Foundation.h>


@interface PALazyAuditTokenBasedClientIdentity : NSObject

@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *identity; // ivar: _identity
@property (readonly, nonatomic, getter=isIdentityResolved) BOOL identityResolved; // ivar: _identityResolved


-(id)description;
-(id)initWithAuditToken:(struct ? )arg0 ;


@end


#endif