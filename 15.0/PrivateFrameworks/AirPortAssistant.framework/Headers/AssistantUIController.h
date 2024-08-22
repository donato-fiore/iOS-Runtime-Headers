// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSISTANTUICONTROLLER_H
#define ASSISTANTUICONTROLLER_H

@class NSDictionary, NSArray, NSMutableDictionary, NSString;
@protocol AutoGuessUIDelegate, SetupUIDelegate, StepByStepUIDelegate, AssistantUIDelegateResult, SetupUIConfigDelegate;

#import <Foundation/Foundation.h>

#import "AutoGuessController.h"
#import "AUSetupController.h"
#import "StepByStepController.h"

@interface AssistantUIController : NSObject <AutoGuessUIDelegate, SetupUIDelegate, StepByStepUIDelegate, AssistantUIDelegateResult, SetupUIConfigDelegate>



@property (readonly) int assistantResult; // ivar: _assistantResult
@property (retain) AutoGuessController *autoGuessController; // ivar: _autoGuessController
@property (readonly) int connectionStatusSelectorAwaitingResolution; // ivar: _connectionStatusSelectorAwaitingResolution
@property id *delegate; // ivar: _delegate
@property (retain) NSDictionary *guessCompleteDict; // ivar: _guessCompleteDict
@property (retain) NSDictionary *lastAssociatedInfo; // ivar: _lastAssociatedInfo
@property (retain) NSDictionary *lastAutoguessInstrumentation; // ivar: _lastAutoguessInstrumentation
@property (retain) NSDictionary *lastSetupInstrumentation; // ivar: _lastSetupInstrumentation
@property (retain) NSDictionary *lastStepByStepInstrumentation; // ivar: _lastStepByStepInstrumentation
@property (retain) NSArray *paramScanResults; // ivar: _paramScanResults
@property (retain) AUSetupController *setupController; // ivar: _setupController
@property (retain) NSMutableDictionary *setupOptions; // ivar: _setupOptions
@property (readonly) int state; // ivar: _state
@property (retain) StepByStepController *stepByStepController; // ivar: _stepByStepController
@property (retain) NSDictionary *targetBrowseRecord; // ivar: _targetBrowseRecord
@property (retain) NSString *targetMACAddress; // ivar: _targetMACAddress
@property (retain) NSDictionary *targetScanRecord; // ivar: _targetScanRecord


-(BOOL)restoreNetworkIfNeeded:(BOOL)arg0 disassociateIfNeeded:(BOOL)arg1 forceQuit:(BOOL)arg2 ;
-(id)init;
-(id)modifyTopoUIInLayer:(id)arg0 withLayout:(id)arg1 andOwningView:(id)arg2 targetProductID:(id)arg3 targetDeviceKind:(id)arg4 targetName:(id)arg5 targetWiFiName:(id)arg6 sourceProductID:(id)arg7 sourceDeviceKind:(id)arg8 sourceName:(id)arg9 sourceWiFiName:(id)arg10 connectionType:(id)arg11 ;
-(id)setupPromptStringForBaseInfo:(id)arg0 andResult:(int)arg1 ;
-(int)cancelCurrentAssistantState:(BOOL)arg0 ;
-(int)doneWithAssistant:(BOOL)arg0 ;
-(int)startAutoGuess;
-(int)startRestoreFromAutoGuessRecommendation;
-(int)startRestoreNetwork:(id)arg0 ;
-(int)startSetupFromAutoGuessRecommendation:(id)arg0 ;
-(int)startSetupFromStepByStepResults:(id)arg0 ;
-(int)startStepByStepFromAutoGuessRecommendation;
-(void)autoguessProgressComplete:(id)arg0 ;
-(void)autoguessProgressUpdated:(int)arg0 paramString:(id)arg1 ;
-(void)autoguessUpdateTargetInfo:(id)arg0 ;
-(void)dealloc;
-(void)deliverSetupUIConfigResult:(int)arg0 withOptions:(id)arg1 ;
-(void)handlePresentAutoGuessUIFromAutoGuessCompleteResult:(BOOL)arg0 ;
-(void)presentUIForConnectionVerification:(int)arg0 status:(int)arg1 paramDict:(id)arg2 ;
-(void)presentUIForConnectionVerificationResult:(int)arg0 withOptions:(id)arg1 ;
-(void)presentUIForStepByStepNextStepResult:(int)arg0 withOptions:(id)arg1 ;
-(void)presentUIForUIConfigPrompt:(int)arg0 paramDict:(id)arg1 ;
-(void)restoreNetworkDone:(id)arg0 ;
-(void)setupCompleteWithResult:(int)arg0 baseStationInfo:(id)arg1 forController:(id)arg2 ;
-(void)setupProgressUpdated:(int)arg0 status:(int)arg1 paramDict:(id)arg2 forController:(id)arg3 ;
-(void)setupUIConfigConnectionStatusUpdated:(int)arg0 status:(int)arg1 paramDict:(id)arg2 forController:(id)arg3 ;
-(void)setupUIConfigPrompt:(int)arg0 paramDict:(id)arg1 forController:(id)arg2 ;
-(void)showUIConfigPromptResult:(int)arg0 withOptions:(id)arg1 ;
-(void)stepByStepCompleteWithResult:(int)arg0 paramDict:(id)arg1 ;
-(void)stepByStepNextStep:(int)arg0 paramDict:(id)arg1 ;
-(void)stepByStepProgressUpdated:(int)arg0 status:(int)arg1 paramString:(id)arg2 ;


@end


#endif