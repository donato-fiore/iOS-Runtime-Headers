// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERCOLORHSBVALUES_H
#define PRPOSTERCOLORHSBVALUES_H


#import <Foundation/Foundation.h>


@interface PRPosterColorHSBValues : NSObject

@property (readonly, nonatomic) CGFloat brightness; // ivar: _brightness
@property (readonly, nonatomic) CGFloat hue; // ivar: _hue
@property (readonly, nonatomic) CGFloat saturation; // ivar: _saturation


-(id)colorWithAlpha:(CGFloat)arg0 ;
-(id)hslValues;
-(id)initWithColor:(id)arg0 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 ;


@end


#endif