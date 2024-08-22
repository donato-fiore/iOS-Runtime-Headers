// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPLEIDCLIENT_H
#define SFAPPLEIDCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFAppleIDClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_syncXPCCnx;
    NSXPCConnection *_xpcCnx;
    NSXPCConnection *_xpcAuthCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)init;
-(id)myAccountWithError:(*id)arg0 ;
-(id)syncRemoteProxyWithError:(*id)arg0 ;
-(struct __SecIdentity *)copyIdentityForAppleID:(id)arg0 error:(*id)arg1 ;
-(void)_copyCertificateForAppleID:(id)arg0 withCompletion:(id)arg1 ;
-(void)_copyIdentityForAppleID:(id)arg0 withCompletion:(id)arg1 ;
-(void)_ensureAuthXPCStarted;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_myAccountWithCompletion:(id)arg0 ;
-(void)_personInfoWithEmailOrPhone:(id)arg0 completion:(id)arg1 ;
-(void)authenticateAccountWithAppleID:(id)arg0 password:(id)arg1 completion:(id)arg2 ;
-(void)copyCertificateForAppleID:(id)arg0 withCompletion:(id)arg1 ;
-(void)copyIdentityForAppleID:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)ensureSyncXPCStarted;
-(void)invalidate;
-(void)myAccountWithCompletion:(id)arg0 ;
-(void)personInfoWithEmailOrPhone:(id)arg0 completion:(id)arg1 ;
-(void)requestWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)statusInfoWithCompletion:(id)arg0 ;


@end


#endif