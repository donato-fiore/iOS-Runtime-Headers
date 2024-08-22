// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNACCESSAUTHORIZATION_H
#define CNACCESSAUTHORIZATION_H

@class CNAuthorizationContext;

#import <Foundation/Foundation.h>


@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer; // ivar: _authorizer


+(id)allAuthorizationKeys;
+(id)new;
-(BOOL)authorizeFetchRequest:(id)arg0 accessError:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(id)arg0 ;
-(id)initWithAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(id)initWithAuthorizer:(id)arg0 ;
// -(void)performWork:(id)arg0 authorizingFetchRequest:(unk)arg1 failureHandler:(id)arg2  ;
-(void)removeUnauthorizedKeysFromFetchRequest:(id)arg0 ;


@end


#endif