// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFDEVICELOCKOUTCONTROLLER_H
#define SBFDEVICELOCKOUTCONTROLLER_H

@class NSString;
@protocol BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider, SBFThermalBlockProvider;

#import <Foundation/Foundation.h>

#import "SBFUserAuthenticationController.h"

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider>

 {
    NSUInteger _lastBlockedStatus;
}


@property (retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController; // ivar: _authenticationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isLockedOutCached, setter=_setLockedOutCached:) BOOL lockedOutCached; // ivar: _lockedOutCached
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_thermalProvider, setter=_setThermalProvider:) NSObject<SBFThermalBlockProvider> *thermalProvider; // ivar: _thermalProvider


-(BOOL)isBlocked;
-(BOOL)isLockedOut;
-(BOOL)isPermanentlyBlocked;
-(BOOL)isTemporarilyBlocked;
-(BOOL)isThermallyBlocked;
-(BOOL)isUserRequestedEraseEnabled;
-(CGFloat)timeIntervalUntilUnblockedSinceReferenceDate;
-(NSUInteger)deviceBlockStatus;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithThermalController:(id)arg0 authenticationController:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_noteLockedOutReasonsMayHaveChanged;
-(void)_noteLockedOutStateMayHaveChanged:(BOOL)arg0 ;
-(void)dealloc;
-(void)temporaryBlockStatusChanged;
-(void)thermalBlockStatusChanged:(id)arg0 ;


@end


#endif