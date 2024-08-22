// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REROTATINGSHAPEDWHITENOISE_H
#define REROTATINGSHAPEDWHITENOISE_H

@class AUAudioUnit, AUAudioUnitBusArray;



@interface RERotatingShapedWhiteNoise : AUAudioUnit {
    AUAudioUnitBusArray *_outputBusArray;
    shared_ptr<RERotatingShapedWhiteNoiseState> _state;
}


@property unsigned int samplePeriod;


+(void)instantiate:(id)arg0 ;
-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)deallocateRenderResources;


@end


#endif