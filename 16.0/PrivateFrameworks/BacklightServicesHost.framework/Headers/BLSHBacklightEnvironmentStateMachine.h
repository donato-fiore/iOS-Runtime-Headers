// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTENVIRONMENTSTATEMACHINE_H
#define BLSHBACKLIGHTENVIRONMENTSTATEMACHINE_H

@class NSMapTable, NSMutableSet, NSMutableArray, NSString, NSSet;
@protocol BLSHEnvironmentTransitionStateDelegate, BSInvalidatable, BLSHBacklightEnvironmentStateMachineDelegate, BLSHInactiveBudgetPolicing_Private, BLSHOSTimerProviding;

#import <Foundation/Foundation.h>

#import "BLSHBacklightEnvironmentPresentation.h"
#import "BLSHPresentationDateSpecifier.h"

@interface BLSHBacklightEnvironmentStateMachine : NSObject <BLSHEnvironmentTransitionStateDelegate, BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BLSHBacklightEnvironmentPresentation *_presentation;
    NSMapTable *_transitionStates;
    NSMutableSet *_updatingVisualStateTransitionStates;
    NSMutableSet *_updatingDateSpecifierTransitionStates;
    BLSHPresentationDateSpecifier *_updatingSpecifier;
    NSMutableArray *_performEventHistory;
    NSMutableArray *_didBeginUpdateHistory;
    NSMutableArray *_didCompleteUpdateHistory;
    NSInteger _backlightState;
    BOOL _pendingNotifyBeganUpdatingState;
    BOOL _updatingState;
    BOOL _updatingPresentation;
    BOOL _lock_invalidated;
    NSUInteger _stateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<BLSHBacklightEnvironmentStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BLSHInactiveBudgetPolicing_Private> *inactiveBudgetPolicy; // ivar: _inactiveBudgetPolicy
@property (readonly, nonatomic) NSObject<BLSHOSTimerProviding> *osTimerProvider; // ivar: _osTimerProvider
@property (readonly, nonatomic) BOOL pendingNotifyBeganUpdatingState;
@property (retain, nonatomic) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *updatingDateSpecifierTransitionStates;
@property (readonly, nonatomic, getter=isUpdatingPresentation) BOOL updatingPresentation;
@property (readonly, nonatomic, getter=isUpdatingState) BOOL updatingState;
@property (readonly, copy, nonatomic) NSSet *updatingVisualStateTransitionStates;


-(id)initWithPresentation:(id)arg0 backlightState:(NSInteger)arg1 delegate:(id)arg2 inactiveBudgetPolicy:(id)arg3 osTimerProvider:(id)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)performEvent:(id)arg0 withInitialSpecifier:(id)arg1 performBacklightRamp:(id)arg2 ;
-(void)populateEnvironmentStateMachineStruct:(struct ? *)arg0 ;
-(void)transitionState:(id)arg0 didBeginUpdateToBacklightState:(NSInteger)arg1 visualState:(id)arg2 ;
-(void)transitionState:(id)arg0 didCompleteUpdateToBacklightState:(NSInteger)arg1 visualState:(id)arg2 ;
-(void)transitionState:(id)arg0 didUpdateToDateSpecifier:(id)arg1 ;
-(void)updateAllEnvironmentsInPresentation;
-(void)updateEnvironment:(id)arg0 ;
-(void)updateToSpecifier:(id)arg0 ;


@end


#endif