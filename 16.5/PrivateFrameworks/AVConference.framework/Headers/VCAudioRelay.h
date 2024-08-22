// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIORELAY_H
#define VCAUDIORELAY_H

@class NSString;
@protocol VCBasebandCodecNotifications, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VCAudioRelayIO.h"

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications>

 {
    *OpaqueFigThread _relayThread;
    _opaque_pthread_mutex_t _wakeUpMutex;
    _opaque_pthread_cond_t _wakeUpCondition;
    tagVCAudioRelayIOInfo _remoteIOInfo;
    tagVCAudioRelayIOInfo _clientIOInfo;
    _opaque_pthread_mutex_t _relayLock;
    _VCRemoteCodecInfo _remoteCodecInfo;
    *void _ptpClock;
    NSUInteger _ptpGMIdentity;
    unsigned short _ptpClockLocalPort;
    timespec _nextWakeUpTime;
    timespec _nextWakeUpInterval;
    NSUInteger _ptpWakeUpTime;
    NSUInteger _nextWakeUpHostMachTime;
}


@property (readonly) CGFloat IOBufferDuration; // ivar: _IOBufferDuration
@property (readonly) unsigned int blocksRelayedCount; // ivar: _blocksRelayedCount
@property (readonly) float clientDownlinkPowerMovingAverage; // ivar: _clientDownlinkPowerMovingAverage
@property (copy, nonatomic) VCAudioRelayIO *clientIO; // ivar: _clientIO
@property (readonly) *OpaqueAudioConverter clientToRemoteConverter; // ivar: _clientToRemoteConverter
@property (readonly) float clientUplinkPowerMovingAverage; // ivar: _clientUplinkPowerMovingAverage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isRelayRunning; // ivar: _isRelayRunning
@property (readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource; // ivar: _periodicHealthPrintDispatchSource
@property (copy, nonatomic) VCAudioRelayIO *remoteIO; // ivar: _remoteIO
@property (readonly) *OpaqueAudioConverter remoteToClientConverter; // ivar: _remoteToClientConverter
@property (readonly) Class superclass;


-(BOOL)canSetPropertyWithError:(*id)arg0 ;
-(BOOL)createAudioConvertersWithError:(*id)arg0 ;
-(BOOL)setNetworkClockID:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)startClientIO;
-(BOOL)startRelayIO:(struct tagVCAudioRelayIOInfo *)arg0 otherRelayIO:(struct tagVCAudioRelayIOInfo *)arg1 ;
-(BOOL)startRelayThreadWithError:(*id)arg0 ;
-(BOOL)startRemoteIO;
-(CGFloat)ioBufferDurationWithFirstIO:(id)arg0 secondIO:(id)arg1 ;
-(float)rmsPowerOfBuffer:(*float)arg0 numSamples:(unsigned int)arg1 ;
-(id)init;
-(struct OpaqueAudioConverter *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription *)arg0 outputFormat:(struct AudioStreamBasicDescription *)arg1 withError:(*id)arg2 ;
-(void)dealloc;
-(void)destroyAudioConverters;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)forwardSamplesFromIO:(id)arg0 toIO:(id)arg1 withConverter:(struct OpaqueAudioConverter *)arg2 withHostTime:(CGFloat)arg3 ;
-(void)internalStopRelayThread;
-(void)lock;
-(void)printStreamFormats;
-(void)relayCallback;
-(void)relayProcessSamples;
-(void)releasePTPClock;
-(void)sleepForTime:(struct timespec *)arg0 ;
-(void)startPeriodicHealthPrint;
-(void)stopClientIO;
-(void)stopRelayIO:(struct tagVCAudioRelayIOInfo *)arg0 otherRelayIO:(struct tagVCAudioRelayIOInfo *)arg1 ;
-(void)stopRelayThread;
-(void)stopRemoteIO;
-(void)unlock;
-(void)updateRealTimeStats;
-(void)updateRemoteCodecInfo:(struct _VCRemoteCodecInfo *)arg0 ;


@end


#endif