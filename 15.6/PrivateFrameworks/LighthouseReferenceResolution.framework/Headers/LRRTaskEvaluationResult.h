// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LRRTASKEVALUATIONRESULT_H
#define LRRTASKEVALUATIONRESULT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface LRRTaskEvaluationResult : NSObject

@property (copy, nonatomic) NSNumber *accuracyOnAnyUserParse; // ivar: _accuracyOnAnyUserParse
@property (copy, nonatomic) NSString *clpId; // ivar: _clpId
@property (copy, nonatomic) NSNumber *evaluatedTrueCount; // ivar: _evaluatedTrueCount
@property (copy, nonatomic) NSNumber *evaluationCount; // ivar: _evaluationCount
@property (copy, nonatomic) NSNumber *requestCount; // ivar: _requestCount
@property (copy, nonatomic) NSString *taskStarted; // ivar: _taskStarted
@property (copy, nonatomic) NSNumber *taskStartedTs; // ivar: _taskStartedTs
@property (copy, nonatomic) NSNumber *taskTimeInSec; // ivar: _taskTimeInSec


-(id)toDictionary;


@end


#endif