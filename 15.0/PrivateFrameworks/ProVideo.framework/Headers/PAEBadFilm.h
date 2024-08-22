// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAEBADFILM_H
#define PAEBADFILM_H

@class NSMutableArray;


#import "PAEFilterDefaultBase.h"
#import "PAEEarthquake.h"

@interface PAEBadFilm : PAEFilterDefaultBase {
    PAEEarthquake *_jitterer;
    int _cachedSeed;
    NSMutableArray *_scratches;
    PCMutex _scratchMutex;
}




-(?)autoRandomize:(?)arg0 withVariance:(?)arg1 andFrequency:(?)arg2 atTimerandCount;
-(?)createDust:(?)arg0 scratches:(?)arg1 scratchColor:(?)arg2 hair:(?)arg3 randomSeed:(?)arg4 autoRandFreq:(?)arg5 buffer:(?)arg6 atTimepixelTransform;
-(?)getBrightness:(?)arg0 saturation:(?)arg1 dust:(?)arg2 scratches:(?)arg3 scratchColor:(?)arg4 hair:(?)arg5 randomSeed:(?)arg6 jitter:(?)arg7 focus:(?)arg8 grain:(?)arg9 autoRandFreq:(?)arg10 withParmsAPIatTime;
-(?)setupScratchArrayWithAutoRandomizeFrequency:(?)arg0 andSeed:(?)arg1 withWidth:(?)arg2 andHeightatTime;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)dealloc;


@end


#endif