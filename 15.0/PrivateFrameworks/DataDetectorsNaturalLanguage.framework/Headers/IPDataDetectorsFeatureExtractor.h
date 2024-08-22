// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPDATADETECTORSFEATUREEXTRACTOR_H
#define IPDATADETECTORSFEATUREEXTRACTOR_H



#import "IPFeatureExtractor.h"

@interface IPDataDetectorsFeatureExtractor : IPFeatureExtractor



-(BOOL)stringContainsNonTimeStrings:(id)arg0 aroundRange:(struct _NSRange )arg1 ;
-(id)featureDataComplementingFeatureData:(id)arg0 hour:(NSUInteger)arg1 minute:(NSUInteger)arg2 duration:(CGFloat)arg3 ;
-(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)newYearsEveDayDateFromReferenceDate:(id)arg0 ;
-(id)queue;
-(id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)arg0 ;
-(id)thisSaturdayDateFromReferenceDate:(id)arg0 ;
-(id)tomorrowDateFromReferenceDate:(id)arg0 ;
-(id)valentineDayDateFromReferenceDate:(id)arg0 ;
-(struct _NSRange )textRangeReferencingAfternoon:(id)arg0 ;
-(struct _NSRange )textRangeReferencingAllDay:(id)arg0 ;
-(struct _NSRange )textRangeReferencingEvening:(id)arg0 ;
-(struct _NSRange )textRangeReferencingMorning:(id)arg0 ;
-(struct _NSRange )textRangeReferencingNewYearsEve:(id)arg0 ;
-(struct _NSRange )textRangeReferencingNextWeekEnd:(id)arg0 ;
-(struct _NSRange )textRangeReferencingNoon:(id)arg0 ;
-(struct _NSRange )textRangeReferencingThisWeekEnd:(id)arg0 ;
-(struct _NSRange )textRangeReferencingTomorrow:(id)arg0 ;
-(struct _NSRange )textRangeReferencingValentineDay:(id)arg0 ;
-(struct __DDScanner *)standardScanner;
-(struct __DDScanner *)timeScanner;
-(void)setTimeZone:(id)arg0 forDateFeatures:(id)arg1 ;
-(void)standardizeTimezonesForDetectedFeatures:(id)arg0 ;


@end


#endif