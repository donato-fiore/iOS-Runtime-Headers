// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDTEXTINPUTTOKENIZER_H
#define TSDTEXTINPUTTOKENIZER_H

@class UITextInputStringTokenizer;
@protocol TSDTextInput;


#import "TSDTextInputResponder.h"

@interface TSDTextInputTokenizer : UITextInputStringTokenizer {
    TSDTextInputResponder *_textInputResponder;
}


@property (readonly, nonatomic) NSObject<TSDTextInput> *editor;


-(BOOL)isPosition:(id)arg0 atBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isPosition:(id)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)initWithTextInput:(id)arg0 ;
-(id)p_moveToEndOfWordFromPosition:(id)arg0 ;
-(id)p_moveToStartOfWordFromPosition:(id)arg0 ;
-(id)p_positionFromPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)rangeEnclosingPosition:(id)arg0 withGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;


@end


#endif