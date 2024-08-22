// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENANALYZER_H
#define HKHRAFIBBURDENANALYZER_H

@class HKCalendarCache;
@protocol HKHRAFibBurdenDeterminer;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenTachogramClassificationsRetriever.h"
#import "HKHRAFibBurdenTachogramClassifierFactory.h"
#import "HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer.h"

@interface HKHRAFibBurdenAnalyzer : NSObject {
    HKHRAFibBurdenTachogramClassificationsRetriever *_classificationRetriever;
    id<HKHRAFibBurdenDeterminer> *_burdenDeterminer;
    HKHRAFibBurdenTachogramClassifierFactory *_tachogramClassifierFactory;
    HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer *_majorityTimeZoneDeterminer;
    HKCalendarCache *_calendarCache;
    id *_dateGenerator;
}




-(id)_generateDayOfWeekHistogramWithTachogramClassifier:(id)arg0 error:(*id)arg1 ;
-(id)_generateTimeOfDayHistogramWithTachogramClassifier:(id)arg0 error:(*id)arg1 ;
-(id)_julianDayToTimeZoneMappingForPastSixWeeksWithError:(*id)arg0 ;
-(id)_logDayNameForWeekday:(NSInteger)arg0 ;
-(id)generateSevenDayBurdenWithRange:(struct ? )arg0 error:(*id)arg1 ;
-(id)generateSixWeekBurdenHistogramsWithError:(*id)arg0 ;
-(id)initWithClassificationRetriever:(id)arg0 burdenDeterminer:(id)arg1 tachogramClassifierFactory:(id)arg2 majorityTimeZoneDeterminer:(id)arg3 calendarCache:(id)arg4 dateGenerator:(id)arg5 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif