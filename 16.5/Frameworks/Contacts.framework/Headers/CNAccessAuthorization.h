// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACCESSAUTHORIZATION_H
#define CNACCESSAUTHORIZATION_H

@class CNAuthorizationContext;

#import <Foundation/Foundation.h>


@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer; // ivar: _authorizer


+(BOOL)canSetContactProperty:(id)arg0 ;
+(id)allAuthorizationKeys;
+(id)allAuthorizationKeysVector;
+(id)new;
+(id)unauthorizedKeysVectorWithAuthorizer:(id)arg0 ;
+(id)unauthorizedKeysWithAuthorizer:(id)arg0 ;
+(void)removeUnavailableKeysFromContactKeyVector:(id)arg0 ;
-(BOOL)authorizeFetchRequest:(id)arg0 accessError:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(id)arg0 ;
-(id)initWithAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(id)initWithAuthorizer:(id)arg0 ;
-(id)unauthorizedKeysVector;
// -(void)performWork:(id)arg0 authorizingFetchRequest:(unk)arg1 failureHandler:(id)arg2  ;
-(void)resetUnauthorizedKeysForFetchRequest:(id)arg0 ;


@end


#endif