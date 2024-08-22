// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARMLIMAGEDOWNSCALINGRESULT_H
#define ARMLIMAGEDOWNSCALINGRESULT_H


#import <Foundation/Foundation.h>


@interface ARMLImageDownScalingResult : NSObject

@property (readonly, nonatomic) CGRect cropRegion; // ivar: _cropRegion
@property (readonly, nonatomic) CGSize imageResolution;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) CGSize regionOfInterest; // ivar: _regionOfInterest
@property (nonatomic) *__CVBuffer undistortedPixelBuffer; // ivar: _undistortedPixelBuffer


-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGSize )arg1 cropRegion:(struct CGRect )arg2 ;
-(void)dealloc;


@end


#endif