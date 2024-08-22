// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHANNELDATACAPTUREAUDIOUNIT_H
#define CHANNELDATACAPTUREAUDIOUNIT_H

@class AUAudioUnit, AVAudioPCMBuffer, AUAudioUnitBus, AUAudioUnitBusArray;



@interface ChannelDataCaptureAudioUnit : AUAudioUnit {
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    array<std::vector<float>, 2> _buffers;
    vector<int, std::allocator<int>> capturedPositions;
    AVAudioPCMBuffer *capturedBuffer;
}




-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(id)stopRecording;
-(void)deallocateRenderResources;
-(void)startRecording:(int)arg0 ;


@end


#endif