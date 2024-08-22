// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSHBATTERYRING_H
#define HKSHBATTERYRING_H


#import <Foundation/Foundation.h>


@interface HKSHBatteryRing : NSObject

@property CGFloat backgroundRingAlpha; // ivar: _backgroundRingAlpha
@property CGFloat fillFraction; // ivar: _fillFraction
@property CGFloat radius; // ivar: _radius
@property CGFloat strokeWidth; // ivar: _strokeWidth


-(CGFloat)_validFillFraction:(CGFloat)arg0 ;
-(id)fillColor;
-(id)init;
-(id)initWithFillFraction:(CGFloat)arg0 radius:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 ;
-(id)ringImage;


@end


#endif