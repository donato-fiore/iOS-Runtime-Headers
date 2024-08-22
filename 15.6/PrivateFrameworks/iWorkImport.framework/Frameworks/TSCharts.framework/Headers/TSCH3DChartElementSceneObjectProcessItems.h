// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTELEMENTSCENEOBJECTPROCESSITEMS_H
#define TSCH3DCHARTELEMENTSCENEOBJECTPROCESSITEMS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSCH3DChartElementSceneObject.h"
#import "TSCH3DSceneRenderPipeline.h"
#import "TSCH3DChartElementProperties.h"
#import "TSCH3DRenderProcessor.h"

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject {
    TSCH3DChartElementSceneObject *_sceneObject;
    TSCH3DSceneRenderPipeline *_pipeline;
    TSCH3DChartElementProperties *_properties;
    NSMutableArray *_delayedItems;
}


@property (readonly, nonatomic) BOOL geometryOnly;
@property (readonly, nonatomic) TSCH3DRenderProcessor *processor;
@property (readonly, nonatomic) BOOL pushStates;
@property (readonly, nonatomic) BOOL useBoundsGeometry;


+(id)processItemsWithSceneObject:(id)arg0 properties:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)p_delayedItemsAreUnique;
-(id)elementInfoWithSeries:(id)arg0 position:(*void)arg1 ;
-(id)initWithSceneObject:(id)arg0 properties:(id)arg1 pipeline:(id)arg2 ;
-(void)p_processElementInfoWithSeries:(id)arg0 position:(*void)arg1 ;
-(void)performItemsProcessing;
-(void)processDelayedItemsWithOpacity:(float)arg0 ;
-(void)processItems;


@end


#endif