// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MECHANISMBASE_H
#define MECHANISMBASE_H

@class NSDictionary, NSMutableDictionary, NSMutableArray, EvaluationRequest, NSError;
@protocol LAUIDelegate, LAContextExternalizationProt;

#import <Foundation/Foundation.h>

#import "MechanismContext.h"
#import "MechanismBase.h"

@interface MechanismBase : NSObject <LAUIDelegate>

 {
    id *_replyToRun;
    MechanismContext *_mechanismContext;
    NSDictionary *_eventProcessing;
    NSMutableDictionary *_hints;
    unsigned int _instanceId;
}


@property (retain, nonatomic) NSDictionary *activationParams; // ivar: _activationParams
@property (readonly, nonatomic) NSMutableArray *assertions; // ivar: _assertions
@property (readonly, weak, nonatomic) NSObject<LAContextExternalizationProt> *cachedExternalizationDelegate; // ivar: _cachedExternalizationDelegate
@property (readonly, nonatomic) NSInteger eventIdentifier; // ivar: _eventIdentifier
@property (weak, nonatomic) NSObject<LAUIDelegate> *eventsDelegate; // ivar: _eventsDelegate
@property (readonly, nonatomic) NSDictionary *internalOptions; // ivar: _internalOptions
@property (readonly, nonatomic, getter=isLastRestartAttempt) BOOL lastRestartAttempt; // ivar: _lastRestartAttempt
@property (weak, nonatomic) MechanismBase *parent; // ivar: _parent
@property (retain, nonatomic) NSMutableDictionary *partialResult; // ivar: _partialResult
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, nonatomic) NSDictionary *policyOptions; // ivar: _policyOptions
@property (retain, nonatomic) MechanismBase *postCompanion; // ivar: _postCompanion
@property (retain, nonatomic) MechanismBase *preCompanion; // ivar: _preCompanion
@property (readonly, nonatomic) BOOL precedesUI; // ivar: _precedesUI
@property (readonly, nonatomic) NSInteger remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic) EvaluationRequest *request; // ivar: _request
@property (readonly, nonatomic, getter=isRestartable) BOOL restartable; // ivar: _restartable
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (copy, nonatomic) id *showUIBlock; // ivar: _showUIBlock
@property (retain, nonatomic) NSError *silentFailure; // ivar: _silentFailure


+(unsigned int)newInstanceId;
-(BOOL)_isProcessedBy:(id)arg0 ;
-(BOOL)isAvailableForPurpose:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isTCCAllowedWithAuditTokenData:(id)arg0 optionAuditTokenData:(id)arg1 forcePrompt:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)pause:(BOOL)arg0 forEvent:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)arg0 ;
-(BOOL)requiresUiWithEventProcessing:(id)arg0 ;
-(NSInteger)remoteViewControllerForEventProcessing:(id)arg0 ;
-(id)additionalControllerInternalInfoForPolicy:(NSInteger)arg0 ;
-(id)availabilityEventsForPurpose:(NSInteger)arg0 ;
-(id)backgroundMechanismForEventProcessing:(id)arg0 ;
-(id)bestEffortAvailableMechanismForRequest:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)descriptionFlags;
-(id)externalizedContext;
-(id)findMechanismToRetryWithEventIdentifier:(NSInteger)arg0 ;
-(id)findMechanismWithEventIdentifier:(NSInteger)arg0 ;
-(id)initWithEventIdentifier:(NSInteger)arg0 remoteViewController:(NSInteger)arg1 cachedExternalizationDelegate:(id)arg2 request:(id)arg3 ;
-(id)initWithParams:(id)arg0 request:(id)arg1 ;
-(id)remoteAlertViewControllerName;
-(id)tccError:(BOOL)arg0 ;
-(id)tccService;
-(void)cancelAuthentication;
-(void)cancelByParent:(id)arg0 ;
-(void)companionStateChanged:(id)arg0 newState:(BOOL)arg1 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)failAuthenticationWithError:(id)arg0 ;
-(void)fallbackToIdentifier:(NSInteger)arg0 ;
-(void)finishRunWithResult:(id)arg0 error:(id)arg1 ;
-(void)finishRunWithResult:(id)arg0 error:(id)arg1 skipReply:(BOOL)arg2 ;
-(void)holdAssertionUntilFinished:(id)arg0 ;
-(void)noResponseEventWithParams:(id)arg0 ;
-(void)prepareForRestart;
-(void)restartWithEventIdentifier:(NSInteger)arg0 lastAttempt:(BOOL)arg1 ;
-(void)runWithHints:(id)arg0 eventsDelegate:(id)arg1 reply:(id)arg2 ;
-(void)setCredential:(id)arg0 credentialType:(NSInteger)arg1 reply:(id)arg2 ;
-(void)setShowingCoachingHint:(BOOL)arg0 reply:(id)arg1 ;
-(void)subMechanismCanRestart:(id)arg0 ;
-(void)succeedAuthenticationWithDefaultResult;
-(void)succeedAuthenticationWithResult:(id)arg0 ;
-(void)willFinish;
-(void)yieldPartialResult:(NSInteger)arg0 value:(id)arg1 ;
-(void)yieldPartialResult:(id)arg0 ;


@end


#endif