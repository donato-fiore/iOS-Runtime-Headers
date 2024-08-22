// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINPUTCONTROLLERTOKENIZER_H
#define _UITEXTINPUTCONTROLLERTOKENIZER_H



#import "UITextInputStringTokenizer.h"
#import "UITextInputController.h"

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {
    UITextInputController *_textInput;
    *__CFStringTokenizer _tokenizer;
    ? _tokenizerRange;
    int _tokenizerType;
    BOOL _tokenizerIsInvalid;
}




-(BOOL)_isDownstreamForDirection:(NSInteger)arg0 atPosition:(id)arg1 ;
-(NSInteger)_indexForTextPosition:(id)arg0 ;
-(id)_closestTokenSubrangeForPosition:(id)arg0 granularity:(NSInteger)arg1 downstream:(BOOL)arg2 ;
-(id)_positionFromPosition:(id)arg0 offset:(NSUInteger)arg1 affinity:(NSInteger)arg2 ;
-(id)initWithTextInputController:(id)arg0 ;
-(void)dealloc;
-(void)invalidateTokenizer;


@end


#endif