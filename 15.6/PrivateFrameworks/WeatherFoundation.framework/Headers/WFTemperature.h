// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEMPERATURE_H
#define WFTEMPERATURE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFTemperature : NSObject <NSCopying, NSSecureCoding>

 {
    ? _temperatureValues;
}


@property (nonatomic) CGFloat celsius;
@property (nonatomic) CGFloat fahrenheit;
@property (nonatomic) CGFloat kelvin;


+(BOOL)supportsSecureCoding;
-(BOOL)_unitIsHydrated:(int)arg0 outputValue:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTemperature:(id)arg0 ;
-(CGFloat)temperatureForUnit:(int)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemperatureUnit:(int)arg0 value:(CGFloat)arg1 ;
-(void)_resetTemperatureValues;
-(void)_setValue:(CGFloat)arg0 forUnit:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif