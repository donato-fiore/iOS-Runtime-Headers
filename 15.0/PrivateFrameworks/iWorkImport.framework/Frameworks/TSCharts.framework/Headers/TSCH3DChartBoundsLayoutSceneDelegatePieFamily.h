// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTBOUNDSLAYOUTSCENEDELEGATEPIEFAMILY_H
#define TSCH3DCHARTBOUNDSLAYOUTSCENEDELEGATEPIEFAMILY_H



#import "TSCH3DChartBoundsLayoutSceneDelegate.h"

@interface TSCH3DChartBoundsLayoutSceneDelegatePieFamily : TSCH3DChartBoundsLayoutSceneDelegate



-(BOOL)willBeginProcessingSceneObject:(id)arg0 ;
-(BOOL)willProcessElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willRenderElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willSubmitElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(id)arg0 sceneObject:(id)arg1 ;
-(id)interestedClasses;
-(struct ElementRenderPass )renderPassForElement:(id)arg0 sceneObject:(id)arg1 ;
-(struct ElementRenderPass )renderPassForSceneObject:(id)arg0 ;
-(void)didEndProcessingSceneObject:(id)arg0 ;
-(void)didProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didTransformElement:(id)arg0 sceneObject:(id)arg1 ;


@end


#endif