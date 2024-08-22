// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDCANDIDATESUGGESTION_H
#define TIKEYBOARDCANDIDATESUGGESTION_H

@class TIKeyboardCandidate;


#import "UITextSuggestion.h"

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {
    NSUInteger _customInfoType;
}


@property (readonly, nonatomic) UITextSuggestion *textSuggestion; // ivar: _textSuggestion


+(id)candidateWithSuggestion:(id)arg0 ;
+(id)candidateWithSuggestion:(id)arg0 customInfoType:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)customInfoType;
-(id)candidate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSuggestion:(id)arg0 customInfoType:(NSUInteger)arg1 ;
-(id)input;
-(id)label;


@end


#endif