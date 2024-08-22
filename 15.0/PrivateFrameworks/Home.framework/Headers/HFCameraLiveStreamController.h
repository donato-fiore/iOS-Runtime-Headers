// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERALIVESTREAMCONTROLLER_H
#define HFCAMERALIVESTREAMCONTROLLER_H

@class HMCameraProfile, NSString, HMHome, HMCameraSource, NSError;
@protocol HFCameraObserver, HFCameraLiveStreamControlling, HFCameraLiveStreamControllerDelegate;

#import <Foundation/Foundation.h>

#import "HFCameraAudioManager.h"

@interface HFCameraLiveStreamController : NSObject <HFCameraObserver, HFCameraLiveStreamControlling>



@property (retain, nonatomic) HFCameraAudioManager *audioManager; // ivar: _audioManager
@property (readonly, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HFCameraLiveStreamControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger inferredStreamState; // ivar: _inferredStreamState
@property (readonly, nonatomic) HMCameraSource *liveCameraSource; // ivar: _liveCameraSource
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // ivar: _microphoneEnabled
@property (nonatomic) BOOL startStreamingAfterStop; // ivar: _startStreamingAfterStop
@property (nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled; // ivar: _streamAudioEnabled
@property (nonatomic) float streamAudioVolume; // ivar: _streamAudioVolume
@property (readonly, nonatomic) NSError *streamError; // ivar: _streamError
@property (readonly, nonatomic) NSUInteger streamState;
@property (readonly, nonatomic, getter=isStreamingEnabled) BOOL streamingEnabled;
@property (readonly) Class superclass;


-(NSUInteger)_derivedAudioStreamSetting;
-(id)activeStream;
-(id)init;
-(id)initWithHome:(id)arg0 cameraProfile:(id)arg1 ;
-(id)mostRecentSnapshot;
-(void)_updateAudioManagerState;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg0 ;
-(void)cameraStreamControl:(id)arg0 didStopStreamWithError:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg0 ;
-(void)cameraStreamControlDidUpdateManagerState:(id)arg0 ;
-(void)cameraStreamControlDidUpdateStreamState:(id)arg0 ;
-(void)cameraUserSettingsDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)startStreaming;
-(void)stopStreaming;


@end


#endif