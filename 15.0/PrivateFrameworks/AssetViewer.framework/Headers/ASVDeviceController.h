// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVDEVICECONTROLLER_H
#define ASVDEVICECONTROLLER_H

@class CALayer;

#import <Foundation/Foundation.h>


@interface ASVDeviceController : NSObject {
    CALayer *_deviceLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_holeLayer;
    CALayer *_shineInnerLayer;
    CGFloat _aspectRatio;
}


@property (nonatomic) CGRect bounds;
@property (readonly, nonatomic) CALayer *deviceLayer;
@property (readonly, nonatomic) CALayer *holeLayer;
@property (nonatomic) float opacity;
@property (nonatomic) CGPoint position;
@property (readonly, nonatomic) CALayer *shineLayer; // ivar: _shineLayer
@property (nonatomic) CATransform3D transform;


-(id)initWithDeviceMaskImage:(id)arg0 ;
-(void)update:(CGFloat)arg0 visibility:(CGFloat)arg1 layer:(id)arg2 ;


@end


#endif