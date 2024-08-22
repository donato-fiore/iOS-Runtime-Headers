// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTBARSCENEOBJECT_H
#define TSCH3DCHARTBARSCENEOBJECT_H



#import "TSCH3DChartColumnSceneObject.h"

@interface TSCH3DChartBarSceneObject : TSCH3DChartColumnSceneObject



+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
+(id)chartSeriesType;
+(id)partWithEnumerator:(id)arg0 layoutSettings:(struct ? )arg1 ;
+(void)addHorizontalTransformToProperties:(id)arg0 ;
+(void)updateLightingEffectsState:(id)arg0 scene:(id)arg1 ;
-(struct tvec2<float> )labelObjectSpacePosition:(unsigned int)arg0 axisValue:(CGFloat)arg1 intercept:(CGFloat)arg2 ;
-(void)updateLightingEffectsState:(id)arg0 scene:(id)arg1 ;


@end


#endif