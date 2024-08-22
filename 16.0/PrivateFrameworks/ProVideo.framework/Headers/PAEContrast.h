// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAECONTRAST_H
#define PAECONTRAST_H



#import "PAEFilterDefaultBase.h"

@interface PAEContrast : PAEFilterDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct CGPoint )calculateBezier:(CGFloat)arg0 startPt:(struct CGPoint )arg1 controlPoint1:(struct CGPoint )arg2 controlPoint2:(struct CGPoint )arg3 endPt:(struct CGPoint )arg4 ;
-(void)generateLut:(struct RGBAfPixel *)arg0 forContrast:(CGFloat)arg1 andPivot:(CGFloat)arg2 ;


@end


#endif