// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAUDIOWAVEFORMUTILITIES_H
#define HUAUDIOWAVEFORMUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUAudioWaveformUtilities : NSObject



+(CGFloat)disabledWaveformWidth:(CGFloat)arg0 forProgress:(float)arg1 ;
+(CGFloat)floatToScreenScale:(CGFloat)arg0 ;
+(float)progressForTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)waveformImageforPowerLevels:(*CGFloat)arg0 powerLevelsCount:(NSUInteger)arg1 color:(id)arg2 ;


@end


#endif