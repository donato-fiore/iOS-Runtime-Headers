// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSELECTEDELEMENTHIGHLIGHTSCENEOBJECT_H
#define TSCH3DCHARTSELECTEDELEMENTHIGHLIGHTSCENEOBJECT_H

@protocol TSCH3DSceneObjectDelegator;


#import "TSCH3DSceneObject.h"

@interface TSCH3DChartSelectedElementHighlightSceneObject : TSCH3DSceneObject <TSCH3DSceneObjectDelegator>





+(id)propertiesForScene:(id)arg0 ;
+(void)setHighlightColor:(id)arg0 scene:(id)arg1 ;
+(void)setSelectedSeriesIndex:(NSUInteger)arg0 scene:(id)arg1 ;
-(id)makeDelegateWithScene:(id)arg0 ;
-(id)makeDelegateWithSceneObject:(id)arg0 scene:(id)arg1 ;
-(id)p_calculateEdgeVerticesForPipeline:(id)arg0 ;
-(void)getBounds:(id)arg0 ;
-(void)render:(id)arg0 ;


@end


#endif