// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEHSCURVESEFFECT_H
#define PAEHSCURVESEFFECT_H



#import "PAEBaseCorrectorEffect.h"

@interface PAEHSCurvesEffect : PAEBaseCorrectorEffect {
    int _gradingMode;
    BOOL _preserveLuma;
}




-(?)resync:(?)arg0 atTime:(?)arg1 paramIDcustomChannelData;
-(?)resyncOnceatTime;
-(BOOL)addParameters;
-(BOOL)needsOSCsIn360Groups;
-(BOOL)overrideRender:(id)arg0 withOutputImage:(id)arg1 inputImage:(id)arg2 input:(*void)arg3 withInfo:(struct ? )arg4 ;
-(BOOL)parameterChanged:(id)arg0 atTime:(struct ? )arg1 paramID:(unsigned int)arg2 customChannelData:(id)arg3 ;
-(BOOL)useLegacyCoding;
-(Class)classForCustomParameterID:(unsigned int)arg0 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)shouldDeselectOtherMasks:(id)arg0 ;
-(void)_registerColorCurveParameter:(int)arg0 name:(id)arg1 red:(CGFloat)arg2 green:(CGFloat)arg3 blue:(CGFloat)arg4 ;
-(void)_registerHueCurveParameter:(int)arg0 name:(id)arg1 ;
-(void)_registerOffsetColorCurveParameter:(int)arg0 name:(id)arg1 red:(CGFloat)arg2 green:(CGFloat)arg3 blue:(CGFloat)arg4 ;
-(void)_setGradingMode:(int)arg0 ;
-(void)dealloc;


@end


#endif