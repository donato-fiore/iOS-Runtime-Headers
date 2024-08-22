// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LACONTEXT_H
#define LACONTEXT_H

@class NSData, NSString, NSNumber;
@protocol NSSecureCoding, LAPrearmContextXPC, LAUIDelegate;

#import <Foundation/Foundation.h>

#import "LAClient.h"

@interface LAContext : NSObject <NSSecureCoding>

 {
    LAClient *_client;
    id<LAPrearmContextXPC> *_prearmContext;
}


@property (nonatomic) NSInteger biometryType; // ivar: _biometryType
@property (retain, nonatomic) NSData *evaluatedPolicyDomainState; // ivar: _evaluatedPolicyDomainState
@property (retain, nonatomic) NSData *externalizedContext; // ivar: _externalizedContext
@property (readonly, nonatomic) unsigned int instanceId; // ivar: _instanceId
@property (nonatomic) BOOL interactionNotAllowed;
@property (copy, nonatomic) NSString *localizedCancelTitle;
@property (copy, nonatomic) NSString *localizedFallbackTitle;
@property (copy, nonatomic) NSString *localizedReason;
@property (retain, nonatomic) NSNumber *maxBiometryFailures; // ivar: _maxBiometryFailures
@property (nonatomic) CGFloat touchIDAuthenticationAllowableReuseDuration;
@property (retain, nonatomic) NSNumber *touchIDAuthenticationRetryLimit;
@property (weak, nonatomic) NSObject<LAUIDelegate> *uiDelegate;


