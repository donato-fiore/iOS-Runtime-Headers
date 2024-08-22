// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMECABRAENVIRONMENTCONTEXTWRAPPER_H
#define TIMECABRAENVIRONMENTCONTEXTWRAPPER_H

@class NSString, NSArray, NSMutableArray, NSDate;

#import <Foundation/Foundation.h>


@interface TIMecabraEnvironmentContextWrapper : NSObject

@property (copy, nonatomic) NSString *appContext; // ivar: _appContext
@property (nonatomic) NSUInteger candidateIndex; // ivar: _candidateIndex
@property (nonatomic) NSUInteger candidateInternalIndex; // ivar: _candidateInternalIndex
@property (readonly, nonatomic) NSUInteger contextCandidateCount;
@property (readonly, nonatomic) NSArray *contextCandidateStrings;
@property (readonly, nonatomic) NSArray *contextCandidates;
@property (readonly, nonatomic) NSUInteger environmentCandidateCount; // ivar: _environmentCandidateCount
@property (readonly, nonatomic) NSArray *environmentCandidateStrings;
@property (retain, nonatomic) NSMutableArray *environmentCandidates; // ivar: _environmentCandidates
@property (readonly, nonatomic) NSArray *inlineCandidates;
@property (retain, nonatomic) NSDate *lastAnalyzeInputDate; // ivar: _lastAnalyzeInputDate
@property (nonatomic) *__MecabraContext mecabraContext; // ivar: _mecabraContext
@property (readonly, nonatomic) *__Mecabra mecabraEngine; // ivar: _mecabraEngine
@property (nonatomic) int shuangpinType; // ivar: _shuangpinType
@property (retain, nonatomic) NSMutableArray *temporaryCandidates; // ivar: _temporaryCandidates
@property (nonatomic) int textContentType; // ivar: _textContentType


-(*void)createMecabraCandidateFromString:(id)arg0 ;
-(BOOL)analyzeInput:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)analyzeString:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)predictionCandidatesWithOptions:(NSUInteger)arg0 maxNumberOfCandidates:(NSUInteger)arg1 ;
-(id)contextString:(id)arg0 forRightContext:(BOOL)arg1 ;
-(id)initWithMecabraEngine:(struct __Mecabra *)arg0 language:(int)arg1 ;
-(void)acceptInlineCandidates;
-(void)addContextCandidate:(*void)arg0 accept:(BOOL)arg1 ;
-(void)addContextStringCandidate:(*void)arg0 ;
-(void)addEnvironmentCandidate:(*void)arg0 atIndex:(NSUInteger)arg1 ;
-(void)clearAll;
-(void)clearContext;
-(void)clearInline;
-(void)commitPredictionCandidate:(*void)arg0 ;
-(void)completelyCommitInlineCandidate:(*void)arg0 ;
-(void)dealloc;
-(void)declareEndOfSentence;
-(void)partiallyCommitInlineCandidate:(*void)arg0 ;
-(void)removeCandidatesInRange:(struct _NSRange )arg0 ;
-(void)revertInlineCandidate;
-(void)revertLearningForCandidate:(*void)arg0 ;
-(void)setGeometryModel:(*void)arg0 modelData:(struct __CFArray *)arg1 ;
-(void)setKeyboardLayout:(id)arg0 ;
-(void)syncEnvironmentAndContextCandidates;


@end


#endif