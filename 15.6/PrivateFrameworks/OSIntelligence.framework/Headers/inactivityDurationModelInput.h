// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INACTIVITYDURATIONMODELINPUT_H
#define INACTIVITYDURATIONMODELINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface inactivityDurationModelInput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat all_dur_avg_2; // ivar: _all_dur_avg_2
@property (nonatomic) CGFloat all_dur_std_2; // ivar: _all_dur_std_2
@property (nonatomic) CGFloat all_long_percent_2; // ivar: _all_long_percent_2
@property (nonatomic) CGFloat dow_dur_avg_2; // ivar: _dow_dur_avg_2
@property (nonatomic) CGFloat dow_dur_std_2; // ivar: _dow_dur_std_2
@property (nonatomic) CGFloat dow_long_percent_2; // ivar: _dow_long_percent_2
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat recent_dur_avg_2; // ivar: _recent_dur_avg_2
@property (nonatomic) CGFloat recent_dur_std_2; // ivar: _recent_dur_std_2
@property (nonatomic) CGFloat recent_long_percent_2; // ivar: _recent_long_percent_2
@property (nonatomic) CGFloat start_dow_cos; // ivar: _start_dow_cos
@property (nonatomic) CGFloat start_dow_sin; // ivar: _start_dow_sin
@property (nonatomic) CGFloat start_time_cos; // ivar: _start_time_cos
@property (nonatomic) CGFloat start_time_sin; // ivar: _start_time_sin


-(id)featureValueForName:(id)arg0 ;
-(id)initWithStart_time_sin:(CGFloat)arg0 start_time_cos:(CGFloat)arg1 start_dow_sin:(CGFloat)arg2 start_dow_cos:(CGFloat)arg3 all_dur_avg_2:(CGFloat)arg4 all_dur_std_2:(CGFloat)arg5 all_long_percent_2:(CGFloat)arg6 recent_dur_avg_2:(CGFloat)arg7 recent_dur_std_2:(CGFloat)arg8 recent_long_percent_2:(CGFloat)arg9 dow_dur_avg_2:(CGFloat)arg10 dow_dur_std_2:(CGFloat)arg11 dow_long_percent_2:(CGFloat)arg12 ;


@end


#endif