// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGDEVICECONTROLLER_H
#define ARCOACHINGDEVICECONTROLLER_H

@class CALayer;

#import <Foundation/Foundation.h>


@interface ARCoachingDeviceController : NSObject {
    CALayer *_deviceLayer;
    CALayer *_holeLayer;
    CALayer *_shineLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_shineInnerLayer;
    CGFloat _aspectRatio;
    BOOL _geoTrackingMode;
}


@property (nonatomic) CGRect bounds;
@property (nonatomic) float opacity;
@property (nonatomic) CGPoint position;
@property (nonatomic) CATransform3D transform;


-(id)initWithDeviceMaskImage:(id)arg0 geoTrackingMode:(BOOL)arg1 ;
-(id)initWithDeviceMaskImage:(id)arg0 solidColor:(id)arg1 geoTrackingMode:(BOOL)arg2 ;
-(void)setLayerParent:(id)arg0 ;
-(void)update:(CGFloat)arg0 visibility:(CGFloat)arg1 layer:(id)arg2 renderParams:(struct ? )arg3 ;


@end


#endif