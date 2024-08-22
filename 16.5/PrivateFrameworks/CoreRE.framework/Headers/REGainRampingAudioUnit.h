// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REGAINRAMPINGAUDIOUNIT_H
#define REGAINRAMPINGAUDIOUNIT_H

@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray;



@interface REGainRampingAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    unique_ptr<re::audio::FixedSpscAudioQueue<GainRampCommand>, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> _rampGainQueue;
    float _targetGain;
    unsigned int _remainingRampFrames;
}


@property (readonly) float currentGain; // ivar: _currentGain


-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)deallocateRenderResources;
-(void)fadeToGain:(float)arg0 duration:(CGFloat)arg1 ;


@end


#endif