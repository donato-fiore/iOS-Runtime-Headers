// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCANDIDATELIST_H
#define PRCANDIDATELIST_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "PRErrorModel.h"

@interface PRCandidateList : NSObject {
    NSMutableArray *_candidates;
    NSUInteger _maxCount;
    _NSRange _defaultReplacementRange;
    PRErrorModel *_errorModel;
    NSArray *_capitalizationDictionaryArray;
}




-(BOOL)isFull;
-(NSUInteger)count;
-(NSUInteger)maxCount;
-(id)candidateStrings;
-(id)candidateWithString:(id)arg0 ;
-(id)candidates;
-(id)description;
-(id)initWithMaxCount:(NSUInteger)arg0 defaultReplacementRange:(struct _NSRange )arg1 customErrorModel:(id)arg2 capitalizationDictionaryArray:(id)arg3 ;
-(struct _NSRange )defaultReplacementRange;
-(void)addCandidate:(id)arg0 ;
-(void)addCandidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 errorType:(NSUInteger)arg2 ;
-(void)addCandidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 errorType:(NSUInteger)arg3 ;
-(void)addCandidateWithString:(id)arg0 errorType:(NSUInteger)arg1 ;
-(void)addCandidateWithString:(id)arg0 replacementRange:(struct _NSRange )arg1 errorType:(NSUInteger)arg2 ;
-(void)addCandidateWithWords:(id)arg0 replacementRange:(struct _NSRange )arg1 errorType:(NSUInteger)arg2 ;
-(void)addReplacementCandidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 ;
-(void)addTranspositionCandidateWithBuffer:(char *)arg0 encoding:(unsigned int)arg1 transform:(NSUInteger)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 ;
-(void)dealloc;


@end


#endif