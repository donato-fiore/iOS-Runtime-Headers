// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFACCOUNTVALIDATOR_H
#define MFACCOUNTVALIDATOR_H

@class NSArray;
@protocol MFAccountValidatorDelegate;

#import <Foundation/Foundation.h>

#import "MFAccount.h"
#import "MFActivityMonitor.h"
#import "MFMonitoredInvocation.h"
#import "MFError.h"

@interface MFAccountValidator : NSObject {
    MFAccount *_account;
    MFActivityMonitor *_accountValidationActivity;
    MFMonitoredInvocation *_validationInvocation;
    id *_completionBlock;
    ? _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
}


@property (readonly, nonatomic) MFAccount *account;
@property (readonly, nonatomic) BOOL accountIsValid;
@property (readonly, nonatomic) BOOL accountSupportsSSL;
@property (weak, nonatomic) NSObject<MFAccountValidatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MFError *error;
@property (readonly, nonatomic) BOOL performsValidationInBackground;
@property (readonly, nonatomic) MFMonitoredInvocation *validationInvocation;


-(BOOL)_incomingServerValid;
-(BOOL)_outgoingServerValid;
-(id)_ispAccountInfo;
-(id)init;
-(id)initWithPerformsValidationInBackground:(BOOL)arg0 ;
-(void)_backgroundValidateAccountFinished:(id)arg0 authSchemes:(id)arg1 ;
-(void)_validateAccount:(id)arg0 ;
-(void)_validateAccount:(id)arg0 withFallbacks:(BOOL)arg1 ;
-(void)_validateAccountWithoutFallbacks:(id)arg0 ;
-(void)cancelValidation;
-(void)dealloc;
-(void)stop;
-(void)validateAccount:(id)arg0 useSSL:(BOOL)arg1 ;
-(void)validateAccount:(id)arg0 useSSL:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg0 ;
-(void)validateAccountWithoutFallbacks:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif