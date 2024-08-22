// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFAUTHENTICATIONCONTEXT_H
#define _SFAUTHENTICATIONCONTEXT_H

@class LAContext, NSHashTable, NSMutableOrderedSet, NSMapTable, NSData;
@protocol LAUIDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate;

#import <Foundation/Foundation.h>


@interface _SFAuthenticationContext : NSObject <LAUIDelegate>

 {
    LAContext *_context;
    id<_SFAuthenticationClient> *_currentClientBeingAuthenticated;
    NSHashTable *_clients;
    NSMutableOrderedSet *_clientsAwaitingAuthentication;
    NSMapTable *_clientsAwaitingAuthenticationToCompletionBlocks;
    CGFloat _authenticationGracePeriod;
    CGFloat _lastAuthenticatedSessionStartTime;
    CGFloat _lastAuthenticatedSessionEndTime;
    CGFloat _lastApplicationBackgroundTime;
    BOOL _successfullyAuthenticated;
    BOOL _authenticationInvalidated;
    BOOL _ongoingAuthenticationCanceled;
    int _notificationToken;
    BOOL _matchFound;
    BOOL _fingerDetectRequired;
    NSUInteger _numberOfBiometricAuthenticationFailures;
}


@property (readonly, nonatomic) LAContext *authenticatedContext;
@property (weak, nonatomic) NSObject<_SFAuthenticationContextDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) BOOL needsAuthentication;


-(BOOL)_canInvalidateAuthentication;
-(BOOL)_contextRequiresSessionBasedAuthentication;
-(BOOL)_contextShouldAllowMultipleBiometricFailures;
-(BOOL)_contextShouldAllowPasscodeFallback;
-(BOOL)_hasAuthenticationCapability:(*id)arg0 ;
-(BOOL)_monotonicTimeIsWithinAuthenticationGracePeriod:(CGFloat)arg0 ;
-(id)_authenticationContext;
-(id)init;
-(void)_cancelOngoingAndPendingAuthentications;
-(void)_cancelOngoingAuthentication;
-(void)_evaluatePolicyForClient:(id)arg0 userInitiated:(BOOL)arg1 reply:(id)arg2 ;
-(void)_handleTouchIDEventWithParameters:(id)arg0 ;
-(void)_invalidateAuthentication;
-(void)_processNextClientAwaitingAuthenticationUserInitiated:(BOOL)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)authenticateForClient:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)invalidateClient:(id)arg0 ;
-(void)preemptOngoingAuthenticationWithPasccodeAuthentication;


@end


#endif