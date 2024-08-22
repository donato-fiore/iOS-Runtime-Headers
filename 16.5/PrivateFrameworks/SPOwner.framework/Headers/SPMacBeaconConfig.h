// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPMACBEACONCONFIG_H
#define SPMACBEACONCONFIG_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat fastRollAdvertisementDuration; // ivar: _fastRollAdvertisementDuration
@property (nonatomic) CGFloat fastRollAdvertisementInterval; // ivar: _fastRollAdvertisementInterval
@property (nonatomic) CGFloat initialNoBeaconDuration; // ivar: _initialNoBeaconDuration
@property (nonatomic) CGFloat noAdvertisementDurationDecayFactor; // ivar: _noAdvertisementDurationDecayFactor
@property (copy, nonatomic) NSArray *postInitialDayAdvertisementTimes; // ivar: _postInitialDayAdvertisementTimes
@property (nonatomic) CGFloat slowRollAdvertisementDuration; // ivar: _slowRollAdvertisementDuration
@property (nonatomic) CGFloat slowRollNoAdvertisementDuration; // ivar: _slowRollNoAdvertisementDuration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initFromPrefs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitialNoBeaconDuration:(CGFloat)arg0 fastRollAdvertisementDuration:(CGFloat)arg1 fastRollAdvertisementInterval:(CGFloat)arg2 slowRollAdvertisementDuration:(CGFloat)arg3 slowRollNoAdvertisementDuration:(CGFloat)arg4 noAdvertisementDurationDecayFactor:(CGFloat)arg5 postInitialDayAdvertisementTimes:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)persistToPrefs;


@end


#endif