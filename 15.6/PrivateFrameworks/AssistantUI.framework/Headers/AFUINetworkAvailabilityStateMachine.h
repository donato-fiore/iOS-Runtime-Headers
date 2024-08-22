// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUINETWORKAVAILABILITYSTATEMACHINE_H
#define AFUINETWORKAVAILABILITYSTATEMACHINE_H

@class NSString, RadiosPreferences, SRUIFStateMachine;
@protocol SRUIFStateMachineDelegate, RadiosPreferencesDelegate, AFUINetworkAvailabilityStateMachineDelegate;

#import <Foundation/Foundation.h>


@interface AFUINetworkAvailabilityStateMachine : NSObject <SRUIFStateMachineDelegate, RadiosPreferencesDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUINetworkAvailabilityStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RadiosPreferences *radioPreferences; // ivar: _radioPreferences
@property (retain, nonatomic) SRUIFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(NSInteger)_state;
-(id)initWithDelegate:(id)arg0 ;
-(id)stateMachine:(id)arg0 descriptionForEvent:(NSInteger)arg1 ;
-(void)_performTransitionForEvent:(NSInteger)arg0 ;
-(void)_siriNetworkAvailabilityDidChange:(NSUInteger)arg0 ;
-(void)airplaneModeChanged;
-(void)siriNetworkAvailabilityDidChange;
-(void)stateMachine:(id)arg0 didTransitionFromState:(NSInteger)arg1 forEvent:(NSInteger)arg2 ;


@end


#endif