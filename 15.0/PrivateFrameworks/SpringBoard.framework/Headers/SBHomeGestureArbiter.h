// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTUREARBITER_H
#define SBHOMEGESTUREARBITER_H

@class NSString, NSArray, NSMutableArray;
@protocol BSDescriptionProviding, SBHardwareButtonServiceObserver, BSInvalidatable, SBHomeGestureArbiterObserver;

#import <Foundation/Foundation.h>

#import "SBHardwareButtonService.h"
#import "SBHomeGestureParticipant.h"

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding, SBHardwareButtonServiceObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BSInvalidatable> *hardwareButtonObserverAssertion; // ivar: _hardwareButtonObserverAssertion
@property (weak, nonatomic) SBHardwareButtonService *hardwareButtonService; // ivar: _hardwareButtonService
@property (retain, nonatomic) SBHomeGestureParticipant *hardwareButtonServiceParticipant; // ivar: _hardwareButtonServiceParticipant
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBHomeGestureArbiterObserver> *observer; // ivar: _observer
@property (retain, nonatomic, getter=_owningParticipants, setter=_setOwningParticipants:) NSArray *owningParticipants; // ivar: _owningParticipants
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (retain, nonatomic) NSObject<BSInvalidatable> *stateCaptureHandle; // ivar: _stateCaptureHandle
@property (readonly) Class superclass;


-(id)currentParticipants;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithHardwareButtonService:(id)arg0 ;
-(id)participantWithIdentifier:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_registerParticipant:(id)arg0 ;
-(void)_unregisterParticipant:(id)arg0 ;
-(void)_updateHardwareButtonServiceParticipant;
-(void)_updateOwningParticipants;
-(void)buttonService:(id)arg0 buttonKind:(NSInteger)arg1 eventsConsumedDidChange:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif