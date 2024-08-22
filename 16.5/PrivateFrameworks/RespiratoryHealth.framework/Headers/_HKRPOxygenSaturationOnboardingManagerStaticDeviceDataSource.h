// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKRPOXYGENSATURATIONONBOARDINGMANAGERSTATICDEVICEDATASOURCE_H
#define _HKRPOXYGENSATURATIONONBOARDINGMANAGERSTATICDEVICEDATASOURCE_H

@class HKRPOxygenSaturationOnboardingManagerDataSource, NRDevice;



@interface _HKRPOxygenSaturationOnboardingManagerStaticDeviceDataSource : HKRPOxygenSaturationOnboardingManagerDataSource {
    NRDevice *_device;
}




-(id)device;
-(id)initWithDevice:(id)arg0 ;


@end


#endif