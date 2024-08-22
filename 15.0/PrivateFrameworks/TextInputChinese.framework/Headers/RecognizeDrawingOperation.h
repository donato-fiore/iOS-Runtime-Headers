// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(id)recognitionResultsForStrokes:(id)arg0 withRecognizer:(id)arg1 history:(id)arg2 shouldCancel:(id)arg3 ;
-(id)initWithInputManager:(id)arg0 strokes:(id)arg1 history:(id)arg2 ;
-(void)dealloc;
-(void)main;


@end


#endif