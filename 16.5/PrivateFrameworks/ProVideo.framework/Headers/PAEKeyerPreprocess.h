// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYERPREPROCESS_H
#define PAEKEYERPREPROCESS_H


#import <Foundation/Foundation.h>

#import "PAEKeyer.h"

@interface PAEKeyerPreprocess : NSObject {
    PAEKeyer *_keyer;
    id *_apiManager;
}




-(BOOL)addAdvancedParametersWithParamAPI:(id)arg0 paramFlags:(unsigned int)arg1 ;
-(BOOL)doDegrainWithDegrainAmount:(CGFloat)arg0 degrainIntensity:(CGFloat)arg1 withInfo:(struct ? )arg2 outputNode:(*void)arg3 pcaMatrix:(id)arg4 width:(int)arg5 height:(int)arg6 ;
-(BOOL)doPreprocessKeyerFootageWithParamAPI:(id)arg0 withInfo:(struct ? )arg1 linearInput:(BOOL)arg2 scaleX:(float)arg3 scaleY:(float)arg4 width:(float)arg5 height:(float)arg6 fixDVResult:(*void)arg7 degrainResult:(*void)arg8 outputNode:(*void)arg9 ;
-(BOOL)findGrainRegionWithInfo:(struct ? )arg0 coordX:(*int)arg1 coordY:(*int)arg2 width:(int)arg3 height:(int)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 ;
-(void)dealloc;
-(void)setKeyer:(id)arg0 ;


@end


#endif