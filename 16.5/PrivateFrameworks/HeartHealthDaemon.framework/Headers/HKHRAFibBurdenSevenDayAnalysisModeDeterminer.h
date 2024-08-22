// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENSEVENDAYANALYSISMODEDETERMINER_H
#define HKHRAFIBBURDENSEVENDAYANALYSISMODEDETERMINER_H

@class HDProfile, HKCalendarCache;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenSevenDayAnalysisModeDeterminer : NSObject {
    HDProfile *_profile;
    HKCalendarCache *_calendarCache;
}




-(id)_mostRecentSampleEndDateDayIndexWithError:(*id)arg0 ;
-(id)_onboardingDateDayIndexWithFeatureStatus:(id)arg0 error:(*id)arg1 ;
-(id)determineModeForAnalysisWeekRange:(struct ? )arg0 featureStatus:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 ;


@end


#endif