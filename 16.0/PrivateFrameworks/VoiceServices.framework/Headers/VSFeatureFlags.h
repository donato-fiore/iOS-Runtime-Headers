// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSFEATUREFLAGS_H
#define VSFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface VSFeatureFlags : NSObject



+(BOOL)isLowPowerDeviceNeuralEnabled;
+(BOOL)isTrialEnabled;
+(BOOL)lowInactiveMemory;
+(BOOL)useSiriTTSService;


@end


#endif