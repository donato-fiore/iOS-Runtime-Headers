// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAENVOLUMECONTROL_H
#define HAENVOLUMECONTROL_H


#import <Foundation/Foundation.h>


@interface HAENVolumeControl : NSObject {
    int _pid;
    BOOL _EUVolumeLimitFlagOn;
    BOOL _SKVolumeLimitFlagOn;
    BOOL _haenFeatureEnabled;
    BOOL _mxVolumeLimitOn;
    BOOL _wiredHeadphoneConnected;
    float _targetVolume80dB;
    float _targetVolume74dB;
    ? _stats;
    os_unfair_lock_s _lock;
    BOOL _lowerHeadphoneVolumeAtNextSession;
}




+(id)sharedInstance;
-(BOOL)PME_enabled;
-(BOOL)_RLSAllowsMXVolumeLimit;
-(float)computeLimitedVolume:(float)arg0 event:(id)arg1 action:(*unsigned int)arg2 ;
-(float)getCurrentVolumeForCategory:(struct __CFString *)arg0 route:(struct ? *)arg1 ;
-(id)init;
-(struct ? )getStats;
-(unsigned int)limitVolume:(id)arg0 ;
-(void)_fetchCategory:(struct __CFString *)arg0 routeInfo:(struct ? *)arg1 ;
-(void)_setMXVolumeLimit:(BOOL)arg0 ;
-(void)_updateFlags;
-(void)_updateMXVolumeLimit;
-(void)applyVolumeLoweringAtNextSession;
-(void)limitVolumeTo:(float)arg0 category:(struct __CFString *)arg1 route:(struct ? *)arg2 actionResult:(*unsigned int)arg3 ;
-(void)setDeviceInfo:(id)arg0 ;
-(void)updateMXVolumeLimitStatus;
-(void)wiredHeadphoneConnected:(BOOL)arg0 ;


@end


#endif