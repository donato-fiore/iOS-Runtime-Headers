// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENSEVENDAYANALYSISFEATURESTATUSINSPECTOR_H
#define HKHRAFIBBURDENSEVENDAYANALYSISFEATURESTATUSINSPECTOR_H

@class HDFeatureAvailabilityOnboardingEligibilityDeterminer;
@protocol HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspector : NSObject <HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting>

 {
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;
}




-(BOOL)shouldAllowAnalysisWithFeatureStatus:(id)arg0 ;
-(id)initWithOnboardingEligibilityDeterminer:(id)arg0 ;
-(id)pairedDevices;


@end


#endif