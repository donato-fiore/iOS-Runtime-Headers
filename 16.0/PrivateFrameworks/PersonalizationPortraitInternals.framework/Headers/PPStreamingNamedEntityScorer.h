// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSTREAMINGNAMEDENTITYSCORER_H
#define PPSTREAMINGNAMEDENTITYSCORER_H


#import <Foundation/Foundation.h>

#import "PPScoreInterpreter.h"
#import "PPScoreDict.h"

@interface PPStreamingNamedEntityScorer : NSObject {
    PPScoreInterpreter *_aggregationScorer;
    PPScoreInterpreter *_finalScorer;
    PPScoreDict *_aggregationScoreInputs;
}


@property (retain, nonatomic) PPScoreDict *currentAggResult; // ivar: _currentAggResult


+(NSUInteger)sourceStatsNeededForBytecode:(id)arg0 ;
+(id)scoreInterpreterAggregationBytecode;
+(id)scoreInterpreterFinalBytecode;
-(float)getFinalScore;
-(float)getFinalScoreWithAggregationResultOut:(*id)arg0 finalResultOut:(*id)arg1 ;
-(id)initWithScoringDate:(id)arg0 perRecordDecayRate:(CGFloat)arg1 sourceStats:(id)arg2 ;
-(void)addRecord:(id)arg0 ;
-(void)startNewClusterWithDecayedFeedbackCounts:(id)arg0 mostRelevantRecord:(id)arg1 dominantEntityName:(id)arg2 ;


@end


#endif