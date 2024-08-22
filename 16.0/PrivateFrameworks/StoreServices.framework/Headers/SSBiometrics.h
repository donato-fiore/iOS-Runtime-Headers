// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBIOMETRICS_H
#define SSBIOMETRICS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSBiometrics : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
    SSXPCConnection *_connection;
}




-(id)init;
-(void)_sendMessage:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)getAllCachedBiometricHTTPHeadersWithToken:(id)arg0 accountID:(id)arg1 evict:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)getCachedBiometricAuthenticationContextWithToken:(id)arg0 evict:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)getCachedBiometricHTTPHeadersWithToken:(id)arg0 accountID:(id)arg1 evict:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)getConstraintsDictionaryForPurpose:(NSInteger)arg0 completion:(id)arg1 ;
-(void)getCurrentACLVersionWithCompletion:(id)arg0 ;
-(void)getIdentityMapCountWithCompletionBlock:(id)arg0 ;
-(void)getStateWithCompletionBlock:(id)arg0 ;
-(void)isIdentityMapValidForAccountIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)renewPurchaseTokenWithAuthToken:(id)arg0 completionBlock:(id)arg1 ;
-(void)resetAccount:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)resetWithCompletionBlock:(id)arg0 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)setAllowed:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 withAuthToken:(id)arg1 completionBlock:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)tokenUpdateDidFinishWithLogKey:(id)arg0 completion:(id)arg1 ;
-(void)tokenUpdateShouldStartWithLogKey:(id)arg0 completion:(id)arg1 ;
-(void)tokenUpdateStateWithCompletionBlock:(id)arg0 ;


@end


#endif