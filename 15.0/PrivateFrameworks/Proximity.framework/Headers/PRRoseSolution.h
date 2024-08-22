// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRROSESOLUTION_H
#define PRROSESOLUTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRRoseSolution : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger antenna_type; // ivar: _antenna_type
@property (readonly, nonatomic) CGFloat az_deg; // ivar: _az_deg
@property (readonly, nonatomic) CGFloat az_unc_deg; // ivar: _az_unc_deg
@property (readonly, nonatomic) BOOL az_valid; // ivar: _az_valid
@property (readonly, nonatomic) CGFloat el_deg; // ivar: _el_deg
@property (readonly, nonatomic) CGFloat el_unc_deg; // ivar: _el_unc_deg
@property (readonly, nonatomic) BOOL el_valid; // ivar: _el_valid
@property (readonly, nonatomic) CGFloat fov_confidence; // ivar: _fov_confidence
@property (readonly, nonatomic) NSUInteger mac_addr; // ivar: _mac_addr
@property (readonly, nonatomic) CGFloat mach_absolute_time_sec; // ivar: _mach_absolute_time_sec
@property (readonly, nonatomic) CGFloat mach_continuous_time_sec; // ivar: _mach_continuous_time_sec
@property (readonly, nonatomic) BOOL mach_continuous_time_valid; // ivar: _mach_continuous_time_valid
@property (readonly, nonatomic) CGFloat multipath_probability; // ivar: _multipath_probability
@property (readonly, nonatomic) BOOL multipath_probability_valid; // ivar: _multipath_probability_valid
@property (readonly, nonatomic) BOOL previous_solution_is_bad; // ivar: _previous_solution_is_bad
@property (readonly, nonatomic) CGFloat range_m; // ivar: _range_m
@property (readonly, nonatomic) CGFloat range_unc_m; // ivar: _range_unc_m
@property (readonly, nonatomic) CGFloat soi_rssi_dbm; // ivar: _soi_rssi_dbm
@property (readonly, nonatomic) BOOL soi_rssi_valid; // ivar: _soi_rssi_valid
@property (readonly, nonatomic) CGFloat sweep_angle_deg; // ivar: _sweep_angle_deg
@property (readonly, nonatomic) BOOL sweep_angle_valid; // ivar: _sweep_angle_valid
@property (readonly, nonatomic) CGFloat track_score; // ivar: _track_score
@property (readonly, nonatomic) BOOL track_score_valid; // ivar: _track_score_valid
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVariant:(NSInteger)arg0 macAddr:(NSUInteger)arg1 machAbsTime_sec:(CGFloat)arg2 machContTimeValid:(BOOL)arg3 machContTime_sec:(CGFloat)arg4 range_m:(CGFloat)arg5 rangeUnc_m:(CGFloat)arg6 azValid:(BOOL)arg7 elValid:(BOOL)arg8 az_deg:(CGFloat)arg9 el_deg:(CGFloat)arg10 azUnc_deg:(CGFloat)arg11 elUnc_deg:(CGFloat)arg12 fovConfidence:(CGFloat)arg13 soiRssiValid:(BOOL)arg14 soiRssi_dBm:(CGFloat)arg15 antennaType:(NSInteger)arg16 prevSolutionIsBad:(BOOL)arg17 trackScoreValid:(BOOL)arg18 trackScore:(CGFloat)arg19 sweepAngleValid:(BOOL)arg20 sweepAngle_deg:(CGFloat)arg21 multipathProbabilityValid:(BOOL)arg22 multipathProbability:(CGFloat)arg23 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif