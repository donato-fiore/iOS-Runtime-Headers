// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECOGNIZEDRAWINGOPERATION_H
#define RECOGNIZEDRAWINGOPERATION_H

@class NSOperation, TIHandwritingStrokes, NSLocale, NSArray, NSString, CHRecognizer;


#import "TIInputManagerHandwriting.h"

@interface RecognizeDrawingOperation : NSOperation {
    TIHandwritingStrokes *_strokes;
    NSLocale *_recognitionLanguage;
}


@property (retain, nonatomic) NSArray *candidates; // ivar: _candidates
@property (retain, nonatomic) NSString *history; // ivar: _history
@property (retain, nonatomic) TIInputManagerHandwriting *manager; // ivar: _im
@property (retain, nonatomic) CHRecognizer *recognizer; // ivar: _recognizer


+(id)drawingWithStrokes:(id)arg0 ;
+(id)recognitionResultsForDrawing:(id)arg0 withRecognizer:(id)arg1 history:(id)arg2 shouldCancel:(id)arg3 ;
+(id)textRecognitionResultsForDrawing:(id)arg0 withRecognizer:(id)arg1 keyboardState:(id)arg2 history:(id)arg3 shouldCancel:(id)arg4 ;
+(int)autoCorrectionModeForKeyboardAutoCorrectionType:(NSUInteger)arg0 ;
+(int)capitalizationModeForKeyboardAutoCapitalizationType:(NSUInteger)arg0 ;
+(int)recognitionContentTypeForKeyboardState:(id)arg0 ;
-(id)initWithInputManager:(id)arg0 strokes:(id)arg1 history:(id)arg2 ;
-(void)dealloc;
-(void)main;


@end


#endif