// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDDSPAUDIODEVICE_H
#define ASDDSPAUDIODEVICE_H

@class NSString;
@protocol ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate;


#import "ASDAudioDevice.h"
#import "ASDAudioDeviceDSPConfiguration.h"
#import "ASDAudioDeviceDSPDatabase.h"

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate>

 {
    NSString *_resourcePath;
}


@property (retain, nonatomic) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration; // ivar: _currentDSPConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASDAudioDeviceDSPDatabase *dspDatabase; // ivar: _dspDatabase
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice; // ivar: _underlyingDevice


+(id)dspItemsInConfiguration:(id)arg0 notInConfiguration:(id)arg1 ;
-(BOOL)applyDeviceDSPConfiguration:(id)arg0 ;
-(BOOL)applyStreamDSPConfiguration:(id)arg0 toStream:(id)arg1 ;
-(BOOL)canBeDefaultDevice;
-(BOOL)canBeDefaultInputDevice;
-(BOOL)canBeDefaultOutputDevice;
-(BOOL)canBeDefaultSystemDevice;
-(BOOL)changeSamplingRate:(CGFloat)arg0 ;
-(BOOL)clockIsStable;
-(BOOL)isHidden;
-(BOOL)requestConfigurationChangeForDevice:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)underlyingDeviceHasAllProperties:(id)arg0 ;
-(BOOL)updateDeviceDSPConfiguration;
-(CGFloat)samplingRate;
-(id)deviceName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)findDSPConfigurationForCurrentState;
-(id)getZeroTimestampBlock:(SEL)arg0 ;
-(id)initWithDeviceUID:(id)arg0 underlyingDevice:(id)arg1 deviceDSPDatabase:(id)arg2 plugin:(id)arg3 ;
-(id)manufacturerName;
-(id)modelName;
-(id)modelUID;
-(id)samplingRates;
-(id)willDoReadInputBlock:(SEL)arg0 ;
-(id)willDoWriteMixBlock:(SEL)arg0 ;
-(int)startIOForClient:(unsigned int)arg0 ;
-(int)stopIOForClient:(unsigned int)arg0 ;
-(unsigned int)clockAlgorithm;
-(unsigned int)clockDomain;
-(unsigned int)inputLatency;
-(unsigned int)inputSafetyOffset;
-(unsigned int)outputLatency;
-(unsigned int)outputSafetyOffset;
-(unsigned int)timestampPeriod;
-(unsigned int)transportType;
-(void)addInputStream:(id)arg0 ;
-(void)addOutputStream:(id)arg0 ;
-(void)changedProperty:(struct AudioObjectPropertyAddress *)arg0 forObject:(id)arg1 ;
-(void)removeInputStream:(id)arg0 ;
-(void)removeOutputStream:(id)arg0 ;
-(void)setDeviceName:(id)arg0 ;
-(void)setSamplingRate:(CGFloat)arg0 ;


@end


#endif