+(BOOL)supportsSecureCoding;
+(id)_optionsForEvent:(NSInteger)arg0 ;
+(unsigned int)newCommandId;
+(unsigned int)newInstanceId;
+(void)notifyEvent:(NSInteger)arg0 ;
+(void)notifyEvent:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)_setCredential:(id)arg0 type:(NSInteger)arg1 log:(NSInteger)arg2 cid:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)canEvaluatePolicy:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)checkContextValidWithError:(*id)arg0 ;
-(BOOL)isCredentialSet:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setCredential:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)setCredential:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)hash;
-(id)_evaluatePolicy:(NSInteger)arg0 options:(id)arg1 log:(NSInteger)arg2 cid:(unsigned int)arg3 error:(*id)arg4 ;
-(id)_evaluationMechanismsFromReturnedError:(id)arg0 error:(*id)arg1 ;
-(id)_hashWithBundleIdentifier:(id)arg0 ;
-(id)_publicErrorFromInternalError:(id)arg0 options:(id)arg1 ;
-(id)_serverPropertyValueForOption:(NSInteger)arg0 ;
-(id)_serverPropertyValueForOption:(NSInteger)arg0 log:(NSInteger)arg1 ;
-(id)credentialOfType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)description;
-(id)evaluateAccessControl:(struct __SecAccessControl *)arg0 aksOperation:(*void)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)evaluateAccessControl:(struct __SecAccessControl *)arg0 operation:(NSInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)evaluatePolicy:(NSInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)evaluationMechanismsForAccessControl:(struct __SecAccessControl *)arg0 operation:(NSInteger)arg1 error:(*id)arg2 ;
-(id)evaluationMechanismsForPolicy:(NSInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalizedContext:(id)arg0 ;
-(id)initWithExternalizedContext:(id)arg0 uiDelegate:(id)arg1 ;
-(id)initWithExternalizedContext:(id)arg0 userSession:(*unsigned int)arg1 ;
-(id)initWithUIDelegate:(id)arg0 ;
-(id)optionAuthenticationReason;
-(id)optionAuthenticationTitle;
-(id)optionBiometryLockoutRecovery;
-(id)optionBodyText;
-(id)optionCallerAuditToken;
-(id)optionCallerIconBundlePath;
-(id)optionCallerName;
-(id)optionCallerPID;
-(id)optionCancelVisible;
-(id)optionCheckApplePayEnabled;
-(id)optionEventProcessing;
-(id)optionFaceDetectLength;
-(id)optionFallbackVisible;
-(id)optionFingerMustBeOff;
-(id)optionMatchForUnlock;
-(id)optionMaxBiometryFailures;
-(id)optionNoFailureUI;
-(id)optionNotInteractive;
-(id)optionPINCharset;
-(id)optionPINFirst;
-(id)optionPINLabel;
-(id)optionPINLength;
-(id)optionPINMaxLength;
-(id)optionPINMinLength;
-(id)optionPINTitle;
-(id)optionPasscodeScreenBlur;
-(id)optionPasscodeScreenStyle;
-(id)optionPasscodeTitle;
-(id)optionPasswordAuthenticationReason;
-(id)optionPhysicalButtonTitle;
-(id)optionPresentationStyle;
-(id)optionReturnBiometryDatabaseHash;
-(id)optionSecurePassphrase;
-(id)optionSharedValidity;
-(id)optionSoftwareUpdateManifest;
-(id)optionSoftwareUpdateStashMode;
-(id)optionTKAuthOperationError;
-(id)optionTimeout;
-(id)optionTintColor;
-(id)optionTransitionStyle;
-(id)optionUserCancel;
-(id)optionUserFallback;
-(id)uuid;
-(void)_evaluateAccessControl:(struct __SecAccessControl *)arg0 operation:(id)arg1 options:(id)arg2 log:(NSInteger)arg3 cid:(unsigned int)arg4 synchronous:(BOOL)arg5 reply:(id)arg6 ;
-(void)_evaluatePolicy:(NSInteger)arg0 options:(id)arg1 log:(NSInteger)arg2 cid:(unsigned int)arg3 synchronous:(BOOL)arg4 reply:(id)arg5 ;
-(void)_setCredential:(id)arg0 type:(NSInteger)arg1 log:(NSInteger)arg2 cid:(unsigned int)arg3 reply:(id)arg4 ;
-(void)_setServerPropertyForOption:(NSInteger)arg0 value:(id)arg1 ;
-(void)_setServerPropertyForOption:(NSInteger)arg0 value:(id)arg1 log:(NSInteger)arg2 ;
-(void)authMethodWithReply:(id)arg0 ;
-(void)bootstrapServiceType:(id)arg0 completionHandler:(id)arg1 ;
-(void)credentialOfType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateAccessControl:(struct __SecAccessControl *)arg0 aksOperation:(*void)arg1 options:(id)arg2 reply:(id)arg3 ;
-(void)evaluateAccessControl:(struct __SecAccessControl *)arg0 operation:(NSInteger)arg1 localizedReason:(id)arg2 reply:(id)arg3 ;
-(void)evaluateAccessControl:(struct __SecAccessControl *)arg0 operation:(NSInteger)arg1 options:(id)arg2 reply:(id)arg3 ;
-(void)evaluatePolicy:(NSInteger)arg0 localizedReason:(id)arg1 reply:(id)arg2 ;
-(void)evaluatePolicy:(NSInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)failProcessedEvent:(NSInteger)arg0 failureError:(id)arg1 reply:(id)arg2 ;
-(void)invalidate;
-(void)optionsForInternalOperation:(NSInteger)arg0 reply:(id)arg1 ;
-(void)pauseProcessedEvent:(NSInteger)arg0 pause:(BOOL)arg1 reply:(id)arg2 ;
-(void)prearmTouchIDWithReply:(id)arg0 ;
-(void)resetProcessedEvent:(NSInteger)arg0 reply:(id)arg1 ;
-(void)resetWithReply:(id)arg0 ;
-(void)retryProcessedEvent:(NSInteger)arg0 reply:(id)arg1 ;
-(void)setCredential:(id)arg0 forProcessedEvent:(NSInteger)arg1 credentialType:(NSInteger)arg2 reply:(id)arg3 ;
-(void)setCredential:(id)arg0 type:(NSInteger)arg1 reply:(id)arg2 ;
-(void)setOptionAuthenticationReason:(id)arg0 ;
-(void)setOptionAuthenticationTitle:(id)arg0 ;
-(void)setOptionBiometryLockoutRecovery:(id)arg0 ;
-(void)setOptionBodyText:(id)arg0 ;
-(void)setOptionCallerAuditToken:(id)arg0 ;
-(void)setOptionCallerIconBundlePath:(id)arg0 ;
-(void)setOptionCallerName:(id)arg0 ;
-(void)setOptionCallerPID:(id)arg0 ;
-(void)setOptionCancelVisible:(id)arg0 ;
-(void)setOptionCheckApplePayEnabled:(id)arg0 ;
-(void)setOptionEventProcessing:(id)arg0 ;
-(void)setOptionFaceDetectLength:(id)arg0 ;
-(void)setOptionFallbackVisible:(id)arg0 ;
-(void)setOptionFingerMustBeOff:(id)arg0 ;
-(void)setOptionMatchForUnlock:(id)arg0 ;
-(void)setOptionMaxBiometryFailures:(id)arg0 ;
-(void)setOptionNoFailureUI:(id)arg0 ;
-(void)setOptionNotInteractive:(id)arg0 ;
-(void)setOptionPINCharset:(id)arg0 ;
-(void)setOptionPINFirst:(id)arg0 ;
-(void)setOptionPINLabel:(id)arg0 ;
-(void)setOptionPINLength:(id)arg0 ;
-(void)setOptionPINMaxLength:(id)arg0 ;
-(void)setOptionPINMinLength:(id)arg0 ;
-(void)setOptionPINTitle:(id)arg0 ;
-(void)setOptionPasscodeScreenBlur:(id)arg0 ;
-(void)setOptionPasscodeScreenStyle:(id)arg0 ;
-(void)setOptionPasscodeTitle:(id)arg0 ;
-(void)setOptionPasswordAuthenticationReason:(id)arg0 ;
-(void)setOptionPhysicalButtonTitle:(id)arg0 ;
-(void)setOptionPresentationStyle:(id)arg0 ;
-(void)setOptionReturnBiometryDatabaseHash:(id)arg0 ;
-(void)setOptionSecurePassphrase:(id)arg0 ;
-(void)setOptionSharedValidity:(id)arg0 ;
-(void)setOptionSoftwareUpdateManifest:(id)arg0 ;
-(void)setOptionSoftwareUpdateStashMode:(id)arg0 ;
-(void)setOptionTKAuthOperationError:(id)arg0 ;
-(void)setOptionTimeout:(id)arg0 ;
-(void)setOptionTintColor:(id)arg0 ;
-(void)setOptionTransitionStyle:(id)arg0 ;
-(void)setOptionUserCancel:(id)arg0 ;
-(void)setOptionUserFallback:(id)arg0 ;
-(void)setOptions:(id)arg0 forInternalOperation:(NSInteger)arg1 reply:(id)arg2 ;
-(void)setShowingCoachingHint:(BOOL)arg0 event:(NSInteger)arg1 reply:(id)arg2 ;


@end


#endif