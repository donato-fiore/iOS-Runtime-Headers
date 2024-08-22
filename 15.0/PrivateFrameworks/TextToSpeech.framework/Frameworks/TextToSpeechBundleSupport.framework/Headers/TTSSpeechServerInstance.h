// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSSPEECHSERVERINSTANCE_H
#define TTSSPEECHSERVERINSTANCE_H

@class NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TTSSpeechServer.h"
#import "TTSVocalizer.h"
#import "TTSTimer.h"

@interface TTSSpeechServerInstance : NSObject {
    NSLock *_speechLock;
    NSMutableArray *_speechRequestQueue;
    unsigned char _speechActive;
    unsigned char _speechThreadActive;
    *__CFRunLoop _speechThreadRunLoop;
    *__CFRunLoopSource _speechActivitySignal;
    ? _speechActiveContext;
    unsigned char _newVoiceInstalled;
    unsigned char _speechThreadPriorityIsHigh;
    unsigned char _shouldTerminateThread;
    unsigned char _didTerminateThread;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // ivar: _serviceQueue
@property (nonatomic) TTSSpeechServer *speechService; // ivar: _speechService
@property (nonatomic) NSUInteger synthesizerId; // ivar: _synthesizerId
@property (copy, nonatomic) id *unitTestMarkerProcessingCallback; // ivar: _unitTestMarkerProcessingCallback
@property (retain, nonatomic) TTSVocalizer *vocalizer; // ivar: _vocalizer
@property (retain, nonatomic) TTSTimer *wordCallbackTimer; // ivar: _wordCallbackTimer


-(?)_activeRequestShouldContinue;
-(?)_activeRequestShouldPauseImmediately;
-(?)_activeRequestShouldStopAtAnyMark;
-(?)_activeRequestShouldStopImmediately;
-(?)_footprintOrVoiceNameHasChanged;
-(?)_loadVoiceResourcevoiceResource;
-(?)_needsParameterChange:(?)arg0 lock:(?)arg1 rate:(?)arg2 pitch:(?)arg3 volume:(?)arg4 footprintvoiceType;
-(?)_setParameters:(?)arg0 rate:(?)arg1 pitch:(?)arg2 volumefootprint;
-(?)_shouldContinueSpeechGivenMark:(?)arg0 markTypeblockIfPaused;
-(?)_vocalizerMessageBufferDone:(?)arg0 contextoutData;
-(?)processMarker:(?)arg0 withByteOffset:(?)arg1 markerPosition:(?)arg2 markerLength:(?)arg3 context:(?)arg4 currentTimesecondPass;
-(BOOL)_defaultVoiceIsFallback;
-(id)_getAvailableVoiceForVoice:(id)arg0 ;
-(id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg0 playback:(struct __TTSPlayback *)arg1 inContext:(*void)arg2 ;
-(id)_ttSSpeechServerCopyVoiceInfoForLanguage:(id)arg0 voiceType:(NSInteger)arg1 queryingMobileAssets:(BOOL)arg2 ;
-(id)init;
-(struct __CFArray *)loadedVoiceResources;
-(unsigned char)_setActiveRequestActionForMark:(NSInteger)arg0 clientRequest:(id)arg1 markType:(NSInteger)arg2 ;
-(void)_appendSpeechRequestAndStart:(id)arg0 ;
-(void)_cleanupAfterRequest:(struct ? *)arg0 ;
-(void)_handleSpeechThread;
-(void)_initializeSpeech:(struct ? *)arg0 ;
-(void)_initializeSpeechEngine:(struct ? *)arg0 ;
-(void)_newVoiceInstalled;
-(void)_processCurrentRequest:(struct ? *)arg0 ;
-(void)_speechThreadSignal;
-(void)_startSpeechThread;
-(void)_terminateThread;
-(void)_ttsLogSpeechForServerRequest:(id)arg0 ;
-(void)_uninitializeSpeech:(struct ? *)arg0 ;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)dealloc;
-(void)getSpeechIsActiveForRequest:(id)arg0 reply:(id)arg1 ;
-(void)pauseSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)startSpeechRequest:(id)arg0 ;
-(void)stopSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;


@end


#endif