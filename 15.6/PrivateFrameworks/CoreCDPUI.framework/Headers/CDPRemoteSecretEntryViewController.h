// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPREMOTESECRETENTRYVIEWCONTROLLER_H
#define CDPREMOTESECRETENTRYVIEWCONTROLLER_H

@class NSNumber, CDPDevice, NSString, CDPRemoteDeviceSecretValidator;
@protocol DevicePINControllerDelegate, CDPRemoteSecretEntryDelegate;


#import "CDPPassphraseEntryViewController.h"
#import "CDPRemoteValidationEscapeOffer.h"

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate>

 {
    BOOL _hasNumericSecret;
    NSNumber *_numericSecretLength;
    CDPDevice *_remoteRecoveryDevice;
    NSInteger _remainingAttempts;
    id<CDPRemoteSecretEntryDelegate> *_delegate;
    NSUInteger _validationState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // ivar: _escapeOffer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CDPRemoteDeviceSecretValidator *validator; // ivar: _validator


-(BOOL)pinIsAcceptable:(id)arg0 outError:(*id)arg1 ;
-(BOOL)simplePIN;
-(BOOL)useProgressiveDelays;
-(BOOL)validatePIN:(id)arg0 ;
-(id)initWithDevice:(id)arg0 validator:(id)arg1 delegate:(id)arg2 ;
-(id)initWithIsNumeric:(BOOL)arg0 numericLength:(id)arg1 validator:(id)arg2 delegate:(id)arg3 ;
-(id)initWithValidator:(id)arg0 ;
-(id)pinInstructionsPrompt;
-(id)title;
-(void)_handleSecretValidationWithPasscode:(id)arg0 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)didEnterValidRemoteSecret:(id)arg0 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(void)setPane:(id)arg0 ;
-(void)showIncorrectRemoteSecretAlertForPasscode:(id)arg0 withRecoveryError:(id)arg1 completion:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif