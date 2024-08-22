// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKTEXTINPUTSTRINGTOKENIZER_H
#define VKTEXTINPUTSTRINGTOKENIZER_H

@class UITextInputStringTokenizer;


#import "VKCTextRecognitionResult.h"

@interface VKTextInputStringTokenizer : UITextInputStringTokenizer

@property (retain, nonatomic) VKCTextRecognitionResult *recognitionResult; // ivar: _recognitionResult


-(BOOL)isPosition:(id)arg0 atBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isPosition:(id)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)initWithTextInput:(id)arg0 recognitionResult:(id)arg1 ;
-(id)positionFromPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)rangeEnclosingPosition:(id)arg0 withGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;


@end


#endif