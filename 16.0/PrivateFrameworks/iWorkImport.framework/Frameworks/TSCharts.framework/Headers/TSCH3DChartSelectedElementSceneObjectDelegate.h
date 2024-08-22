// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTSELECTEDELEMENTSCENEOBJECTDELEGATE_H
#define TSCH3DCHARTSELECTEDELEMENTSCENEOBJECTDELEGATE_H

@class NSString;
@protocol TSCH3DChartAllElementSceneObjectDelegate;

#import <Foundation/Foundation.h>


@interface TSCH3DChartSelectedElementSceneObjectDelegate : NSObject <TSCH3DChartAllElementSceneObjectDelegate>

 {
    NSUInteger _selectedSeriesIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg0 pipeline:(id)arg1 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg0 ;
-(BOOL)willProcessElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willProcessSeries:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willRenderElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willSubmitElement:(id)arg0 sceneObject:(id)arg1 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(id)arg0 sceneObject:(id)arg1 ;
-(id)initWithSelectedSeriesIndex:(NSUInteger)arg0 ;
-(struct ElementRenderPass )renderPassForElement:(id)arg0 sceneObject:(id)arg1 ;
-(struct ElementRenderPass )renderPassForSceneObject:(id)arg0 ;
-(void)didEndProcessingSceneObject:(id)arg0 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(*void)arg0 effects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg0 sceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didTransformElement:(id)arg0 sceneObject:(id)arg1 ;


@end


#endif