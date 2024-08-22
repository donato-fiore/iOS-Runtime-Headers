// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBANALYTICS_H
#define CBANALYTICS_H


#import <Foundation/Foundation.h>


@interface CBAnalytics : NSObject



+(void)alsSelectionDeltas:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
+(void)alsSelectionSwaps:(NSUInteger)arg0 ;
+(void)alsSelectionTimes:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
+(void)autoBrightnessEnabled:(BOOL)arg0 byUser:(BOOL)arg1 ;
+(void)autoBrightnessUserChange:(BOOL)arg0 lowPower:(BOOL)arg1 ;
+(void)cuveLevel:(NSInteger)arg0 ;
+(void)deviceColor:(NSInteger)arg0 ;
+(void)displayMaxCurrent:(float)arg0 ;
+(void)harmonyColor:(struct ColorReport *)arg0 ;
+(void)harmonyEnabled:(BOOL)arg0 byUser:(BOOL)arg1 ;
+(void)hdrSession:(BOOL)arg0 ;
+(void)illuminanceHistogram:(id)arg0 ;
+(void)luminanceHistogram:(id)arg0 withName:(id)arg1 ;
+(void)nightShiftCCT:(NSInteger)arg0 ;
+(void)nightShiftEnabled:(BOOL)arg0 withOption:(int)arg1 ;
+(void)nightShiftSunSchedulePermitted:(BOOL)arg0 ;
+(void)send:(id)arg0 withBlock:(id)arg1 ;
+(void)sendBool:(id)arg0 withField:(char *)arg1 andValue:(BOOL)arg2 ;
+(void)sendInt:(id)arg0 withField:(char *)arg1 andValue:(NSInteger)arg2 ;
+(void)sendSparseBins:(*CGFloat)arg0 count:(NSInteger)arg1 withName:(id)arg2 ;
+(void)userSliderCommit:(struct CBSliderCommitInfo *)arg0 ;


@end


#endif