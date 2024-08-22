// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDLISTENENGINE_H
#define AXSDLISTENENGINE_H

@class NSPointerArray, AVAudioEngine, AVAudioSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSDListenEngine : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    NSPointerArray *_delegates;
    NSInteger _state;
}


@property (retain) AVAudioEngine *audioEngine; // ivar: _audioEngine
@property (retain) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly) NSUInteger bufferSize;
@property (readonly) BOOL isListening;


+(BOOL)_stateIsNotListening:(NSInteger)arg0 ;
+(id)_stringForState:(NSInteger)arg0 ;
+(id)sharedInstance;
-(BOOL)_notListeningForAnyReason;
-(BOOL)_startListeningWithError:(*id)arg0 ;
-(BOOL)_stopListeningAndTransitionToState:(NSInteger)arg0 ;
-(id)init;
-(void)_activateNotifications;
-(void)_carPlayIsConnectedDidChange:(id)arg0 ;
-(void)_handleAudioSessionInterruption:(id)arg0 ;
-(void)_handleBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)_handleConfigurationChangeNotification:(id)arg0 ;
-(void)_handleInterruptionRequestingState:(NSInteger)arg0 ;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_micDisabledUpdated;
-(void)_pipedInFileUpdated;
-(void)_restartSoundRecognitionIfNecesary;
-(void)_setState:(NSInteger)arg0 ;
-(void)_setupAudioInputWithError:(*id)arg0 shouldInterrupt:(BOOL)arg1 ;
-(void)_startIfPossibleAndNotify;
-(void)addListenDelegate:(id)arg0 ;
-(void)dealloc;
-(void)notifyListeningStartedWithError:(id)arg0 ;
-(void)removeListenDelegate:(id)arg0 ;


@end


#endif