// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REINPUTMANAGERAUDIOUNIT_H
#define REINPUTMANAGERAUDIOUNIT_H

@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray;



@interface REInputManagerAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    int _inputChannels;
    *float _cachedPCM;
}


@property (readonly) id *pullInputBlock; // ivar: _pullInputBlock


-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)inputBusses;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)dealloc;
-(void)deallocateRenderResources;


@end


#endif