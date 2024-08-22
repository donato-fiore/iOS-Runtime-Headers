// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNCSOUNDCONTROLLER_H
#define SBNCSOUNDCONTROLLER_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>

#import "SBLockScreenManager.h"
#import "SBLockStateAggregator.h"

@interface SBNCSoundController : NSObject

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // ivar: _lockStateAggregator
@property (retain, nonatomic) NSMutableDictionary *playingSounds; // ivar: _playingSounds
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill; // ivar: _requestsRequiringExplicitKill


-(BOOL)_isDeviceUILocked;
-(BOOL)canPlaySoundForNotificationRequest:(id)arg0 ;
-(id)init;
-(id)initWithLockScreenManager:(id)arg0 lockStateAggregator:(id)arg1 ;
-(void)_hardwareButtonPressed:(id)arg0 ;
-(void)_killSounds;
-(void)_lockStateChanged:(id)arg0 ;
-(void)playSoundForNotificationRequest:(id)arg0 presentingDestination:(id)arg1 ;
-(void)playSoundIfPossibleForNotificationRequest:(id)arg0 presentingDestination:(id)arg1 ;
-(void)stopSoundForNotificationRequest:(id)arg0 ;


@end


#endif