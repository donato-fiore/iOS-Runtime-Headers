// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELPREDICTION_H
#define ATXANCHORMODELPREDICTION_H

@class NSString, NSDateInterval;
@protocol NSSecureCoding, ATXAnchorModelCandidateClassifierProtocol;

#import <Foundation/Foundation.h>

#import "ATXDuetEvent.h"
#import "ATXAnchorModelPredictionOffsetFromAnchorOccurrence.h"

@interface ATXAnchorModelPrediction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ATXDuetEvent *anchorEvent; // ivar: _anchorEvent
@property (readonly, nonatomic) CGFloat anchorPopularity; // ivar: _anchorPopularity
@property (readonly, nonatomic) NSString *anchorType; // ivar: _anchorType
@property (readonly, nonatomic) NSObject<ATXAnchorModelCandidateClassifierProtocol> *candidateClassifier; // ivar: _candidateClassifier
@property (readonly, nonatomic) NSString *candidateId; // ivar: _candidateId
@property (readonly, nonatomic) NSString *candidateType; // ivar: _candidateType
@property (readonly, nonatomic) CGFloat classConditionalProbability; // ivar: _classConditionalProbability
@property (readonly, nonatomic) NSDateInterval *dateIntervalForPrediction; // ivar: _dateIntervalForPrediction
@property (readonly, nonatomic) CGFloat globalPopularity; // ivar: _globalPopularity
@property (readonly, nonatomic) NSUInteger numUniqueOccurrencesAfterAnchor; // ivar: _numUniqueOccurrencesAfterAnchor
@property (readonly, nonatomic) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction; // ivar: _offsetFromAnchorToShowPrediction
@property (readonly, nonatomic) CGFloat posteriorProbability; // ivar: _posteriorProbability
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) CGFloat standardDeviationOfOffsetFromAnchor; // ivar: _standardDeviationOfOffsetFromAnchor


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAnchorType:(id)arg0 anchorEvent:(id)arg1 candidateType:(id)arg2 candidateId:(id)arg3 dateIntervalForPrediction:(id)arg4 score:(CGFloat)arg5 numUniqueOccurrencesAfterAnchor:(NSUInteger)arg6 posteriorProbability:(CGFloat)arg7 classConditionalProbability:(CGFloat)arg8 standardDeviationOfOffsetFromAnchor:(CGFloat)arg9 anchorPopularity:(CGFloat)arg10 globalPopularity:(CGFloat)arg11 offsetFromAnchorToShowPrediction:(id)arg12 candidateClassifier:(id)arg13 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif