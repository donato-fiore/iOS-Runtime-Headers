// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAECHECKERBOARD_H
#define PAECHECKERBOARD_H



#import "PAEGeneratorDefaultBase.h"

@interface PAECheckerboard : PAEGeneratorDefaultBase



-(?)updateShapeParameteratTime;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInfo:(struct ? )arg1 ;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)multiplyMatrix:(id)arg0 byMatrix:(id)arg1 ;
-(id)properties;
-(void)filteredEdges:(*BOOL)arg0 withInfo:(struct ? )arg1 ;
-(void)getTransformMatrix:(**CGFloat)arg0 forCenterX:(CGFloat)arg1 centerY:(CGFloat)arg2 angle:(CGFloat)arg3 andOutputImage:(id)arg4 ;


@end


#endif