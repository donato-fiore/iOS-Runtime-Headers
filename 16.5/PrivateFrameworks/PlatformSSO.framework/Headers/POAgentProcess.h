// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POAGENTPROCESS_H
#define POAGENTPROCESS_H

@class NSXPCConnection, NSString;
@protocol POServiceProtocol;

#import <Foundation/Foundation.h>

#import "POAuthenticationProcess.h"
#import "PODirectoryServices.h"
#import "POKeyWrap.h"
#import "POAgentAuthenticationProcess.h"

@interface POAgentProcess : NSObject <POServiceProtocol>

 {
    NSXPCConnection *_xpcConnection;
}


@property (retain) POAuthenticationProcess *authenticationProcess; // ivar: _authenticationProcess
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PODirectoryServices *directoryServices; // ivar: _directoryServices
@property (readonly) NSUInteger hash;
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain) POKeyWrap *keyWrap; // ivar: _keyWrap
@property (retain) POAgentAuthenticationProcess *process; // ivar: _process
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAuthenticationProcess:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 authenticationProcess:(id)arg1 ;
-(void)connectionInvalidated;
-(void)createUserAccount:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;
-(void)getLoginTypeForUser:(id)arg0 completion:(id)arg1 ;
-(void)loadConfiguration;
-(void)performLocalPasswordLogin:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;
-(void)performPasswordLogin:(id)arg0 passwordContext:(id)arg1 updateLocalAccountPassword:(BOOL)arg2 completion:(id)arg3 ;
-(void)performSEPKeyLogin:(id)arg0 completion:(id)arg1 ;
-(void)saveConfiguration;
-(void)saveCredentialForUserName:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;
-(void)screenDidUnlockWithCompletion:(id)arg0 ;


@end


#endif