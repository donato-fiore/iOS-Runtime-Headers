// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAETRANSITIONDEFAULTBASE_H
#define PAETRANSITIONDEFAULTBASE_H

@protocol FxTransition;


#import "PAESharedDefaultBase.h"

@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition>

 {
    BOOL _haveEase;
    BOOL _haveMotionBlur;
    int _initGap;
}




-(?)convertTimeFraction:(?)arg0 toLocal:(?)arg1 andDerivativeatTime;
-(?)getEaseIn:(?)arg0 easeOutatTime;
-(?)relativeShutterAtTime;
-(BOOL)addEaseParametersWithDefault:(float)arg0 andFlags:(unsigned int)arg1 ;
-(BOOL)addMotionBlurParameters;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInputA:(id)arg1 withInputB:(id)arg2 withTimeFraction:(float)arg3 withInfo:(struct ? )arg4 ;
-(BOOL)canThrowRenderOutput:(id)arg0 withInputA:(id)arg1 withInputB:(id)arg2 withTimeFraction:(float)arg3 withSpeed:(float)arg4 withInfo:(struct ? )arg5 ;
-(BOOL)finishInitialSetup:(*id)arg0 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfoA:(struct ? )arg1 inputInfoB:(struct ? )arg2 timeFraction:(float)arg3 hardware:(*BOOL)arg4 software:(*BOOL)arg5 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInputA:(struct ? )arg2 withInputB:(struct ? )arg3 withTimeFraction:(float)arg4 withInfo:(struct ? )arg5 ;
-(BOOL)isEndGap;
-(BOOL)isFrontGap;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(BOOL)renderOutput:(id)arg0 withInputA:(id)arg1 withInputB:(id)arg2 withTimeFraction:(float)arg3 withInfo:(struct ? )arg4 ;


@end


#endif