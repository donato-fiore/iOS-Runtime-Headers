// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICAUDIOPOWERLEVELLINEARCONVERTER_H
#define SUICAUDIOPOWERLEVELLINEARCONVERTER_H


#import <Foundation/Foundation.h>


@interface SUICAudioPowerLevelLinearConverter : NSObject



+(float)_adjustedLinearPowerLevel:(float)arg0 isInput:(BOOL)arg1 ;
+(float)_expectedLinearInputPowerLevelMaximum;
+(float)_linearValueForPowerLevel:(float)arg0 shouldAdjustForDeviceType:(BOOL)arg1 isInput:(BOOL)arg2 ;
+(float)linearValueForInputPowerLevel:(float)arg0 ;
+(float)linearValueForOutputPowerLevel:(float)arg0 ;


@end


#endif