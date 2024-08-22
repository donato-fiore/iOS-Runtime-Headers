// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCONTINUOUSAUDIOFINGERPRINTPROVIDER_H
#define CSCONTINUOUSAUDIOFINGERPRINTPROVIDER_H

@class CSPlainAudioFileWriter, CSAudioCircularBuffer, NSString, CSPolicy, NSMutableDictionary, NSHashTable;
@protocol CSAudioStreamProvidingDelegate, CSAudioServerCrashMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"

@interface CSContinuousAudioFingerprintProvider : NSObject <CSAudioStreamProvidingDelegate, CSAudioServerCrashMonitorDelegate>



@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) CSAudioCircularBuffer *audioLoggingBuffer; // ivar: _audioLoggingBuffer
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (nonatomic) float currentMaximumBufferSize; // ivar: _currentMaximumBufferSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CSPolicy *enablePolicy; // ivar: _enablePolicy
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *inUseServices; // ivar: _inUseServices
@property (nonatomic) BOOL isListenPollingStarting; // ivar: _isListenPollingStarting
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)init;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_handleEnablePolicyEvent:(BOOL)arg0 ;
-(void)_reset;
-(void)_setMaximumBufferSizeFromInUseServices;
-(void)_startListenPolling;
-(void)_startListenPollingWithInterval:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_startListenWithCompletion:(id)arg0 ;
-(void)_stopListening;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didHardwareConfigurationChange:(NSInteger)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)reset;
-(void)startWithUUID:(id)arg0 withMaximumBufferSize:(float)arg1 ;
-(void)stopWithUUID:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif