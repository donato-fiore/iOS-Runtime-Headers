// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONSTREAMINGOPERATIONS_H
#define UIDICTATIONSTREAMINGOPERATIONS_H

@class NSMutableArray;
@protocol UITextInput;

#import <Foundation/Foundation.h>


@interface UIDictationStreamingOperations : NSObject {
    CGFloat _timeAfterInsertion;
    CGFloat _timeAfterSelectRange;
    id<UITextInput> *_document;
}


@property (retain, nonatomic) NSMutableArray *operations; // ivar: _operations


-(BOOL)hasOperations;
-(BOOL)isEmpty;
-(BOOL)isNotEmpty;
-(CGFloat)delayAfterSelector:(SEL)arg0 ;
-(NSUInteger)selectionChangeDelta;
-(id)init;
-(id)pop;
-(void)_performReplaceSelectedText:(id)arg0 ;
-(void)clearOperations;
-(void)dictationWillBeginInDocument:(id)arg0 ;
-(void)performSelectRangeForSpeech:(struct _NSRange )arg0 ;
-(void)popAndInvoke;
-(void)pushInsertTextForSpeech:(id)arg0 ;
-(void)pushReplaceSelectionWithText:(id)arg0 ;
-(void)pushSelectRangeForSpeech:(struct _NSRange )arg0 ;
-(void)pushSpeechOperation:(id)arg0 ;
-(void)pushSpeechOperationWithSelectionChangeDelta:(NSInteger)arg0 block:(id)arg1 ;
-(void)setDocument:(id)arg0 ;
-(void)willEndEditingInInputDelegate:(id)arg0 ;


@end


#endif