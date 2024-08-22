// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFMYRIADGOODNESSSCOREEVALUATOR_H
#define AFMYRIADGOODNESSSCOREEVALUATOR_H

@class NSString;
@protocol AFSettingsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "AFPreferences.h"
#import "AFSettingsConnection.h"
#import "AFMyriadInstrumentation.h"

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _scoreEvaluationLock;
    unsigned char _myriadPlatformBias;
    AFInstanceContext *_deviceInstanceContext;
    NSUInteger _platformBiasAcquisitionState;
    AFPreferences *_pref;
    AFSettingsConnection *_settingsConnection;
    AFMyriadInstrumentation *_myriadInstrumentation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL evaluateForAudioAccessory; // ivar: _evaluateForAudioAccessory
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastActivationTime; // ivar: _lastActivationTime
@property (readonly) Class superclass;


-(BOOL)_supportsConfigurableBoost;
-(id)_createSettingsConnectionIfRequired;
-(id)initWithDeviceInstanceContext:(id)arg0 preferences:(id)arg1 queue:(id)arg2 ;
-(id)initWithDeviceInstanceContext:(id)arg0 preferences:(id)arg1 queue:(id)arg2 instrumentation:(id)arg3 ;
-(id)initWithDeviceInstanceContext:(id)arg0 queue:(id)arg1 ;
-(unsigned char)_bumpGoodnessScore:(id)arg0 lastActivationTime:(CGFloat)arg1 mediaPlaybackInterruptedTime:(CGFloat)arg2 ignoreAdjustedBoost:(BOOL)arg3 recentlyWonBySmallAmount:(BOOL)arg4 ;
-(unsigned char)_getRecentBump:(CGFloat)arg0 ignoreAdjustedBoost:(BOOL)arg1 recentlyWonBySmallAmount:(BOOL)arg2 ;
-(unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)arg0 ;
-(unsigned char)getPlatformBias;
-(void)_fetchDevicePlatformBiasIfRequired;
-(void)_settingsConnectionDidDisconnect;
-(void)_updateBiasValueWithDefault:(NSUInteger)arg0 ;
-(void)_updatePlatformBias:(unsigned char)arg0 ;
-(void)preheat;


@end


#endif