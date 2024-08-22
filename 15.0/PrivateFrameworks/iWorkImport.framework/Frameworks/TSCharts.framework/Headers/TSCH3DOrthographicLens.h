// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DORTHOGRAPHICLENS_H
#define TSCH3DORTHOGRAPHICLENS_H



#import "TSCH3DRectangleLens.h"

@interface TSCH3DOrthographicLens : TSCH3DRectangleLens



-(id)frustumRectAtDistance:(float)arg0 ;
-(struct tmat4x4<float> )matrix;
-(void)calculateCullingPlanes:(*void)arg0 ;


@end


#endif