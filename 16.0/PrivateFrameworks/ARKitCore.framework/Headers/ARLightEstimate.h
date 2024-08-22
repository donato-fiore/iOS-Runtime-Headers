// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARLIGHTESTIMATE_H
#define ARLIGHTESTIMATE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARLightEstimate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat ambientColorTemperature; // ivar: _ambientColorTemperature
@property (readonly, nonatomic) CGFloat ambientIntensity; // ivar: _ambientIntensity
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAmbientIntensity:(CGFloat)arg0 temperature:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif