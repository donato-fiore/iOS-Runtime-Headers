// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSKEYCHAIN_H
#define SSKEYCHAIN_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSKeychain : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




-(id)init;
-(void)_sendMessage:(id)arg0 completionBlock:(id)arg1 ;
-(void)createAttestationDataForAccountIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)createAttestationDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)createX509CertChainDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)deleteKeychainTokensForAccountIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)keyCountForAccountIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)signData:(id)arg0 context:(id)arg1 completionBlock:(id)arg2 ;
-(void)signData:(id)arg0 reason:(id)arg1 fallback:(id)arg2 cancel:(id)arg3 forAccountIdentifier:(id)arg4 completionBlock:(id)arg5 ;
-(void)x509CertChainDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 regenerateCerts:(BOOL)arg2 completionBlock:(id)arg3 ;


@end


#endif