// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CELLOUTRANKHANDLERSTM_H
#define CELLOUTRANKHANDLERSTM_H

@class NSArray, NSMutableDictionary, NSPredicate;
@protocol OS_dispatch_source;


#import "ExpertSystemHandlerCore.h"
#import "CellOutrankHandlerState.h"
#import "COSMStateSummary.h"

@interface CellOutrankHandlerSTM : ExpertSystemHandlerCore {
    unsigned int _administrativeState;
    CellOutrankHandlerState *_currentState;
    NSArray *_states;
    NSObject<OS_dispatch_source> *maintenanceTimer;
    COSMStateSummary *_lastStateSummaryCausingChange;
    CGFloat _lastStateSummaryCausingChangeTimestamp;
    COSMStateSummary *_lastStateSummaryProcessed;
    CGFloat _lastStateSummaryTimestamp;
    COSMStateSummary *_prevStateSummaryProcessed;
    CGFloat _prevStateSummaryTimestamp;
    BOOL _inDampeningPeriod;
    BOOL _inRegretAvoidanceOutrank;
    NSMutableDictionary *_predicatesByKey;
    NSMutableDictionary *_defaultPredicatesByKey;
}


@property (nonatomic) unsigned int activationIdentifier; // ivar: _activationIdentifier
@property (readonly, nonatomic) NSPredicate *armedEligiblePred;
@property (readonly, nonatomic) NSPredicate *captivityFrictionEligiblePred;
@property (readonly, nonatomic) NSPredicate *cellEligiblePred;
@property (readonly, nonatomic) NSPredicate *cellStatusOutrankExitEligiblePred;
@property (readonly, nonatomic) NSPredicate *deviceEligiblePred;
@property (nonatomic) BOOL dndWhileDriving; // ivar: _dndWhileDriving
@property (readonly, nonatomic) NSPredicate *forcedOutrankEligiblePred;
@property (nonatomic) BOOL systemForeground; // ivar: _systemForeground
@property (readonly, nonatomic) NSPredicate *userInitiatedFrictionEligiblePred;
@property (readonly, nonatomic) NSPredicate *wifiAmbientFrictionEligiblePred;
@property (readonly, nonatomic) NSPredicate *wifiEligiblePred;


-(BOOL)armedEntryAction:(id)arg0 ;
-(BOOL)armedExitAction:(id)arg0 ;
-(BOOL)idleEntryAction:(id)arg0 ;
-(BOOL)idleExitAction:(id)arg0 ;
-(BOOL)outrankEntryAction:(id)arg0 ;
-(BOOL)outrankExitAction:(id)arg0 ;
-(NSUInteger)currentQualifier;
-(id)_currentState;
-(id)_states;
-(id)armedToOutrankRegretAvoidancePred;
-(id)getState:(BOOL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)internalStateDictionary;
-(unsigned int)evaluateState:(id)arg0 ;
-(void)_bringStateToIdle;
-(void)_postUpwards:(NSUInteger)arg0 ;
-(void)administrativeDisable;
-(void)administrativeEnable;
-(void)completeInitialization;
-(void)dealloc;
-(void)populateDefaultPredicates;
-(void)restoreDefaults;
-(void)setConfiguration:(id)arg0 ;
-(void)valdateExitState:(id)arg0 originally:(id)arg1 ;


@end


#endif