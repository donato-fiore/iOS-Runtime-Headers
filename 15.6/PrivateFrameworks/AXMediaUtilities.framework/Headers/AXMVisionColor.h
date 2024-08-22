// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMVISIONCOLOR_H
#define AXMVISIONCOLOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionColor : NSObject <NSSecureCoding>

 {
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
    unsigned char _hue;
    unsigned char _saturation;
    unsigned char _brightness;
}


@property (readonly, nonatomic) CGFloat blueFloat;
@property (readonly, nonatomic) CGFloat brightnessFloat;
@property (readonly, nonatomic) CGFloat greenFloat;
@property (readonly, nonatomic) CGFloat hueFloat;
@property (readonly, nonatomic) CGFloat redFloat;
@property (readonly, nonatomic) CGFloat saturationFloat;


+(BOOL)supportsSecureCoding;
+(id)colorWithHue:(unsigned char)arg0 saturation:(unsigned char)arg1 brightness:(unsigned char)arg2 ;
+(id)colorWithHueDegrees:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 ;
+(id)colorWithRed:(unsigned char)arg0 green:(unsigned char)arg1 blue:(unsigned char)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAXMVisionColor:(id)arg0 ;
-(CGFloat)euclidianDistanceHS:(id)arg0 ;
-(CGFloat)euclidianDistanceHSV:(id)arg0 ;
-(CGFloat)hueRadians;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_getHue:(char *)arg0 saturation:(char *)arg1 brightness:(char *)arg2 ;
-(void)_getRed:(char *)arg0 green:(char *)arg1 blue:(char *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif