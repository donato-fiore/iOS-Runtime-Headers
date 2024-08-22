// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDPATTERNMATCHSOLVER_H
#define WBSPASSWORDPATTERNMATCHSOLVER_H

@class NSString, NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSPasswordPatternMatchSolver : NSObject {
    NSString *_password;
    NSSet *_patternMatches;
    NSMutableDictionary *_partialSolutions;
}




-(id)_exhaustiveSearchPatternWithStartIndex:(NSUInteger)arg0 endIndex:(NSUInteger)arg1 ;
-(id)_partialSolutionWithEndIndex:(NSUInteger)arg0 patternCount:(NSUInteger)arg1 ;
-(id)_unwindSolution;
-(id)initWithPassword:(id)arg0 patternMatches:(id)arg1 ;
-(id)optimalEvaluation;
-(void)_enumeratePartialSolutionsWithEndIndex:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_setPartialSolution:(id)arg0 withEndIndex:(NSUInteger)arg1 patternCount:(NSUInteger)arg2 ;
-(void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(NSUInteger)arg0 ;
-(void)_updatePartialSolutionsWithPatternMatch:(id)arg0 patternCount:(NSUInteger)arg1 ;


@end


#endif