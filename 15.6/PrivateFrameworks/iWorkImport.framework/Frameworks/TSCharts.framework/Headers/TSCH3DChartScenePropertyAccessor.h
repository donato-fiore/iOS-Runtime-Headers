// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSCENEPROPERTYACCESSOR_H
#define TSCH3DCHARTSCENEPROPERTYACCESSOR_H



#import "TSCH3DScenePropertyAccessor.h"

@interface TSCH3DChartScenePropertyAccessor : TSCH3DScenePropertyAccessor

@property (readonly, nonatomic) tvec3<float> adjustedInfoChartScale;
@property (nonatomic) tvec3<float> cachedRotation;
@property (readonly, nonatomic) tvec3<float> categoryLabelsOffset;
@property (readonly, nonatomic) float constantDepthFactor;
@property (readonly, nonatomic) tmat4x4<float> constantDepthStageTransform;
@property (readonly, nonatomic) float depthToWidthRatio;
@property (nonatomic) BOOL dynamicShadowsEnabled;
@property (nonatomic) tvec3<float> elementScale;
@property (readonly, nonatomic) tmat4x4<float> globalUnitTransform;
@property (readonly, nonatomic) tvec3<float> gridlinesOffset;
@property (nonatomic) tvec4<float> infoChartScale;
@property (nonatomic) tvec3<float> infoChartScaleVec3;
@property (nonatomic) tvec4<float> initialInfoChartScale;
@property (nonatomic) tvec3<float> initialInfoChartScaleVec3;
@property (readonly, nonatomic) BOOL isHorizontal;
@property (nonatomic) BOOL labelsShadowIgnored;
@property (nonatomic) BOOL layoutConfigurationEnabled;
@property (nonatomic) tvec4<float> originalInfoChartScale;
@property (nonatomic) tvec3<float> originalRotation;
@property (nonatomic) tvec3<float> rotation;
@property (nonatomic) tvec2<float> sageChartInfoSize;
@property (nonatomic) tvec3<float> stageOffset;
@property (nonatomic) tvec3<float> stageScale;
@property (readonly, nonatomic) tmat4x4<float> stageTransform;
@property (readonly, nonatomic) tvec3<float> stageXYCenter;
@property (readonly, nonatomic) tmat4x4<float> transform;
@property (readonly, nonatomic) tmat4x4<float> unitTransform;


+(id)accessorWithScene:(id)arg0 ;
+(id)nonNilAccessorWithScene:(id)arg0 ;
-(struct tmat4x4<float> )sceneTransform;
-(void)updateInfoChartScaleUsingConstantDepth;


@end


#endif