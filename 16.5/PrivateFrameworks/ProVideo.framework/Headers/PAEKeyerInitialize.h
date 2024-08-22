// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYERINITIALIZE_H
#define PAEKEYERINITIALIZE_H


#import <Foundation/Foundation.h>

#import "PAEKeyer.h"

@interface PAEKeyerInitialize : NSObject {
    PAEKeyer *_keyer;
    id *_apiManager;
}




+(void)setInitialSamples:(*void)arg0 autokeySetupUtil:(id)arg1 sampleBoxHalfDim:(float)arg2 ;
-(BOOL)calculateInitialMatteWithInfo:(struct ? )arg0 omSamples:(*void)arg1 colorPrimaries:(int)arg2 screenColor:(*int)arg3 minGreenHueAngle:(float)arg4 maxGreenHueAngle:(float)arg5 greenChroma:(float)arg6 minBlueHueAngle:(float)arg7 maxBlueHueAngle:(float)arg8 blueChroma:(float)arg9 histoPercentageIncluded:(float)arg10 use32x32x32:(BOOL)arg11 simpleKey:(BOOL)arg12 ;
-(BOOL)findSampleRectsWithInfo:(struct ? )arg0 screenColor:(*int)arg1 colorPrimaries:(int)arg2 width:(int)arg3 height:(int)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 omSamples:(*void)arg12 viewingSetupMatte:(BOOL)arg13 use32x32Histogram:(BOOL)arg14 simpleKey:(BOOL)arg15 ;
-(id)initWithAPIManager:(id)arg0 keyer:(id)arg1 ;
-(void)calculateInitialSamples:(*void)arg0 percentageOfBaseColorIncluded:(float)arg1 use32x32x32:(BOOL)arg2 autokeySetupUtil:(id)arg3 samples:(*void)arg4 ;
-(void)dealloc;


@end


#endif