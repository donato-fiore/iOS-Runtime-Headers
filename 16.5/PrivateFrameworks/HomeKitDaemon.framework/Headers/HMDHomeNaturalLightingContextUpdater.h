// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMENATURALLIGHTINGCONTEXTUPDATER_H
#define HMDHOMENATURALLIGHTINGCONTEXTUPDATER_H

@class HMFObject, NSString, NSNotificationCenter;
@protocol HMFLogging, HMDLightProfileDataSource, OS_dispatch_queue;


#import "HMDNaturalLightingCurve.h"
#import "HMDHome.h"

@interface HMDHomeNaturalLightingContextUpdater : HMFObject <HMFLogging>



@property (copy) HMDNaturalLightingCurve *curve; // ivar: _curve
@property NSInteger curveMaximumBrightness; // ivar: _curveMaximumBrightness
@property NSInteger curveMinimumBrightness; // ivar: _curveMinimumBrightness
@property (readonly) NSObject<HMDLightProfileDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDemoModeEnabled) BOOL demoModeEnabled; // ivar: _demoModeEnabled
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)areEncodedBrightnessLevelTransitionPointsValid:(id)arg0 ;
-(NSInteger)colorTemperatureForTransitionPoint:(id)arg0 ;
-(NSInteger)timeOfDayForMinimumBrightnessTransitionPoint:(id)arg0 maximumBrighnessTransitionPoint:(id)arg1 ;
-(id)colorTemperatureTransitionPointsForMaximumBrightnessWithEncodeNaturalLightingCurve:(id)arg0 ;
-(id)colorTemperatureTransitionPointsForMinimumBrightnessWithEncodeNaturalLightingCurve:(id)arg0 ;
-(id)initWithHome:(id)arg0 demoModeEnabled:(BOOL)arg1 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 demoModeEnabled:(BOOL)arg2 logIdentifier:(id)arg3 notificationCenter:(id)arg4 dataSource:(id)arg5 ;
-(void)configure;
-(void)handleResidentDeviceUpdated:(id)arg0 ;
-(void)initalizeCurve;
-(void)updateNaturalLightingContext;


@end


#endif