// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PALAZYAUDITTOKENBASEDCLIENTIDENTITY_H
#define PALAZYAUDITTOKENBASEDCLIENTIDENTITY_H

@class NSString;
@protocol PAIdentityWrapper, OS_tcc_identity;

#import <Foundation/Foundation.h>


@interface PALazyAuditTokenBasedClientIdentity : NSObject <PAIdentityWrapper>



@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *identity; // ivar: _identity
@property (readonly, nonatomic, getter=isIdentityResolved) BOOL identityResolved; // ivar: _identityResolved
@property (readonly) Class superclass;


-(id)initWithAuditToken:(struct ? )arg0 ;


@end


#endif