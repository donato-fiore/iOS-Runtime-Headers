// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAMENSTRUALALGORITHMSDAYSTREAMPROCESSOR_H
#define HAMENSTRUALALGORITHMSDAYSTREAMPROCESSOR_H

@protocol HAMenstrualAlgorithmsPhaseIngestion;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

 {
    unique_ptr<Nightingale::ngt_DayStreamProcessor, std::default_delete<Nightingale::ngt_DayStreamProcessor>> _dayStreamProcessor;
    optional<unsigned int> _julianDayOfLastInput;
    unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> _phaseCondenser;
}




-(BOOL)shouldSendCoreAnalytics;
-(id)analyze;
-(id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)sendCoreAnalyticsEvent:(id)arg0 ;


@end


#endif