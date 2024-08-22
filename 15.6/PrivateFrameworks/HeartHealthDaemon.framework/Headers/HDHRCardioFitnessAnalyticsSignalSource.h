// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHRCARDIOFITNESSANALYTICSSIGNALSOURCE_H
#define HDHRCARDIOFITNESSANALYTICSSIGNALSOURCE_H

@class HKHRCardioFitnessAnalyticsSignalSource, HDProfile;



@interface HDHRCardioFitnessAnalyticsSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HDProfile *_profile;
}




-(NSInteger)_biologicalSexWithError:(*id)arg0 ;
-(NSInteger)bucketedAgeWithError:(*id)arg0 ;
-(id)_birthDateComponentsWithError:(*id)arg0 ;
-(id)_classificationStringForCardioFitnessValue:(CGFloat)arg0 age:(NSInteger)arg1 biologicalSex:(NSInteger)arg2 ;
-(id)_latestCardioFitnessValueWithError:(*id)arg0 ;
-(id)biologicalSexStringWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)latestClassificationWithIsOnboarded:(BOOL)arg0 error:(*id)arg1 ;


@end


#endif