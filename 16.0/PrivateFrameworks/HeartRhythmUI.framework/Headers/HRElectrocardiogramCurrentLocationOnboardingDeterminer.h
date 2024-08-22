// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRELECTROCARDIOGRAMCURRENTLOCATIONONBOARDINGDETERMINER_H
#define HRELECTROCARDIOGRAMCURRENTLOCATIONONBOARDINGDETERMINER_H

@class HKHealthStore, HKMobileCountryCodeManager;

#import <Foundation/Foundation.h>


@interface HRElectrocardiogramCurrentLocationOnboardingDeterminer : NSObject {
    HKHealthStore *_healthStore;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
}




-(id)initWithHealthStore:(id)arg0 ;
-(void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(id)arg0 ;


@end


#endif