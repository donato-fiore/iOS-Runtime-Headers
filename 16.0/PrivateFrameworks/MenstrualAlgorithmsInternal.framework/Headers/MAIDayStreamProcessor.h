// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAIDAYSTREAMPROCESSOR_H
#define MAIDAYSTREAMPROCESSOR_H

@class NSNumber, NSMutableArray;
@protocol HAMenstrualAlgorithmsPhaseIngestion;

#import <Foundation/Foundation.h>


@interface MAIDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion>

 {
    unique_ptr<Nightingale::ngt_DayStreamProcessor, std::default_delete<Nightingale::ngt_DayStreamProcessor>> _dayStreamProcessor;
    optional<unsigned int> _julianDayOfLastInput;
    unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> _phaseCondenser;
}


@property (retain, nonatomic) NSNumber *userAgeInYears; // ivar: _userAgeInYears
@property (retain, nonatomic) NSMutableArray *watchIdentifiers; // ivar: _watchIdentifiers


-(id)initWithConfig:(id)arg0 ;
-(struct MAIDayStreamProcessorOutput )analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)arg0 ;
-(unsigned char)watchNumericIdentifierFromString:(id)arg0 ;
-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;


@end


#endif