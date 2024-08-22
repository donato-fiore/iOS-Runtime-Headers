// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMAUDIOACCESSORYMANAGER_H
#define CMAUDIOACCESSORYMANAGER_H


#import <Foundation/Foundation.h>


@interface CMAudioAccessoryManager : NSObject {
    id *_internal;
}


@property (readonly, nonatomic, getter=_isAudioAccessoryAccelerometerAvailable) BOOL _audioAccessoryAccelerometerAvailable;
@property (nonatomic, setter=_setAudioAccessoryAccelerometerUpdateInterval:) CGFloat _audioAccessoryAccelerometerUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryDeviceMotionAvailable) BOOL _audioAccessoryDeviceMotionAvailable;
@property (nonatomic, setter=_setAudioAccessoryDeviceMotionUpdateInterval:) CGFloat _audioAccessoryDeviceMotionUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryGyroAvailable) BOOL _audioAccessoryGyroAvailable;
@property (nonatomic, setter=_setAudioAccessoryGyroUpdateInterval:) CGFloat _audioAccessoryGyroUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryMagnetometerAvailable) BOOL _audioAccessoryMagnetometerAvailable;
@property (nonatomic, setter=_setAudioAccessoryMagnetometerUpdateInterval:) CGFloat _audioAccessoryMagnetometerUpdateInterval;


+(BOOL)_isAvailable;
+(BOOL)_selectActiveAudioRouteForAccelerometerWithBTAddress:(id)arg0 modelID:(id)arg1 ;
+(BOOL)_selectActiveAudioRouteForDeviceMotionWithBTAddress:(id)arg0 modelID:(id)arg1 ;
+(BOOL)_selectActiveAudioRouteForGyroWithBTAddress:(id)arg0 modelID:(id)arg1 ;
+(BOOL)_selectActiveAudioRouteForMagnetometerWithBTAddress:(id)arg0 modelID:(id)arg1 ;
+(BOOL)_selectActiveAudioRouteWithBTAddress:(id)arg0 modelID:(id)arg1 ;
-(id)_audioAccessoryAccelerometerData;
-(id)_audioAccessoryGyroData;
-(id)_audioAccessoryMagnetometerData;
-(id)init;
-(id)initPrivate;
-(void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(CGFloat)arg0 ;
-(void)_setAudioAccessoryDeviceMotionUpdateIntervalPrivate:(CGFloat)arg0 ;
-(void)_setAudioAccessoryGyroUpdateIntervalPrivate:(CGFloat)arg0 ;
-(void)_setAudioAccessoryMagnetometerUpdateIntervalPrivate:(CGFloat)arg0 ;
-(void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryDeviceMotionStatusUpdatesPrivate:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryDeviceMotionStatusUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryDeviceMotionUpdatesPrivate:(id)arg0 lowLatencyMode:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)_startAudioAccessoryDeviceMotionUpdatesToQueue:(id)arg0 lowLatencyMode:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)_startAudioAccessoryGyroUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryGyroUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryMagnetometerUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_startAudioAccessoryMagnetometerUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)_stopAudioAccessoryAccelerometerUpdates;
-(void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
-(void)_stopAudioAccessoryDeviceMotionStatusUpdates;
-(void)_stopAudioAccessoryDeviceMotionStatusUpdatesPrivate;
-(void)_stopAudioAccessoryDeviceMotionUpdates;
-(void)_stopAudioAccessoryDeviceMotionUpdatesPrivate;
-(void)_stopAudioAccessoryGyroUpdates;
-(void)_stopAudioAccessoryGyroUpdatesPrivate;
-(void)_stopAudioAccessoryMagnetometerUpdates;
-(void)_stopAudioAccessoryMagnetometerUpdatesPrivate;
-(void)dealloc;
-(void)deallocPrivate;
-(void)onAudioAccessoryAccelerometer:(struct Sample *)arg0 ;
-(void)onAudioAccessoryDeviceMotion:(*void)arg0 ;
-(void)onAudioAccessoryDeviceMotionConfig:(*void)arg0 ;
-(void)onAudioAccessoryDeviceMotionStatus:(*int)arg0 ;
-(void)onAudioAccessoryGyro:(struct Sample *)arg0 ;
-(void)onAudioAccessoryMagnetometer:(struct Sample *)arg0 ;


@end


#endif