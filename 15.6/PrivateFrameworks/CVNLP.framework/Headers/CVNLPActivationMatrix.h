// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPACTIVATIONMATRIX_H
#define CVNLPACTIVATIONMATRIX_H

@class MLMultiArray, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface CVNLPActivationMatrix : NSObject

@property (readonly, nonatomic) NSInteger _cachedBlankIndex; // ivar: __cachedBlankIndex
@property (readonly, nonatomic) NSInteger _cachedBlankIndexTimestep; // ivar: __cachedBlankIndexTimestep
@property NSInteger _cachedPriorityQueueTimestep; // ivar: __cachedPriorityQueueTimestep
@property *void _cachedTimesample; // ivar: __cachedTimesample
@property (nonatomic) *CGFloat _doubleScoreMatrix; // ivar: __doubleScoreMatrix
@property (nonatomic) ? _espressoBuffer; // ivar: __espressoBuffer
@property (retain, nonatomic) MLMultiArray *_indexArray; // ivar: __indexArray
@property (nonatomic) ? _indexBuffer; // ivar: __indexBuffer
@property (nonatomic) BOOL _isDoubleDataType; // ivar: __isDoubleDataType
@property (retain, nonatomic) MLMultiArray *_multiArray; // ivar: __multiArray
@property (nonatomic) NSInteger _observationCount; // ivar: __observationCount
@property (nonatomic) NSInteger _observationStride; // ivar: __observationStride
@property (nonatomic) CVNLPTextDecodingPruningPolicy _pruningPolicy; // ivar: __pruningPolicy
@property (nonatomic) NSInteger _timeStride; // ivar: __timeStride
@property (nonatomic) NSInteger _timestepCount; // ivar: __timestepCount
@property (nonatomic) NSInteger _type; // ivar: __type
@property (nonatomic) BOOL _usingIndexes; // ivar: __usingIndexes
@property (nonatomic) NSInteger blankIndex; // ivar: _blankIndex
@property (retain, nonatomic) NSOrderedSet *characterObservations; // ivar: _characterObservations
@property (readonly, nonatomic) NSInteger domainType; // ivar: _domainType


-(CGFloat)_logProbabilityForRawProbability:(CGFloat)arg0 ;
-(CGFloat)_valueForObservationIndex:(NSInteger)arg0 timestep:(NSInteger)arg1 ;
-(CGFloat)logProbabilityForBlankAtTimestep:(NSInteger)arg0 ;
-(CGFloat)logProbabilityForObservationIndex:(NSInteger)arg0 timestep:(NSInteger)arg1 ;
-(CGFloat)probabilityForBlankAtTimestep:(NSInteger)arg0 ;
-(CGFloat)probabilityForObservationIndex:(NSInteger)arg0 timestep:(NSInteger)arg1 ;
-(NSInteger)blankIndexForTimestep:(NSInteger)arg0 ;
-(NSInteger)characterIndexForObservationIndex:(NSInteger)arg0 timestep:(NSInteger)arg1 ;
-(NSInteger)observationCount;
-(NSInteger)timestepCount;
-(id)_candidateSymbolAtIndex:(NSInteger)arg0 forTimestep:(NSInteger)arg1 outputScore:(*CGFloat)arg2 ;
-(id)debugDescription;
-(id)initWithBuffer:(struct ? )arg0 domainType:(NSInteger)arg1 characterObservations:(id)arg2 blankIndex:(NSInteger)arg3 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy )arg4 ;
-(id)initWithBuffer:(struct ? )arg0 indexBuffer:(struct ? )arg1 domainType:(NSInteger)arg2 characterObservations:(id)arg3 blankIndex:(NSInteger)arg4 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy )arg5 ;
-(id)initWithMultiArray:(id)arg0 characterObservations:(id)arg1 blankIndex:(NSInteger)arg2 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy )arg3 ;
-(id)initWithMultiArray:(id)arg0 domainType:(NSInteger)arg1 characterObservations:(id)arg2 blankIndex:(NSInteger)arg3 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy )arg4 ;
-(id)initWithMultiArray:(id)arg0 indexArray:(id)arg1 domainType:(NSInteger)arg2 characterObservations:(id)arg3 blankIndex:(NSInteger)arg4 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy )arg5 ;
-(id)topCandidateForTimestep:(NSInteger)arg0 outputLogProbability:(*CGFloat)arg1 ;
-(id)topCandidateForTimestep:(NSInteger)arg0 outputLogProbability:(*CGFloat)arg1 outputIndex:(*NSInteger)arg2 ;
-(id)topCandidateForTimestep:(NSInteger)arg0 outputProbability:(*CGFloat)arg1 outputIndex:(*NSInteger)arg2 ;
-(void)_enumerateNonBlankCandidatesInTimestep:(NSInteger)arg0 block:(id)arg1 ;
-(void)_sortNonBlankCandidatesForTimestep:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateNonBlankCandidatesInTimestep:(NSInteger)arg0 block:(id)arg1 ;


@end


#endif