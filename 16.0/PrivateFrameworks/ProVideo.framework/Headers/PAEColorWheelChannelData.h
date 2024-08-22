// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAECOLORWHEELCHANNELDATA_H
#define PAECOLORWHEELCHANNELDATA_H

@protocol NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2;

#import <Foundation/Foundation.h>


@interface PAEColorWheelChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2>

 {
    PAEColorWheelData _value;
}




+(BOOL)supportsSecureCoding;
+(id)channelDataWithRadius:(CGFloat)arg0 theta:(CGFloat)arg1 saturation:(CGFloat)arg2 light:(CGFloat)arg3 ;
-(BOOL)isAtDefaults;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)light;
-(CGFloat)radius;
-(CGFloat)saturation;
-(CGFloat)theta;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRadius:(CGFloat)arg0 theta:(CGFloat)arg1 saturation:(CGFloat)arg2 light:(CGFloat)arg3 ;
-(id)interpolateBetween:(id)arg0 withWeight:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;
-(void)setLight:(CGFloat)arg0 ;
-(void)setRadius:(CGFloat)arg0 ;
-(void)setSaturation:(CGFloat)arg0 ;
-(void)setTheta:(CGFloat)arg0 ;


@end


#endif