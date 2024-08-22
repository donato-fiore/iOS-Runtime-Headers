// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSINGLEPHRASERESULT_H
#define CSSINGLEPHRASERESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CSKeywordAnalyzerNDAPIResult.h"

@interface CSSinglePhraseResult : NSObject <NSCopying>



@property (readonly, nonatomic) float combinedScore; // ivar: _combinedScore
@property (readonly, nonatomic) NSUInteger decision; // ivar: _decision
@property (readonly, nonatomic) BOOL isRunningQuasar; // ivar: _isRunningQuasar
@property (readonly, nonatomic) BOOL isSecondChance; // ivar: _isSecondChance
@property (readonly, nonatomic) BOOL isSecondChanceCandidate; // ivar: _isSecondChanceCandidate
@property (readonly, nonatomic) CSKeywordAnalyzerNDAPIResult *ndapiResult; // ivar: _ndapiResult
@property (readonly, nonatomic) float ndapiScore; // ivar: _ndapiScore
@property (readonly, nonatomic) NSUInteger phId; // ivar: _phId
@property (readonly, nonatomic) float recognizerScore; // ivar: _recognizerScore


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPhId:(NSUInteger)arg0 keywordDetectorDecision:(NSUInteger)arg1 combinedScore:(float)arg2 ndapiScore:(float)arg3 ndapiResult:(id)arg4 recognizerScore:(float)arg5 isSecondChance:(BOOL)arg6 isSecondChanceCandidate:(BOOL)arg7 isRunningQuasar:(BOOL)arg8 ;


@end


#endif