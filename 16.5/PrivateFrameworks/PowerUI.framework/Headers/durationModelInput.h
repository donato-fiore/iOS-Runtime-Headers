// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DURATIONMODELINPUT_H
#define DURATIONMODELINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface durationModelInput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat cnt_dur_1; // ivar: _cnt_dur_1
@property (nonatomic) CGFloat cnt_dur_16; // ivar: _cnt_dur_16
@property (nonatomic) CGFloat cnt_dur_2; // ivar: _cnt_dur_2
@property (nonatomic) CGFloat cnt_dur_24; // ivar: _cnt_dur_24
@property (nonatomic) CGFloat cnt_dur_4; // ivar: _cnt_dur_4
@property (nonatomic) CGFloat cnt_dur_8; // ivar: _cnt_dur_8
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat med_dur_1; // ivar: _med_dur_1
@property (nonatomic) CGFloat med_dur_16; // ivar: _med_dur_16
@property (nonatomic) CGFloat med_dur_2; // ivar: _med_dur_2
@property (nonatomic) CGFloat med_dur_24; // ivar: _med_dur_24
@property (nonatomic) CGFloat med_dur_4; // ivar: _med_dur_4
@property (nonatomic) CGFloat med_dur_8; // ivar: _med_dur_8
@property (nonatomic) CGFloat plugin_battery_level; // ivar: _plugin_battery_level
@property (nonatomic) CGFloat std_dur_1; // ivar: _std_dur_1
@property (nonatomic) CGFloat std_dur_16; // ivar: _std_dur_16
@property (nonatomic) CGFloat std_dur_2; // ivar: _std_dur_2
@property (nonatomic) CGFloat std_dur_24; // ivar: _std_dur_24
@property (nonatomic) CGFloat std_dur_4; // ivar: _std_dur_4
@property (nonatomic) CGFloat std_dur_8; // ivar: _std_dur_8
@property (nonatomic) CGFloat time_from_plugin; // ivar: _time_from_plugin
@property (nonatomic) CGFloat weekday_med_dur_1; // ivar: _weekday_med_dur_1
@property (nonatomic) CGFloat weekday_med_dur_2; // ivar: _weekday_med_dur_2
@property (nonatomic) CGFloat weekday_med_dur_24; // ivar: _weekday_med_dur_24
@property (nonatomic) CGFloat weekday_med_dur_4; // ivar: _weekday_med_dur_4
@property (nonatomic) CGFloat weekday_med_dur_8; // ivar: _weekday_med_dur_8
@property (nonatomic) CGFloat weekday_std_dur_4; // ivar: _weekday_std_dur_4


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPlugin_battery_level:(CGFloat)arg0 time_from_plugin:(CGFloat)arg1 med_dur_1:(CGFloat)arg2 med_dur_2:(CGFloat)arg3 med_dur_4:(CGFloat)arg4 med_dur_8:(CGFloat)arg5 med_dur_16:(CGFloat)arg6 med_dur_24:(CGFloat)arg7 cnt_dur_1:(CGFloat)arg8 cnt_dur_2:(CGFloat)arg9 cnt_dur_4:(CGFloat)arg10 cnt_dur_8:(CGFloat)arg11 cnt_dur_16:(CGFloat)arg12 cnt_dur_24:(CGFloat)arg13 std_dur_1:(CGFloat)arg14 std_dur_2:(CGFloat)arg15 std_dur_4:(CGFloat)arg16 std_dur_8:(CGFloat)arg17 std_dur_16:(CGFloat)arg18 std_dur_24:(CGFloat)arg19 weekday_med_dur_1:(CGFloat)arg20 weekday_med_dur_2:(CGFloat)arg21 weekday_med_dur_4:(CGFloat)arg22 weekday_med_dur_8:(CGFloat)arg23 weekday_med_dur_24:(CGFloat)arg24 weekday_std_dur_4:(CGFloat)arg25 ;


@end


#endif