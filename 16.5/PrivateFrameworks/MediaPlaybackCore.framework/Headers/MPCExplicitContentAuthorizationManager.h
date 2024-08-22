// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCEXPLICITCONTENTAUTHORIZATIONMANAGER_H
#define MPCEXPLICITCONTENTAUTHORIZATIONMANAGER_H

@class NSError, ICAgeVerificationState;
@protocol MPCExplicitContentAuthorizationDelegate;

#import <Foundation/Foundation.h>


@interface MPCExplicitContentAuthorizationManager : NSObject

@property (copy, nonatomic) NSError *authorizationError; // ivar: _authorizationError
@property (readonly, nonatomic) NSInteger authorizationReason;
@property (weak, nonatomic) NSObject<MPCExplicitContentAuthorizationDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) ICAgeVerificationState *lastKnownAgeVerificationState; // ivar: _lastKnownAgeVerificationState
@property (nonatomic) NSInteger status; // ivar: _status


+(id)sharedManager;
-(BOOL)_askPlaybackAuthorizationForItem:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)_shouldAskPlaybackAuthorizationForItem:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)isItemAuthorized:(id)arg0 ;
-(BOOL)isItemAuthorized:(id)arg0 shouldAskForAuthorization:(BOOL)arg1 ;
-(id)_explicitContentErrorWithUnderlyingError:(id)arg0 message:(id)arg1 ;
-(id)_init;
-(id)_retrieveAgeVerificationStateForUserIdentity:(id)arg0 ;
-(void)_setupWithAgeGateForItem:(id)arg0 ;
-(void)_setupWithAgeVerificationState:(id)arg0 ;
-(void)_updateAuthorizationStatusWithAuthorizationState:(id)arg0 forItem:(id)arg1 ;


@end


#endif