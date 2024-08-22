// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVABTESTGENERATOR_H
#define MSVABTESTGENERATOR_H


#import <Foundation/Foundation.h>


@interface MSVABTestGenerator : NSObject

@property (readonly, nonatomic) float probabilityForOutcomeA; // ivar: _probabilityForOutcomeA
@property (readonly, nonatomic) NSInteger totalExperiments; // ivar: _totalExperiments
@property (readonly, nonatomic) NSInteger totalForOutcomeA; // ivar: _totalForOutcomeA
@property (readonly, nonatomic) NSInteger totalForOutcomeB; // ivar: _totalForOutcomeB


-(NSInteger)nextOutcome;
-(id)description;
-(id)initWithProbabilityForOutcomeA:(float)arg0 ;
-(void)updateProbabilityForOutcomeA:(float)arg0 ;


@end


#endif