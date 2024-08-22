// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSFEATUREFLAGS_H
#define VSFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface VSFeatureFlags : NSObject



+(BOOL)isLowPowerDeviceNeuralEnabled;
+(BOOL)isTrialEnabled;


@end


#endif