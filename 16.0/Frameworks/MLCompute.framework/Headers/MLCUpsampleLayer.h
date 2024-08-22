// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCUPSAMPLELAYER_H
#define MLCUPSAMPLELAYER_H

@class NSArray;


#import "MLCLayer.h"

@interface MLCUpsampleLayer : MLCLayer

@property (readonly, nonatomic) BOOL alignsCorners; // ivar: _alignsCorners
@property (readonly, nonatomic) int sampleMode; // ivar: _sampleMode
@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape
@property (readonly, nonatomic) NSUInteger upsampleHeight; // ivar: _upsampleHeight
@property (readonly, nonatomic) NSUInteger upsampleWidth; // ivar: _upsampleWidth


+(id)layerWithShape:(id)arg0 ;
+(id)layerWithShape:(id)arg0 sampleMode:(int)arg1 alignsCorners:(BOOL)arg2 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithShape:(id)arg0 sampleMode:(int)arg1 alignCorners:(BOOL)arg2 ;
-(id)summarizedDOTDescription;


@end


#endif