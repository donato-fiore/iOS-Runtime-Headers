// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADDEPTHSCALER_H
#define ADDEPTHSCALER_H


#import <Foundation/Foundation.h>


@interface ADDepthScaler : NSObject

@property (readonly, nonatomic) float interpThreshold; // ivar: _interpThreshold
@property (readonly, nonatomic) float noDepthOutputValue; // ivar: _noDepthOutputValue


+(id)defaultScaler;
+(id)scalerWithInterpThreshold:(float)arg0 andNoDepthOutputValue:(float)arg1 ;
-(NSInteger)scaleDepthBuffer:(struct __CVBuffer *)arg0 withCropRect:(struct CGRect )arg1 toBuffer:(struct __CVBuffer *)arg2 ;
-(NSInteger)scaleDepthBuffer:(struct __CVBuffer *)arg0 withZoomFactor:(float)arg1 toBuffer:(struct __CVBuffer *)arg2 ;


@end


#endif