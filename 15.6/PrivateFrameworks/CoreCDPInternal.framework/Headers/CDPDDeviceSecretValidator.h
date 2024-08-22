// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDDEVICESECRETVALIDATOR_H
#define CDPDDEVICESECRETVALIDATOR_H

@class NSMutableDictionary, NSMutableSet, CDPContext, CDPDevice, NSString;
@protocol CDPRemoteDeviceSecretValidatorProtocolInternal, CDPDDeviceSecretValidatorDelegate;

#import <Foundation/Foundation.h>


@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocolInternal>

 {
    BOOL _isAttemptingRecovery;
    NSUInteger _failedAttempts;
    NSMutableDictionary *_failedSecrets;
    NSMutableSet *_failedRecoveryKeys;
    NSMutableSet *_failedSingleICSCs;
    NSMutableDictionary *_recoveryErrors;
    BOOL _depletedRemainingAttempts;
    CDPContext *_context;
    CDPDevice *_currentDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPDDeviceSecretValidatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUsingMultipleICSC; // ivar: _isUsingMultipleICSC
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedEscapeOfferMask; // ivar: supportedEscapeOfferMask
@property (copy, nonatomic) id *validSecretHandler; // ivar: _validSecretHandler


-(BOOL)_isFailedSecret:(id)arg0 forDevice:(id)arg1 ;
-(BOOL)_isInvalidICSCError:(id)arg0 ;
-(BOOL)isAttemptingRecovery;
-(NSUInteger)failedAttempts;
-(id)_failedSecretsForDevice:(id)arg0 ;
-(id)_failedSingleICSCs;
-(id)_handleMultiCSCRecoveryFailureForDevice:(id)arg0 recoveryError:(id)arg1 secret:(id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_attemptToRecoverDevice:(id)arg0 withSecret:(id)arg1 completion:(id)arg2 ;
-(void)_attemptToRecoverWithRecoveryKey:(id)arg0 completion:(id)arg1 ;
-(void)_handleDelegateValidationError:(id)arg0 ;
-(void)_handleMultiCSCRecoveryResults:(id)arg0 clique:(id)arg1 type:(NSUInteger)arg2 secret:(id)arg3 device:(id)arg4 completion:(id)arg5 ;
-(void)_handleRecoveryFailureForFinalDevice:(id)arg0 completion:(id)arg1 ;
-(void)_performSingleiCSCRecoveryWithSecret:(id)arg0 type:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)approveFromAnotherDeviceWithCompletion:(id)arg0 ;
-(void)cancelApproveFromAnotherDevice;
-(void)cancelValidationWithError:(id)arg0 ;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(id)arg0 ;
-(void)validateCustodianRecoveryInfo:(id)arg0 withCompletion:(id)arg1 ;
-(void)validateRecoveryKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)validateSecret:(id)arg0 devices:(id)arg1 type:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif