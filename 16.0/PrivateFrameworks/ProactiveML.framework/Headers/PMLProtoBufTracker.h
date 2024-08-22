// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLPROTOBUFTRACKER_H
#define PMLPROTOBUFTRACKER_H

@class NSString;
@protocol PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol, PMLTrackerAdapterProtocol;

#import <Foundation/Foundation.h>

#import "AWDProactiveModelFittingModelInfo.h"

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>



@property (readonly, nonatomic) NSObject<PMLTrackerAdapterProtocol> *adapter; // ivar: _adapter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (readonly, nonatomic) NSUInteger quantizationNumberOfBuckets; // ivar: _quantizationNumberOfBuckets
@property (readonly) Class superclass;


+(id)awdTrackerForPlanId:(id)arg0 ;
+(id)messageForGradient:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 serverIteration:(NSUInteger)arg4 modelInfo:(id)arg5 numberOfBuckets:(NSUInteger)arg6 ;
+(id)messageForWeights:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 modelInfo:(id)arg4 numberOfBuckets:(NSUInteger)arg5 ;
+(id)parsecTrackerForPlanId:(id)arg0 ;
+(id)trackerForPlanId:(id)arg0 ;
-(id)init;
-(id)initWithAdapter:(id)arg0 modelInfo:(id)arg1 ;
-(id)initWithAdapter:(id)arg0 modelInfo:(id)arg1 quantizationBuckets:(NSUInteger)arg2 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)trackEvaluationMetrics:(id)arg0 minibatchStats:(id)arg1 ;
-(id)trackGradient:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 serverIteration:(NSUInteger)arg4 ;
-(id)trackPrecisionAtK:(id)arg0 ;
-(id)trackPrecisionAtK:(id)arg0 minibatchStats:(id)arg1 ;
-(id)trackWeights:(id)arg0 scaleFactor:(float)arg1 minibatchStats:(id)arg2 evaluationMetrics:(id)arg3 ;


@end


#endif