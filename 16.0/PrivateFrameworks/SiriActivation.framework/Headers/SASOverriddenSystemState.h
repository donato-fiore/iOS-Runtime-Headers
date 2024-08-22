// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASOVERRIDDENSYSTEMSTATE_H
#define SASOVERRIDDENSYSTEMSTATE_H



#import "SASSystemState.h"
#import "SiriContextOverride.h"

@interface SASOverriddenSystemState : SASSystemState

@property (retain, nonatomic) SiriContextOverride *contextOverride; // ivar: _contextOverride
@property (retain, nonatomic) SASSystemState *systemState; // ivar: _systemState


-(BOOL)accessibilityShortcutEnabled;
-(BOOL)carDNDActive;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)hasUnlockedSinceBoot;
-(BOOL)isConnectedToCarPlay;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)isPad;
-(BOOL)pocketStateShouldPreventVoiceTrigger;
-(BOOL)siriIsEnabled;
-(BOOL)siriIsRestricted;
-(BOOL)siriIsSupported;
-(BOOL)smartCoverClosed;
-(id)currentSpokenLanguageCode;
-(id)initWithSystemState:(id)arg0 contextOverride:(id)arg1 ;
-(id)lockStateMonitor;
-(void)setLockStateMonitor:(id)arg0 ;


@end


#endif