// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAAUDIODEVICE_H
#define ASAAUDIODEVICE_H

@class NSDictionary, NSString, NSArray, NSURL, OS_os_workgroup;


#import "ASAObject.h"

@interface ASAAudioDevice : ASAObject

@property (readonly, nonatomic) CGFloat actualSampleRate;
@property (readonly, nonatomic, getter=isAggregate) BOOL aggregate;
@property (readonly, copy, nonatomic) NSDictionary *aggregateDescription;
@property (readonly, nonatomic, getter=isAlive) BOOL alive;
@property (readonly, nonatomic) BOOL canBeDefaultDevice;
@property (readonly, nonatomic) BOOL canBeDefaultInputDevice;
@property (readonly, nonatomic) BOOL canBeDefaultOutputDevice;
@property (readonly, nonatomic) BOOL canBeDefaultSystemDevice;
@property (copy, nonatomic) NSDictionary *clientDescription;
@property (copy, nonatomic) NSString *clockDeviceUID;
@property (readonly, nonatomic) unsigned int clockDomain;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, copy, nonatomic) NSDictionary *deviceDescription;
@property (readonly, copy, nonatomic) NSString *deviceUID;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasOutput;
@property (readonly, copy, nonatomic) NSDictionary *headsetInfo;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) int hogModeOwner;
@property (readonly, copy, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) unsigned int inputLatency;
@property (readonly, nonatomic) unsigned int inputSafetyOffset;
@property (readonly, copy, nonatomic) NSArray *inputStreamObjectIDs;
@property (readonly, copy, nonatomic) NSArray *inputStreams;
@property (nonatomic) unsigned int ioBufferFrameSize;
@property (nonatomic) float ioCycleUsage;
@property (nonatomic) OS_os_workgroup *ioThreadOSWorkgroup;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) unsigned int maximumIOBufferFrameSize;
@property (readonly, nonatomic) unsigned int minimumIOBufferFrameSize;
@property (readonly, copy, nonatomic) NSString *modelUID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat nominalSampleRate;
@property (readonly, copy, nonatomic) NSArray *nominalSampleRates;
@property (readonly, nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic) unsigned int outputSafetyOffset;
@property (readonly, copy, nonatomic) NSArray *outputStreamObjectIDs;
@property (readonly, copy, nonatomic) NSArray *outputStreams;
@property (readonly, copy, nonatomic) NSArray *relatedDeviceObjectIDs;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) unsigned int zeroTimestampPeriod;


-(BOOL)acquireHogMode;
-(BOOL)createAudioProcID:(**unk)arg0 forIOProc:(*unk)arg1 withClientData:(*void)arg2 error:(*id)arg3 ;
-(BOOL)destroyAudioProcID:(*unk)arg0 error:(*id)arg1 ;
-(BOOL)releaseHogMode;
-(BOOL)setInputStreamUsage:(id)arg0 forAudioProc:(*unk)arg1 ;
-(BOOL)setOutputStreamUsage:(id)arg0 forAudioProc:(*unk)arg1 ;
-(BOOL)startAudioProc:(*unk)arg0 error:(*id)arg1 ;
-(BOOL)stopAudioProc:(*unk)arg0 error:(*id)arg1 ;
-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)inputStreamUsageForAudioProc:(*unk)arg0 ;
-(id)outputStreamUsageForAudioProc:(*unk)arg0 ;


@end


#endif