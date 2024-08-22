// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGMETALSPLINEDATA_H
#define ARCOACHINGMETALSPLINEDATA_H

@class NSArray;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "ARCoachingControlPointContainer.h"
#import "ARCoachingBlendableSplineGroup.h"

@interface ARCoachingMetalSplineData : NSObject {
    ? _recordedScale;
    ? _recordedTranslation;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *controlPointIndicesBuffer; // ivar: _controlPointIndicesBuffer
@property (readonly, nonatomic) NSObject<MTLBuffer> *controlPointsBuffer; // ivar: _controlPointsBuffer
@property (readonly, nonatomic) NSObject<MTLBuffer> *instanceBuffer; // ivar: _instanceBuffer
@property (readonly, nonatomic) NSArray *instanceTransforms; // ivar: _instanceTransforms
@property (readonly, nonatomic) int patchCount; // ivar: _patchCount
@property (readonly, nonatomic) NSObject<MTLBuffer> *patchUserDataBuffer; // ivar: _patchUserDataBuffer
@property (readonly, nonatomic) ARCoachingControlPointContainer *recordedControlPoints; // ivar: _recordedControlPoints
@property ? recordedScale;
@property ? recordedTranslation;
@property (readonly, nonatomic) ARCoachingBlendableSplineGroup *shapes; // ivar: _shapes
@property (readonly, nonatomic) NSObject<MTLBuffer> *tessellationFactorsBuffer; // ivar: _tessellationFactorsBuffer


-(id)init:(id)arg0 ;
-(id)shapeBlendWithStart:(struct ? *)arg0 startCount:(int)arg1 end:(struct ? *)arg2 endCount:(int)arg3 t:(float)arg4 ;
-(void)computeInstanceTransformScale;
-(void)computeInstanceTransformScale:(float)arg0 s1t;
-(void)computeInstanceTransformScale:(float)arg0 t;
-(void)computeInstanceTransformTranslate:(float)arg0 t:(int)arg1 index;
-(void)computeInstanceTransformTranslate:(float)arg0 x1:(int)arg1 tindex;
-(void)computeInstanceTransformTranslate:(int)arg0 index;
-(void)computeShapeBlendWithEnd:(struct ? *)arg0 endCount:(int)arg1 ;
-(void)computeShapeBlendWithEnd:(struct ? *)arg0 endCount:(int)arg1 t:(float)arg2 ;
-(void)computeShapeBlendWithStart:(struct ? *)arg0 startCount:(int)arg1 end:(struct ? *)arg2 endCount:(int)arg3 t:(float)arg4 ;


@end


#endif