// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSERVICECLIENTAUTHENTICATOR_H
#define FBSERVICECLIENTAUTHENTICATOR_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) NSUInteger credentials; // ivar: _credentials
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *entitlement; // ivar: _entitlement
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)authenticateAuditToken:(struct ? )arg0 forEntitlement:(id)arg1 error:(*id)arg2 ;
+(id)_errorForCode:(int)arg0 process:(id)arg1 failedEntitlement:(id)arg2 ;
+(id)sharedForegroundUIAppClientAuthenticator;
+(id)sharedSystemClientAuthenticator;
+(id)sharedUIAppClientAuthenticator;
+(int)_authenticateAuditToken:(id)arg0 entitlement:(id)arg1 credentials:(NSUInteger)arg2 error:(*id)arg3 withResult:(id)arg4 ;
-(BOOL)authenticateAuditToken:(id)arg0 ;
-(BOOL)authenticateAuditToken:(id)arg0 error:(*id)arg1 ;
-(BOOL)authenticateAuditToken:(id)arg0 forEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)authenticateClient:(id)arg0 ;
-(BOOL)authenticateClient:(id)arg0 error:(*id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCredentials:(NSUInteger)arg0 ;
-(id)initWithEntitlement:(id)arg0 ;
-(id)initWithEntitlement:(id)arg0 additionalCredentials:(NSUInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(int)authenticateAuditToken:(struct ? *)arg0 forEntitlement:(id)arg1 withResult:(id)arg2 ;
-(int)authenticateAuditToken:(struct ? *)arg0 withResult:(id)arg1 ;
-(int)authenticateClient:(id)arg0 withResult:(id)arg1 ;


@end


#endif