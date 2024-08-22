// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPERSONALIZATIONLOGISTICREGRESSIONCLASSIFIERCONFIGURATION_H
#define FCNEWSPERSONALIZATIONLOGISTICREGRESSIONCLASSIFIERCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationLogisticRegressionClassifierConfiguration : NSObject

@property (retain, nonatomic) NSNumber *convergenceThreshold; // ivar: _convergenceThreshold
@property (retain, nonatomic) NSNumber *l1Penalty; // ivar: _l1Penalty
@property (retain, nonatomic) NSNumber *l2Penalty; // ivar: _l2Penalty
@property (retain, nonatomic) NSNumber *maximumIterations; // ivar: _maximumIterations
@property (retain, nonatomic) NSNumber *stepSize; // ivar: _stepSize


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif