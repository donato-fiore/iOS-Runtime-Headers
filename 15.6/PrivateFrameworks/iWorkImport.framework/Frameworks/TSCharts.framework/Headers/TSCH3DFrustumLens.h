// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DFRUSTUMLENS_H
#define TSCH3DFRUSTUMLENS_H



#import "TSCH3DRectangleLens.h"

@interface TSCH3DFrustumLens : TSCH3DRectangleLens



-(id)frustumRectAtDistance:(float)arg0 ;
-(struct tmat4x4<float> )matrix;
-(void)calculateCullingPlanes:(*void)arg0 ;


@end


#endif