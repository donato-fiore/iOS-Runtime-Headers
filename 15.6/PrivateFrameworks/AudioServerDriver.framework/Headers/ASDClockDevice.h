// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDCLOCKDEVICE_H
#define ASDCLOCKDEVICE_H

@class NSMutableArray, NSArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, ASDDeviceConfigurationChangeDelegate;


#import "ASDObject.h"

@interface ASDClockDevice : ASDObject {
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
    BOOL _isAlive;
    BOOL _isRunning;
    unsigned int _inputLatency;
    unsigned int _outputLatency;
    id *_getZeroTimestampBlockUnretained;
    id *_beginIOOperationBlockUnretained;
    id *_endIOOperationBlockUnretained;
}


@property (copy, nonatomic) id *beginIOOperationBlock; // ivar: _beginIOOperationBlock
@property (readonly, nonatomic) *id beginIOOperationBlockUnretainedPtr;
@property (nonatomic) BOOL canChangeDeviceName; // ivar: _canChangeDeviceName
@property (nonatomic) unsigned int clockAlgorithm;
@property (nonatomic) unsigned int clockDomain;
@property (nonatomic) BOOL clockIsStable;
@property (weak, nonatomic) NSObject<ASDDeviceConfigurationChangeDelegate> *configurationChangeDelegate; // ivar: _configurationChangeDelegate
@property (copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (copy, nonatomic) id *endIOOperationBlock; // ivar: _endIOOperationBlock
@property (readonly, nonatomic) *id endIOOperationBlockUnretainedPtr;
@property (copy, nonatomic) id *getZeroTimestampBlock; // ivar: _getZeroTimestampBlock
@property (readonly, nonatomic) *id getZeroTimestampBlockUnretainedPtr;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) unsigned int inputLatency;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *ioReferenceQueue;
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *modelUID; // ivar: _modelUID
@property (nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) CGFloat samplingRate;
@property (copy, nonatomic) NSArray *samplingRates;
@property (nonatomic) unsigned int timestampPeriod;
@property (nonatomic) unsigned int transportType;


-(BOOL)changeDeviceName:(id)arg0 ;
-(BOOL)changeSamplingRate:(CGFloat)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)controls;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithDeviceUID:(id)arg0 withPlugin:(id)arg1 ;
-(id)initWithPlugin:(id)arg0 ;
-(int)addClient:(struct AudioServerPlugInClientInfo *)arg0 ;
-(int)performStartIO;
-(int)performStopIO;
-(int)removeClient:(struct AudioServerPlugInClientInfo *)arg0 ;
-(int)startIOForClient:(unsigned int)arg0 ;
-(int)stopIOForClient:(unsigned int)arg0 ;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(unsigned int)objectClass;
-(void)_updateSafetyOffsets:(CGFloat)arg0 ;
-(void)_updateTimestampPeriod:(CGFloat)arg0 ;
-(void)addControl:(id)arg0 ;
-(void)dealloc;
-(void)performConfigurationChange:(*void)arg0 ;
-(void)removeControl:(id)arg0 ;
-(void)requestConfigurationChange:(id)arg0 ;
-(void)systemHasPoweredOn;
-(void)systemWillSleep;
-(void)updateTimestampPeriod;


@end


#endif