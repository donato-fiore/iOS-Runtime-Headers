// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYMPTOMEXPERTSYSTEMDIAGNOSINGSTATE_H
#define SYMPTOMEXPERTSYSTEMDIAGNOSINGSTATE_H

@class NSDictionary;


#import "SymptomExpertSystemState.h"

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState

@property (retain, nonatomic) NSDictionary *triggeringSymptom; // ivar: _triggeringSymptom


+(id)createStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryPreds:(id)arg2 ;
-(void)createAndPostAWDMetric;


@end


#endif