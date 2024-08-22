// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAUDIOEXPOSUREUTILITIES_H
#define HKAUDIOEXPOSUREUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKAudioExposureUtilities : NSObject



+(CGFloat)_rounded:(CGFloat)arg0 ;
+(CGFloat)maximumDurationInSecondsForLEQ:(CGFloat)arg0 days:(NSInteger)arg1 ;
+(NSUInteger)classifyLEQ:(id)arg0 forDuration:(CGFloat)arg1 overDays:(NSInteger)arg2 ;
+(id)_classificationValueWithLEQ:(CGFloat)arg0 duration:(CGFloat)arg1 days:(NSInteger)arg2 ;
+(id)computeLEQFromAudioExposureValues:(id)arg0 ;
+(id)localizedDisplayNameForClassification:(NSUInteger)arg0 ;
+(id)localizedDisplayNameForClassification:(NSUInteger)arg0 isEmbedded:(BOOL)arg1 ;


@end


#endif