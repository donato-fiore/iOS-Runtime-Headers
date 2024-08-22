// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKRPOXYGENSATURATIONONBOARDINGMANAGER_H
#define HKRPOXYGENSATURATIONONBOARDINGMANAGER_H

@protocol HKRPOxygenSaturationOnboardingManagerDataSource;

#import <Foundation/Foundation.h>


@interface HKRPOxygenSaturationOnboardingManager : NSObject

@property (readonly, nonatomic) BOOL ageIsAppropriate;
@property (readonly, nonatomic) BOOL bloodOxygenFeatureEnabled;
@property (readonly, nonatomic) BOOL bloodOxygenRemoteDisabled;
@property (readonly, nonatomic) NSObject<HKRPOxygenSaturationOnboardingManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) BOOL onboardingComplete;
@property (readonly, nonatomic) BOOL onboardingDuringPairingShouldAppear;
@property (readonly, nonatomic) BOOL onboardingShouldAppear;
@property (readonly, nonatomic) BOOL pairedDeviceIsAppropriate;
@property (readonly, nonatomic) BOOL settingsShouldAppear;
@property (readonly, nonatomic) BOOL shouldAdvertise;


-(BOOL)_currentDeviceHasCapability;
-(BOOL)_isAlternateDevice;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)cacheCompletedOnboardingStateIfNeeded;
-(void)onboardWithCompletion:(id)arg0 ;


@end


#endif