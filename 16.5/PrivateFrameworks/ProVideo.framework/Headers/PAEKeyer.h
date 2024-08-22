// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEKEYER_H
#define PAEKEYER_H



#import "PAEFilterDefaultBase.h"
#import "PAEKeyerMatteTools.h"
#import "PAEKeyerPreprocess.h"

@interface PAEKeyer : PAEFilterDefaultBase {
    *void _omSamples;
    BOOL _isMotion;
    BOOL _toggledAdvancedMode;
    ? _prevRationalTime;
    ? _prevRectanglesFrame;
    *void _lutsBitmapLoaderCache;
    PCMutex _cacheMutex;
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
}




-(?)computeModelatTime;
-(?)getBlendOptionsAtTime;
-(?)getKeyerNode:(?)arg0 omKeyeratTime;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)is3DHistoExpandedForHDR;
-(BOOL)isApplyTuningForRec2020;
-(BOOL)isLumaKey;
-(BOOL)isLutExpandedForHDR;
-(BOOL)isSimpleKey;
-(BOOL)isWideGamutHDR;
-(BOOL)pullInitialKey:(*id)arg0 ;
-(BOOL)sampleEdge:(*void)arg0 renderInfo:(struct ? *)arg1 width:(float)arg2 height:(float)arg3 ;
-(BOOL)sampleRect:(*void)arg0 renderInfo:(struct ? *)arg1 width:(float)arg2 height:(float)arg3 ;
-(BOOL)use32x32Histogram;
-(CGFloat)autokeyAmountToHistoPercent:(CGFloat)arg0 ;
-(id)apiManager;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(int)getColorPrimaries;
-(void)clearKey;
-(void)dealloc;
-(void)getInputWidth:(*float)arg0 height:(*float)arg1 renderInfo:(struct ? )arg2 ;
-(void)setInitialSamples:(*void)arg0 ;


@end


#endif