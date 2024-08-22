// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REOUTPUTSTAGEAUDIOUNIT_H
#define REOUTPUTSTAGEAUDIOUNIT_H

@class AUAudioUnit, AVAudioPCMBuffer, AUAudioUnitBus, AUAudioUnitBusArray;



@interface REOutputStageAudioUnit : AUAudioUnit {
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    atomic<int> _clipCount;
}




-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)deallocateRenderResources;


@end


#endif