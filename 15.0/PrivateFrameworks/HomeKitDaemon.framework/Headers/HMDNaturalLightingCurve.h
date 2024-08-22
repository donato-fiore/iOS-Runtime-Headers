// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNATURALLIGHTINGCURVE_H
#define HMDNATURALLIGHTINGCURVE_H

@class HMFObject, NSString, NSArray;
@protocol HMFLogging, NSSecureCoding, NSCopying;



@interface HMDNaturalLightingCurve : HMFObject <HMFLogging, NSSecureCoding, NSCopying>



@property (readonly) NSUInteger checksum;
@property NSUInteger colorTemperatureNotifyIntervalThresholdInMilliseconds; // ivar: _colorTemperatureNotifyIntervalThresholdInMilliseconds
@property NSUInteger colorTemperatureNotifyValueChangeThreshold; // ivar: _colorTemperatureNotifyValueChangeThreshold
@property NSUInteger colorTemperatureUpdateIntervalInMilliseconds; // ivar: _colorTemperatureUpdateIntervalInMilliseconds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger maximumBrightness; // ivar: _maximumBrightness
@property (readonly) NSInteger maximumColorTemperature; // ivar: _maximumColorTemperature
@property (readonly) NSInteger minimumBrightness; // ivar: _minimumBrightness
@property (readonly) NSInteger minimumColorTemperature; // ivar: _minimumColorTemperature
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *transitionPoints; // ivar: _transitionPoints
@property (readonly) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(NSInteger)colorTemperatureMiredsFromKelvins:(NSInteger)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)colorTemperatureForBrightness:(NSInteger)arg0 millisecondsElapsedSinceStartOfDay:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurve:(id)arg0 minimumColorTemperature:(NSInteger)arg1 maximumColorTemperature:(NSInteger)arg2 ;
-(id)initWithVersion:(NSUInteger)arg0 transitionPoints:(id)arg1 minimumBrightness:(NSInteger)arg2 maximumBrightness:(NSInteger)arg3 minimumColorTemperature:(NSInteger)arg4 maximumColorTemperature:(NSInteger)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif