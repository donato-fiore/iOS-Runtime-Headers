// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAEEARTHQUAKE_H
#define PAEEARTHQUAKE_H



#import "PAEFilterDefaultBase.h"

@interface PAEEarthquake : PAEFilterDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGRef<HGNode> )quakeHeliumNodeWithInputImage:(struct HGRef<HGNode> )arg0 inputImage:(id)arg1 outputImage:(id)arg2 renderInfo:(struct ? )arg3 twist:(float)arg4 horizontalShake:(float)arg5 verticalShake:(float)arg6 layers:(float)arg7 centerX:(float)arg8 centerY:(float)arg9 randomSeed:(int)arg10 ;
-(void)getEdgeMode:(*unsigned int)arg0 withInfo:(struct ? )arg1 ;


@end


#endif