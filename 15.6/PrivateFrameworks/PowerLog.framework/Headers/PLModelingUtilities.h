// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMODELINGUTILITIES_H
#define PLMODELINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLModelingUtilities : NSObject



+(BOOL)alsCurveHigherThanDefault;
+(BOOL)carrierBuild;
+(BOOL)internalBuild;
+(BOOL)isARMMac;
+(BOOL)isAppleTV;
+(BOOL)isHeySiriAlwaysOn;
+(BOOL)isHomePod;
+(BOOL)isLowPowerModeSupported;
+(BOOL)isMac;
+(BOOL)isNarrowScreen;
+(BOOL)isPercentageSupported;
+(BOOL)isTVOS;
+(BOOL)isWatch;
+(BOOL)isiPad;
+(BOOL)isiPhone;
+(BOOL)isiPod;
+(BOOL)shouldShowBatteryGraphs;
+(CGFloat)defaultBatteryEnergyCapacity;
+(CGFloat)duetDiscretionaryBudget;
+(CGFloat)getDefaultL0bThresholdForDeviceType;
+(CGFloat)networkingEnergyWithBytes:(int)arg0 withDuration:(CGFloat)arg1 ;
+(id)valueForMobileGestaltCapability:(id)arg0 ;


@end


#endif