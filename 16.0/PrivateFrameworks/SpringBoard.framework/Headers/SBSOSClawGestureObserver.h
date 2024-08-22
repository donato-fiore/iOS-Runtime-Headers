// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSOSCLAWGESTUREOBSERVER_H
#define SBSOSCLAWGESTUREOBSERVER_H

@class SOSManager, NSMutableSet, NSString, SBSOSDefaults, BSAbsoluteMachTimer;
@protocol SOSManagerClientObserver, SBVolumePressBandit, SBSOSClawGestureObserverDelegate;

#import <Foundation/Foundation.h>

#import "SBMainWorkspace.h"

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit>

 {
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
}


@property (retain, nonatomic) NSMutableSet *activePressTypes; // ivar: _activePressTypes
@property (readonly, nonatomic, getter=_isAutomaticCallCountdownEnabled) BOOL autoCallCountdownEnabled;
@property (readonly, nonatomic, getter=isClawActivated) BOOL clawActivated;
@property (readonly, nonatomic, getter=_isClawGestureActive) BOOL clawGestureActive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSOSClawGestureObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled; // ivar: _gestureLoggingEnabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_isSOSActivated) BOOL sosActivated;
@property (retain, nonatomic, setter=_setSOSDefaults:) SBSOSDefaults *sosDefaults; // ivar: _sosDefaults
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled; // ivar: _sosEnabled
@property (retain, nonatomic) BSAbsoluteMachTimer *sosTriggerTimer; // ivar: _sosTriggerTimer
@property (readonly) Class superclass;
@property (nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) BOOL wasSOSTiggeredByClaw; // ivar: _wasSOSTiggeredByClaw


-(id)_initWithSOSManager:(id)arg0 workspace:(id)arg1 ;
-(id)init;
-(void)_cancelSOSActivity;
-(void)_presentSOSInterface;
-(void)dealloc;
-(void)didUpdateCurrentSOSInitiationState:(NSInteger)arg0 ;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)noteButtonPress:(NSInteger)arg0 isDown:(BOOL)arg1 ;
-(void)noteGestureReset;


@end


#endif