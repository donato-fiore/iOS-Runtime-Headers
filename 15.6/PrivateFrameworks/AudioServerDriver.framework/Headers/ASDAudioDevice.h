// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDAUDIODEVICE_H
#define ASDAUDIODEVICE_H

@class NSMutableArray, NSArray, NSString, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, ASDDeviceConfigurationChangeDelegate;


#import "ASDObject.h"

@interface ASDAudioDevice : ASDObject {
    NSMutableArray *_inputStreams;
    NSObject<OS_dispatch_queue> *_inputStreamQueue;
    NSMutableArray *_outputStreams;
    NSObject<OS_dispatch_queue> *_outputStreamQueue;
    NSMutableArray *_controls;
    NSObject<OS_dispatch_queue> *_controlQueue;
    CGFloat _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    NSInteger _ioReferenceCount;
    NSObject<OS_dispatch_queue> *_ioReferenceQueue;
    NSString *_deviceName;
    unsigned int _timestampPeriod;
    unsigned int _transportType;
    unsigned int _clockDomain;
    unsigned int _clockAlgorithm;
    BOOL _clockIsStable;
    NSObject<OS_dispatch_semaphore> *_wakeSemaphore;
    NSDictionary *_clientDescription;
    NSDictionary *_deviceDescription;
    BOOL _isAlive;
    BOOL _isRunning;
    unsigned int _inputLatency;
    unsigned int _outputLatency;
    unsigned int _inputSafetyOffset;
    unsigned int _outputSafetyOffset;
    id *_getZeroTimestampBlockUnretained;
    id *_willDoReadInputBlockUnretained;
    id *_willDoConvertInputBlockUnretained;
    id *_willDoProcessInputBlockUnretained;
    id *_willDoProcessOutputBlockUnretained;
    id *_willDoMixOutputBlockUnretained;
    id *_willDoProcessMixBlockUnretained;
    id *_willDoConvertMixBlockUnretained;
    id *_willDoWriteMixBlockUnretained;
    id *_beginIOOperationBlockUnretained;
    id *_endIOOperationBlockUnretained;
}


@property (copy, nonatomic) id *beginIOOperationBlock; // ivar: _beginIOOperationBlock
@property (readonly, nonatomic) *id beginIOOperationBlockUnretainedPtr;
@property (nonatomic) BOOL canBeDefaultDevice; // ivar: _canBeDefaultDevice
@property (nonatomic) BOOL canBeDefaultInputDevice; // ivar: _canBeDefaultInputDevice
@property (nonatomic) BOOL canBeDefaultOutputDevice; // ivar: _canBeDefaultOutputDevice
@property (nonatomic) BOOL canBeDefaultSystemDevice; // ivar: _canBeDefaultSystemDevice
@property (nonatomic) BOOL canChangeDeviceName; // ivar: _canChangeDeviceName
@property (copy, nonatomic) NSDictionary *clientDescription;
@property (nonatomic) unsigned int clockAlgorithm;
@property (nonatomic) unsigned int clockDomain;
@property (nonatomic) BOOL clockIsStable;
@property (copy, nonatomic) NSString *configurationBundleID; // ivar: _configurationBundleID
@property (weak, nonatomic) NSObject<ASDDeviceConfigurationChangeDelegate> *configurationChangeDelegate; // ivar: _configurationChangeDelegate
@property (copy, nonatomic) NSDictionary *deviceDescription;
@property (copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (copy, nonatomic) id *endIOOperationBlock; // ivar: _endIOOperationBlock
@property (readonly, nonatomic) *id endIOOperationBlockUnretainedPtr;
@property (copy, nonatomic) id *getZeroTimestampBlock; // ivar: _getZeroTimestampBlock
@property (readonly, nonatomic) *id getZeroTimestampBlockUnretainedPtr;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasOutput;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) unsigned int inputLatency;
@property (nonatomic) unsigned int inputSafetyOffset;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *ioReferenceQueue;
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *modelUID; // ivar: _modelUID
@property (nonatomic) unsigned int outputLatency;
@property (nonatomic) unsigned int outputSafetyOffset;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) CGFloat samplingRate;
@property (copy, nonatomic) NSArray *samplingRates;
@property (nonatomic) unsigned int timestampPeriod;
@property (nonatomic) unsigned int transportType;
@property (copy, nonatomic) id *willDoConvertInputBlock; // ivar: _willDoConvertInputBlock
@property (readonly, nonatomic) *id willDoConvertInputBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoConvertMixBlock; // ivar: _willDoConvertMixBlock
@property (readonly, nonatomic) *id willDoConvertMixBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoMixOutputBlock; // ivar: _willDoMixOutputBlock
@property (readonly, nonatomic) *id willDoMixOutputBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoProcessInputBlock; // ivar: _willDoProcessInputBlock
@property (readonly, nonatomic) *id willDoProcessInputBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoProcessMixBlock; // ivar: _willDoProcessMixBlock
@property (readonly, nonatomic) *id willDoProcessMixBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoProcessOutputBlock; // ivar: _willDoProcessOutputBlock
@property (readonly, nonatomic) *id willDoProcessOutputBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoReadInputBlock; // ivar: _willDoReadInputBlock
@property (readonly, nonatomic) *id willDoReadInputBlockUnretainedPtr;
@property (copy, nonatomic) id *willDoWriteMixBlock; // ivar: _willDoWriteMixBlock
@property (readonly, nonatomic) *id willDoWriteMixBlockUnretainedPtr;


-(BOOL)changeClientDescription:(id)arg0 ;
-(BOOL)changeDeviceName:(id)arg0 ;
-(BOOL)changeSamplingRate:(CGFloat)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)controls;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)getProperty:(id)arg0 ;
-(id)initWithDeviceUID:(id)arg0 withPlugin:(id)arg1 ;
-(id)initWithPlugin:(id)arg0 ;
-(id)inputStreams;
-(id)outputStreams;
-(int)addClient:(struct AudioServerPlugInClientInfo *)arg0 ;
-(int)performStartIO;
-(int)performStopIO;
-(int)removeClient:(struct AudioServerPlugInClientInfo *)arg0 ;
-(int)startIOForClient:(unsigned int)arg0 ;
-(int)stopIOForClient:(unsigned int)arg0 ;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(unsigned int)numberOfChannelsInLayoutForScope:(unsigned int)arg0 ;
-(unsigned int)objectClass;
-(void)_updateSafetyOffsets:(CGFloat)arg0 ;
-(void)_updateTimestampPeriod:(CGFloat)arg0 ;
-(void)addControl:(id)arg0 ;
-(void)addInputStream:(id)arg0 ;
-(void)addOutputStream:(id)arg0 ;
-(void)dealloc;
-(void)performConfigurationChange:(*void)arg0 ;
-(void)preferredChannelDescriptions:(struct AudioChannelDescription *)arg0 forScope:(unsigned int)arg1 ;
-(void)preferredChannelsForLeft:(*unsigned int)arg0 andRight:(*unsigned int)arg1 ;
-(void)removeControl:(id)arg0 ;
-(void)removeInputStream:(id)arg0 ;
-(void)removeOutputStream:(id)arg0 ;
-(void)requestConfigurationChange:(id)arg0 ;
-(void)systemHasPoweredOn;
-(void)systemWillSleep;
-(void)updateTimestampPeriod;


@end


#endif