// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAUTHENTICATOREVALUATIONREQUEST_H
#define PKAUTHENTICATOREVALUATIONREQUEST_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface PKAuthenticatorEvaluationRequest : NSObject

@property (copy, nonatomic) NSNumber *PINLength; // ivar: _PINLength
@property (copy, nonatomic) NSString *PINTitle; // ivar: _PINTitle
@property (nonatomic) *__SecAccessControl accessControlRef; // ivar: _accessControlRef
@property (nonatomic) BOOL assumeBiometricOrPasscodeAvailable; // ivar: _assumeBiometricOrPasscodeAvailable
@property (nonatomic) BOOL assumeUserIntentAvailable; // ivar: _assumeUserIntentAvailable
@property (retain, nonatomic) NSData *externalizedContext; // ivar: _externalizedContext
@property (nonatomic) BOOL hasInitialAuthenticatorState; // ivar: _hasInitialAuthenticatorState
@property (nonatomic) NSUInteger initialAuthenticatorState; // ivar: _initialAuthenticatorState
@property (nonatomic) BOOL passcodeOnly; // ivar: _passcodeOnly
@property (copy, nonatomic) NSString *passcodeTitle; // ivar: _passcodeTitle
@property (copy, nonatomic) NSString *physicalButtonTitle; // ivar: _physicalButtonTitle
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (copy, nonatomic) NSNumber *processIdentifier; // ivar: _processIdentifier
@property (copy, nonatomic) NSString *processName; // ivar: _processName
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL useStockAuthInterface; // ivar: _useStockAuthInterface


-(id)init;
-(id)initWithPolicy:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif