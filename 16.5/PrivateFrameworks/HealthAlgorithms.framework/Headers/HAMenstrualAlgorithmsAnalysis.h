// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSANALYSIS_H
#define HAMENSTRUALALGORITHMSANALYSIS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HAMenstrualAlgorithmsDeviationAnalysis.h"
#import "HAMenstrualAlgorithmsStats.h"

@interface HAMenstrualAlgorithmsAnalysis : NSObject <NSSecureCoding>



@property (retain, nonatomic) HAMenstrualAlgorithmsDeviationAnalysis *deviationAnalysis; // ivar: _deviationAnalysis
@property (retain, nonatomic) NSArray *fertilityPredictions; // ivar: _fertilityPredictions
@property (nonatomic) BOOL isUserInactive; // ivar: _isUserInactive
@property (retain, nonatomic) NSArray *menstruationPredictions; // ivar: _menstruationPredictions
@property (retain, nonatomic) HAMenstrualAlgorithmsStats *stats; // ivar: _stats


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif