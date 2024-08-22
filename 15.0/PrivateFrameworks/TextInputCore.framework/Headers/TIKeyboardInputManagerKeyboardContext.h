// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGERKEYBOARDCONTEXT_H
#define TIKEYBOARDINPUTMANAGERKEYBOARDCONTEXT_H

@class TIKeyboardState, TIKeyboardOutput;

#import <Foundation/Foundation.h>

#import "TIRevisionHistory.h"

@interface TIKeyboardInputManagerKeyboardContext : NSObject

@property (readonly, nonatomic) TIKeyboardState *currentState; // ivar: _currentState
@property (readonly, nonatomic) TIKeyboardOutput *output; // ivar: _output
@property (retain, nonatomic) TIRevisionHistory *revisionHistory; // ivar: _revisionHistory


-(id)initWithKeyboardState:(id)arg0 ;
-(void)acceptCandidate:(id)arg0 ;
-(void)clearInputForMarkedText;
-(void)deleteBackward:(NSUInteger)arg0 ;
-(void)deleteForward:(NSUInteger)arg0 ;
-(void)deleteHandwritingStrokes:(id)arg0 ;
-(void)deleteTextBackward:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)insertTextAfterSelection:(id)arg0 ;
-(void)unmarkText:(id)arg0 ;


@end


#endif