// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDSRCAUDIODEVICE_H
#define ASDSRCAUDIODEVICE_H

@class NSArray, NSString;
@protocol ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate, OS_dispatch_queue;


#import "ASDAudioDevice.h"

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate>

 {
    CGFloat _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    ? _lastTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice; // ivar: _underlyingDevice


-(BOOL)canBeDefaultDevice;
-(BOOL)canBeDefaultInputDevice;
-(BOOL)canBeDefaultOutputDevice;
-(BOOL)canBeDefaultSystemDevice;
-(BOOL)changeSamplingRate:(CGFloat)arg0 ;
-(BOOL)clockIsStable;
-(BOOL)isHidden;
-(BOOL)requestConfigurationChangeForDevice:(id)arg0 withBlock:(id)arg1 ;
-(CGFloat)sampleRateRatio;
-(CGFloat)samplingRate;
-(id)deviceName;
-(id)getZeroTimestampBlock:(SEL)arg0 ;
-(id)initWithDeviceUID:(id)arg0 underlyingDevice:(id)arg1 plugin:(id)arg2 ;
-(id)manufacturerName;
-(id)modelName;
-(id)modelUID;
-(id)samplingRates;
-(id)willDoReadInputBlock:(SEL)arg0 ;
-(id)willDoWriteMixBlock:(SEL)arg0 ;
-(int)performStopIO;
-(int)startIOForClient:(unsigned int)arg0 ;
-(int)stopIOForClient:(unsigned int)arg0 ;
-(unsigned int)clockAlgorithm;
-(unsigned int)clockDomain;
-(unsigned int)inputSafetyOffset;
-(unsigned int)outputSafetyOffset;
-(unsigned int)timestampPeriod;
-(unsigned int)transportType;
-(void)changedProperty:(struct AudioObjectPropertyAddress *)arg0 forObject:(id)arg1 ;
-(void)setDeviceName:(id)arg0 ;
-(void)setSamplingRate:(CGFloat)arg0 ;
-(void)setSamplingRates:(id)arg0 ;


@end


#endif