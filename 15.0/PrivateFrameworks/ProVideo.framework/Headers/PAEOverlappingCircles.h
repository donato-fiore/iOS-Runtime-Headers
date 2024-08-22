// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAEOVERLAPPINGCIRCLES_H
#define PAEOVERLAPPINGCIRCLES_H



#import "PAEGeneratorDefaultBase.h"

@interface PAEOverlappingCircles : PAEGeneratorDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)multiplyMatrix:(id)arg0 byMatrix:(id)arg1 ;
-(id)properties;
-(void)dealloc;
-(void)getTransformMatrix:(**CGFloat)arg0 forCenterX:(CGFloat)arg1 centerY:(CGFloat)arg2 angle:(CGFloat)arg3 andOutputImage:(id)arg4 ;


@end


#endif