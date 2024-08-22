// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPREFMANAGER_H
#define ICPREFMANAGER_H

@class NSMutableArray, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ICPrefManager : NSObject {
    os_unfair_lock_s _authConnectionLock;
    NSMutableArray *_authConnectionSemaphores;
}


@property (retain, nonatomic) NSXPCConnection *authConnection; // ivar: _authConnection


+(id)defaultAuthManager;
-(BOOL)getGoodNewsStatus;
-(BOOL)openRemoteAuthenticationManager;
-(id)authManagerConnection;
-(id)getContentsAuthorizationStatus;
-(id)getControlAuthorizationStatus;
-(id)init;
-(id)remoteAuthManager;
-(void)addSelectorToInterface:(id)arg0 selectorString:(id)arg1 origin:(BOOL)arg2 ;
-(void)dealloc;
-(void)endQuery:(id)arg0 ;
-(void)invalidateQueries;
-(void)requestContentsAuthorizationShouldPrompt:(BOOL)arg0 completion:(id)arg1 ;
-(void)requestControlAuthorizationShouldPrompt:(BOOL)arg0 completion:(id)arg1 ;
-(void)resetContentsAuthorizationWithCompletion:(id)arg0 ;
-(void)resetControlAuthorizationWithCompletion:(id)arg0 ;
-(void)startQuery:(id)arg0 ;


@end


#endif