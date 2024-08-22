// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REAUHOSTAUDIOUNIT_H
#define REAUHOSTAUDIOUNIT_H

@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray, AVAudioFormat;
@protocol OS_dispatch_queue;



@interface REAUHostAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    id *_cachedRenderBlock;
    atomic<bool> _running;
    BOOL _prepared;
    BOOL _shouldPrepareTargetOnAllocate;
    atomic<bool> _hasTriggeredPrepareCallbackOnce;
    mutex _targetPreparationMutex;
    CGFloat _currentHostingSampleRate;
    unsigned int _currentHostingMaxFramesToRender;
    *AudioBufferList _abl;
    *float _buffer;
    atomic<float> _signalPresent;
    CGFloat _signalPresentDecayPerSample;
    shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) unsigned int desiredLayoutTag; // ivar: _desiredLayoutTag
@property (copy, nonatomic) id *didPrepareAudioUnit; // ivar: _didPrepareAudioUnit
@property (retain, nonatomic) AVAudioFormat *inputFormat; // ivar: _inputFormat
@property (nonatomic, getter=isPrepared) BOOL prepared;
@property (copy, nonatomic) id *pullInputOverride; // ivar: _pullInputOverride
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) float signalPresent;
@property (retain, nonatomic) AUAudioUnit *target; // ivar: _target


-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)dealloc;
-(void)deallocateRenderResources;
-(void)prepareTargetAU;


@end


#endif