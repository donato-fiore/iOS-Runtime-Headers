// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTELEMENTPROPERTIES_H
#define TSCH3DCHARTELEMENTPROPERTIES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DTexturePool.h"

@interface TSCH3DChartElementProperties : NSObject <NSCopying>



@property (readonly, nonatomic) TSCH3DTexturePool *pool; // ivar: _pool


+(id)properties;
-(BOOL)applyCombinedTransform:(*void)arg0 series:(id)arg1 index:(*void)arg2 propertyAccessor:(id)arg3 ;
-(BOOL)applyElementTransform:(*void)arg0 series:(id)arg1 index:(struct tvec2<int> )arg2 propertyAccessor:(id)arg3 ;
-(BOOL)applyElementTransformToProcessor:(id)arg0 series:(id)arg1 index:(*void)arg2 propertyAccessor:(id)arg3 ;
-(float)elementTransformDepthFromPropertyAccessor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getPropertiesOfType:(Class)arg0 ;
-(id)init;
-(id)renderingLightingModelForSeries:(id)arg0 ;
-(void)addTexcoordsToProcessor:(id)arg0 series:(id)arg1 index:(*void)arg2 ;
-(void)applyChartElementsTransform:(*void)arg0 ;
-(void)applyChartElementsTransformToProcessor:(id)arg0 ;


@end


#endif