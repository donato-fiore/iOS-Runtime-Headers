// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCLIENTCONNECTIONCONTEXT_H
#define MCMCLIENTCONNECTIONCONTEXT_H

@class NSString;
@protocol MCMClientConnectionContext, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "MCMPOSIXUser.h"
#import "MCMUserIdentityCache.h"

@interface MCMClientConnectionContext : NSObject <MCMClientConnectionContext>



@property (readonly, nonatomic) ? auditToken;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


-(id)clientConnectionContextForCurrentThread;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForCurrentThreadContextWithXPCConnection:(id)arg0 userIdentityCache:(id)arg1 ;


@end


#endif