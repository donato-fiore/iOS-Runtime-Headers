// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTRESIZER_H
#define TSCH3DCHARTRESIZER_H


#import <Foundation/Foundation.h>

#import "TSCH3DChartBoundsLayout.h"
#import "TSCH3DChartType.h"
#import "TSCH3DScene.h"
#import "TSCH3DChartScenePropertyAccessor.h"

@interface TSCH3DChartResizer : NSObject {
    TSCH3DChartBoundsLayout *_layout;
    TSCH3DChartType *_chartType;
    TSCH3DScene *_scene;
    TSCH3DChartScenePropertyAccessor *_accessor;
    ResizeData _previous;
    ResizeData _current;
    tvec2<float> _target;
    NSUInteger _index;
    ? _layoutSettings;
}


@property (nonatomic) float minStep; // ivar: _minStep
@property (nonatomic) float precision; // ivar: _precision


+(float)minimumSize;
+(float)perspectiveness;
+(id)resizerWithLayout:(id)arg0 chartType:(id)arg1 ;
+(struct tvec2<float> )adjustLabelWrapSize:(*void)arg0 ;
+(struct tvec2<float> )adjustLabelWrapSize:(*void)arg0 forScene:(id)arg1 ;
-(BOOL)allConverges;
-(BOOL)checkImprovement;
-(BOOL)currentCanImprove;
-(BOOL)resize1;
-(float)containingViewportThreshold;
-(float)maxDepthRatio;
-(float)minScale;
-(float)perspectiveness;
-(float)step;
-(id)initWithLayout:(id)arg0 chartType:(id)arg1 ;
-(struct tvec2<bool> )canImprove;
-(struct tvec2<bool> )converges;
-(struct tvec2<float> )resize:(*void)arg0 startingSize:(*void)arg1 ;
-(struct tvec2<float> )updateResizerFromRequestedSize:(*void)arg0 startingSize:(*void)arg1 ;
-(struct tvec2<int> )containingViewportFromCurrentSize;
-(struct tvec2<int> )containingViewportFromSize:(*void)arg0 ;
-(struct tvec3<float> )adjust:(*void)arg0 ;
-(struct tvec3<float> )adjust:(*void)arg0 by:(float)arg1 ;
-(struct tvec3<float> )adjustedScale;
-(struct tvec3<float> )clamp:(*void)arg0 ;
-(struct tvec3<float> )clampDepthRatio:(*void)arg0 ;
-(void)adjustContainingViewport;
-(void)dealloc;
-(void)initializeResizing:(*void)arg0 ;
-(void)loop;
-(void)readjustContainingViewport;
-(void)seedResizeCondition;
-(void)setContainingViewport:(*void)arg0 ;
-(void)setScale:(*void)arg0 ;
-(void)setStep:(float)arg0 ;
-(void)updateResizeData;
-(void)updateSteps;


@end


#endif