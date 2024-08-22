// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCPADDINGLAYER_H
#define MLCPADDINGLAYER_H

@protocol NSCopying;


#import "MLCLayer.h"

@interface MLCPaddingLayer : MLCLayer <NSCopying>



@property (readonly, nonatomic) float constantValue; // ivar: _constantValue
@property (readonly, nonatomic) NSUInteger paddingBottom; // ivar: _paddingBottom
@property (readonly, nonatomic) NSUInteger paddingLeft; // ivar: _paddingLeft
@property (readonly, nonatomic) NSUInteger paddingRight; // ivar: _paddingRight
@property (readonly, nonatomic) NSUInteger paddingTop; // ivar: _paddingTop
@property (readonly, nonatomic) int paddingType; // ivar: _paddingType


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithConstantPadding:(id)arg0 constantValue:(float)arg1 ;
+(id)layerWithReflectionPadding:(id)arg0 ;
+(id)layerWithSymmetricPadding:(id)arg0 ;
+(id)layerWithZeroPadding:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPaddingType:(int)arg0 paddingSizes:(id)arg1 constantValue:(float)arg2 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif