// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPREFLIGHTER_H
#define NPKPAYMENTPREFLIGHTER_H

@class PUConnection, NSSManager, NSDate, PKPaymentWebService;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

#import <Foundation/Foundation.h>

#import "NPKCompanionAgentConnection.h"

@interface NPKPaymentPreflighter : NSObject

@property (nonatomic) BOOL authRandomSetIfNecessary; // ivar: _authRandomSetIfNecessary
@property (nonatomic) BOOL checkedCompanioniCloudStatus; // ivar: _checkedCompanioniCloudStatus
@property (nonatomic) BOOL checkedWatchPasscodeAndUnlockedStatus; // ivar: _checkedWatchPasscodeAndUnlockedStatus
@property (nonatomic) BOOL checkedWatchiCloudStatus; // ivar: _checkedWatchiCloudStatus
@property (nonatomic) BOOL checkedWristDetectionStatus; // ivar: _checkedWristDetectionStatus
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // ivar: _companionAgentConnection
@property (nonatomic) BOOL needsCompanioniCloudAccount; // ivar: _needsCompanioniCloudAccount
@property (nonatomic) BOOL needsPasscode; // ivar: _needsPasscode
@property (nonatomic) BOOL needsSetAuthRandom; // ivar: _needsSetAuthRandom
@property (nonatomic) BOOL needsUnlock; // ivar: _needsUnlock
@property (nonatomic) BOOL needsWatchiCloudAccount; // ivar: _needsWatchiCloudAccount
@property (nonatomic) BOOL needsWristDetection; // ivar: _needsWristDetection
@property (retain, nonatomic) PUConnection *passcodeConnection; // ivar: _passcodeConnection
@property (copy, nonatomic) id *preflightCompletionHandler; // ivar: _preflightCompletionHandler
@property (nonatomic, getter=isPreflighting) BOOL preflighting; // ivar: _preflighting
@property (nonatomic) BOOL spaceAvailableOnSecureElement; // ivar: _spaceAvailableOnSecureElement
@property (retain, nonatomic) NSSManager *systemSettingsManager; // ivar: _systemSettingsManager
@property (weak, nonatomic) NSObject<PKPaymentWebServiceTargetDeviceProtocol> *targetDevice; // ivar: _targetDevice
@property (nonatomic) BOOL watchConnected; // ivar: _watchConnected
@property (retain, nonatomic) NSDate *watchPasscodeAndUnlockedQueryDate; // ivar: _watchPasscodeAndUnlockedQueryDate
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(id)_errorForCompanionAccountNeeded;
-(id)_errorForConnectionIssue;
-(id)_errorForGenericIssue;
-(id)_errorForGizmoAccountNeeded;
-(id)_errorForPasscodeNeeded;
-(id)_errorForUnlockNeeded;
-(id)_errorForWristDetectNeeded;
-(id)initWithWebService:(id)arg0 targetDevice:(id)arg1 companionAgentConnection:(id)arg2 ;
-(void)_checkCompanioniCloudAccount;
-(void)_checkPasscodeEnabledAndUnlockedState;
-(void)_checkPasscodeEnabledAndUnlockedStateRequiringPasscode:(BOOL)arg0 requiringUnlock:(BOOL)arg1 ;
-(void)_checkPasscodeEnabledState;
-(void)_checkSpaceAvailableOnSecureElement;
-(void)_checkWatchConnected;
-(void)_checkWatchiCloudAccount;
-(void)_checkWristDetectEnabledState;
-(void)_finishPresentingSetupControllerIfReadyWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_setAuthRandomIfNecessary;
-(void)addBiometricPassPreflightWithCompletion:(id)arg0 ;
-(void)addCardPreflightWithCompletion:(id)arg0 ;
-(void)addSecureElementPassPreflightWithCompletion:(id)arg0 ;
-(void)transferToCompanionPreflightWithCompletion:(id)arg0 ;


@end


#endif