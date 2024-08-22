// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSHADOWSBLURPARAMETERS_H
#define TSCH3DCHARTSHADOWSBLURPARAMETERS_H


#import <Foundation/Foundation.h>


@interface TSCH3DChartShadowsBlurParameters : NSObject

@property (nonatomic) float kernelScale; // ivar: _kernelScale
@property (nonatomic) NSInteger numPasses; // ivar: _numPasses
@property (nonatomic) float quality; // ivar: _quality
@property (nonatomic) NSInteger shadowSize; // ivar: _shadowSize


+(id)paramsWithQuality:(float)arg0 numPasses:(NSInteger)arg1 shadowSize:(NSInteger)arg2 kernelScale:(float)arg3 ;
-(id)initWithQuality:(float)arg0 numPasses:(NSInteger)arg1 shadowSize:(NSInteger)arg2 kernelScale:(float)arg3 ;


@end


#endif