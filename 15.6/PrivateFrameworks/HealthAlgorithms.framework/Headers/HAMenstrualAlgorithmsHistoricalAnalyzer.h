// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAMENSTRUALALGORITHMSHISTORICALANALYZER_H
#define HAMENSTRUALALGORITHMSHISTORICALANALYZER_H

@protocol HAMenstrualAlgorithmsPhaseIngestion;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

 {
    unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> _historicalAnalyzer;
    optional<unsigned int> _julianDayOfLastInput;
    unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> _phaseCondenser;
}




-(BOOL)shouldSendCoreAnalytics;
-(id)analyze;
-(id)init;
-(id)phaseStringFromNumber:(id)arg0 ;
-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)sendCoreAnalyticsEvent:(id)arg0 ;


@end


#endif