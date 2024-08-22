// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTREPLACEMENTCANDIDATE_H
#define UITEXTREPLACEMENTCANDIDATE_H

@class TIKeyboardCandidateSingle;


#import "UITextReplacement.h"

@interface UITextReplacementCandidate : TIKeyboardCandidateSingle

@property (readonly, nonatomic) UITextReplacement *replacement; // ivar: _replacement


+(id)textReplacementCandidateForTextReplacement:(id)arg0 ;
-(id)_initWithTextReplacement:(id)arg0 ;
-(id)label;


@end


#endif