// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TADEVICERECORDSETTINGS_H
#define TADEVICERECORDSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TADeviceRecordSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger assumedKeyRollHour; // ivar: _assumedKeyRollHour
@property (nonatomic) CGFloat expiryTimeInterval; // ivar: _expiryTimeInterval
@property (readonly, nonatomic) CGFloat keepAliveInterval; // ivar: _keepAliveInterval
@property (readonly, nonatomic) CGFloat maxExpectedDurianWildInterval; // ivar: _maxExpectedDurianWildInterval
@property (readonly, nonatomic) CGFloat maxExpectedHELEWildInterval; // ivar: _maxExpectedHELEWildInterval
@property (readonly, nonatomic) CGFloat minimumHELEStagingInterval; // ivar: _minimumHELEStagingInterval
@property (readonly, nonatomic) CGFloat minimumStagingInterval; // ivar: _minimumStagingInterval
@property (nonatomic) CGFloat purgeTimeInterval; // ivar: _purgeTimeInterval
@property (readonly, nonatomic) CGFloat scanInterval; // ivar: _scanInterval
@property (readonly, nonatomic) BOOL shouldAlertHELEImmediatelyForImmediateTypes; // ivar: _shouldAlertHELEImmediatelyForImmediateTypes
@property (readonly, nonatomic) NSInteger stagingBackstopHour; // ivar: _stagingBackstopHour
@property (readonly, nonatomic) NSInteger stagingHELEBackstopHour; // ivar: _stagingHELEBackstopHour
@property (readonly, nonatomic) BOOL surfaceHELEImmediatelyBetweenBackstopAndKeyroll; // ivar: _surfaceHELEImmediatelyBetweenBackstopAndKeyroll
@property (readonly, nonatomic) BOOL surfaceImmediatelyBetweenBackstopAndKeyroll; // ivar: _surfaceImmediatelyBetweenBackstopAndKeyroll


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpiryTimeInterval:(CGFloat)arg0 purgeTimeInterval:(CGFloat)arg1 keepAliveInterval:(CGFloat)arg2 minimumStagingInterval:(CGFloat)arg3 stagingBackstopHour:(NSUInteger)arg4 assumedKeyRollHour:(NSUInteger)arg5 scanInterval:(CGFloat)arg6 surfaceImmediatelyBetweenBackstopAndKeyroll:(BOOL)arg7 maxExpectedHELEWildInterval:(CGFloat)arg8 maxExpectedDurianWildInterval:(CGFloat)arg9 shouldAlertHELEImmediatelyForImmediateTypes:(BOOL)arg10 minimumHELEStagingInterval:(CGFloat)arg11 stagingHELEBackstopHour:(NSUInteger)arg12 surfaceHELEImmediatelyBetweenBackstopAndKeyroll:(BOOL)arg13 ;
-(id)initWithExpiryTimeIntervalOrDefault:(id)arg0 purgeTimeIntervalOrDefault:(id)arg1 keepAliveIntervalOrDefault:(id)arg2 minimumStagingIntervalOrDefault:(id)arg3 stagingBackstopHourOrDefault:(id)arg4 assumedKeyRollHourOrDefault:(id)arg5 scanIntervalOrDefault:(id)arg6 surfaceImmediatelyBetweenBackstopAndKeyrollOrDefault:(id)arg7 maxExpectedHELEWildIntervalOrDefault:(id)arg8 maxExpectedDurianWildIntervalOrDefault:(id)arg9 shouldAlertHELEImmediatelyForImmediateTypesOrDefault:(id)arg10 minimumHELEStagingIntervalOrDefault:(id)arg11 stagingHELEBackstopHourOrDefault:(id)arg12 surfaceHELEImmediatelyBetweenBackstopAndKeyrollOrDefault:(id)arg13 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif