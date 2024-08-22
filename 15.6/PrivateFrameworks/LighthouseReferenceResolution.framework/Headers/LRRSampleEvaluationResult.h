// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LRRSAMPLEEVALUATIONRESULT_H
#define LRRSAMPLEEVALUATIONRESULT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface LRRSampleEvaluationResult : NSObject

@property (copy, nonatomic) NSString *clpId; // ivar: _clpId
@property (nonatomic) BOOL evaluationResultTrue; // ivar: _evaluationResultTrue
@property (copy, nonatomic) NSString *interactionId; // ivar: _interactionId
@property (copy, nonatomic) NSString *localeOfSiri; // ivar: _localeOfSiri
@property (copy, nonatomic) NSString *operatingSystemVersion; // ivar: _operatingSystemVersion
@property (copy, nonatomic) NSString *originalInteractionId; // ivar: _originalInteractionId
@property (copy, nonatomic) NSString *requestEndDate; // ivar: _requestEndDate
@property (copy, nonatomic) NSNumber *requestEndTs; // ivar: _requestEndTs
@property (copy, nonatomic) NSString *requestStartDate; // ivar: _requestStartDate
@property (copy, nonatomic) NSNumber *requestStartTs; // ivar: _requestStartTs
@property (copy, nonatomic) NSNumber *requestTimeInSec; // ivar: _requestTimeInSec
@property (copy, nonatomic) NSString *taskStarted; // ivar: _taskStarted
@property (nonatomic) BOOL wasEvaluated; // ivar: _wasEvaluated


-(id)toDictionary;


@end


#endif