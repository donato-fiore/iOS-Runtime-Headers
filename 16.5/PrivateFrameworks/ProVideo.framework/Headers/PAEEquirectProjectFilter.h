// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAEEQUIRECTPROJECTFILTER_H
#define PAEEQUIRECTPROJECTFILTER_H



#import "PAEFilterDefaultBase.h"

@interface PAEEquirectProjectFilter : PAEFilterDefaultBase



-(?)composeViewMatrix:(?)arg0 withCameraBehaviorheroAngle;
-(?)getInitialYaw;
-(?)getIsFrontFacing;
-(?)getProjectionFOVYDegrees:(?)arg0 FOVXDegrees:(?)arg1 withFrameAspectatTime;
-(?)getQuaternion:(?)arg0 ;
-(?)getViewMatrix;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(BOOL)variesOverTime;
-(CGFloat)convertToFOVXFromFOVY:(CGFloat)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 ;
-(CGFloat)convertToFOVYFromFOVX:(CGFloat)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGEquirectProjectParams )getParams:(struct ? )arg0 withOutputImage:(id)arg1 inputImage:(id)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 outputWidth:(NSUInteger)arg5 outputHeight:(NSUInteger)arg6 xRotation:(CGFloat)arg7 yRotation:(CGFloat)arg8 zRotation:(CGFloat)arg9 cameraBehavior:(int)arg10 paramAPI:(id)arg11 ;
-(void)getEdgeMode:(*unsigned int)arg0 withInfo:(struct ? )arg1 ;


@end


#endif