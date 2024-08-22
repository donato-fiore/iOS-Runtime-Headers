// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAIHISTORICALANALYZER_H
#define MAIHISTORICALANALYZER_H

@class NSMutableArray;
@protocol HAMenstrualAlgorithmsPhaseIngestion;

#import <Foundation/Foundation.h>


@interface MAIHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

 {
    unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> _historicalAnalyzer;
    optional<unsigned int> _julianDayOfLastInput;
    unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> _phaseCondenser;
}


@property (retain, nonatomic) NSMutableArray *watchIdentifiers; // ivar: _watchIdentifiers


-(id)init;
-(id)phaseStringFromNumber:(id)arg0 ;
-(struct MAIHistoricalAnalyzerOutput )analyze;
-(unsigned char)watchNumericIdentifierFromString:(id)arg0 ;
-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;


@end


#endif