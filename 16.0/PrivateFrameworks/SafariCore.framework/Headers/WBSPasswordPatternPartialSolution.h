// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDPATTERNPARTIALSOLUTION_H
#define WBSPASSWORDPATTERNPARTIALSOLUTION_H


#import <Foundation/Foundation.h>

#import "WBSPasswordPatternMatch.h"

@interface WBSPasswordPatternPartialSolution : NSObject

@property (readonly, nonatomic) CGFloat guessesRequiredWithPatternCountPenalty; // ivar: _guessesRequiredWithPatternCountPenalty
@property (readonly, nonatomic) CGFloat guessesRequiredWithoutPatternCountPenalty; // ivar: _guessesRequiredWithoutPatternCountPenalty
@property (readonly, nonatomic) WBSPasswordPatternMatch *patternMatch; // ivar: _patternMatch


-(id)initWithPatternMatch:(id)arg0 guessesRequiredWithoutPatternCountPenalty:(CGFloat)arg1 withPatternCountPenalty:(CGFloat)arg2 ;


@end


#endif