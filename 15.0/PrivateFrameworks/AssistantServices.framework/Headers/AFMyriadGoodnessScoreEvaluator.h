// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMYRIADGOODNESSSCOREEVALUATOR_H
#define AFMYRIADGOODNESSSCOREEVALUATOR_H

@class NSString;
@protocol AFSettingsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "AFPreferences.h"
#import "AFSettingsConnection.h"

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _scoreEvaluationLock;
    unsigned char _myriadPlatformBias;
    AFInstanceContext *_deviceInstanceContext;
    NSUInteger _platformBiasAcquisitionState;
    AFPreferences *_pref;
    AFSettingsConnection *_settingsConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL evaluateForAudioAccessory; // ivar: _evaluateForAudioAccessory
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastActivationTime; // ivar: _lastActivationTime
@property (readonly) Class superclass;


-(id)initWithDeviceInstanceContext:(id)arg0 preferences:(id)arg1 queue:(id)arg2 ;
-(id)initWithDeviceInstanceContext:(id)arg0 queue:(id)arg1 ;
-(unsigned char)bumpGoodnessScore:(id)arg0 lastActivationTime:(CGFloat)arg1 mediaPlaybackInterruptedTime:(CGFloat)arg2 ignoreAdjustedBoost:(BOOL)arg3 ;
-(unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)arg0 ;
-(unsigned char)getPlatformBias;
-(unsigned char)getRecentBump:(CGFloat)arg0 ignoreAdjustedBoost:(BOOL)arg1 ;
-(void)_fetchDevicePlatformBiasIfRequired;
-(void)_settingsConnectionDidDisconnect;
-(void)_updatePlatformBias:(unsigned char)arg0 ;
-(void)preheat;


@end


#endif