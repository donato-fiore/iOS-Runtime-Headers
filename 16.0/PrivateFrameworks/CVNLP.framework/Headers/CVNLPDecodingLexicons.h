// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPDECODINGLEXICONS_H
#define CVNLPDECODINGLEXICONS_H

@class NSArray;


#import "CVNLPInformationStream.h"

@interface CVNLPDecodingLexicons : CVNLPInformationStream {
    NSArray *_sortedLexicons;
}


@property (readonly, nonatomic) *unk inputNormalizationFunction; // ivar: _inputNormalizationFunction


-(NSUInteger)count;
-(id)initWithLexicons:(id)arg0 ;
-(id)initWithLexicons:(id)arg0 decodingWeight:(id)arg1 ;
-(id)initWithLexicons:(id)arg0 decodingWeight:(id)arg1 lowerBoundLogProbability:(id)arg2 ;
-(id)initWithLexicons:(id)arg0 decodingWeight:(id)arg1 lowerBoundLogProbability:(id)arg2 inputNormalizationFunction:(*unk)arg3 ;
-(id)lexiconsForPriority:(NSUInteger)arg0 ;
-(id)packagedLexiconCursorsUsingTextDecodingContext:(id)arg0 ;
-(id)packagedLexiconRootCursors;
-(void)enumerateLexiconsSortedByPriorityWithBlock:(id)arg0 ;


@end


#endif