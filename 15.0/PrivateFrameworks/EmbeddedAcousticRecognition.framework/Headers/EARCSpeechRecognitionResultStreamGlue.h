// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EARCSPEECHRECOGNITIONRESULTSTREAMGLUE_H
#define EARCSPEECHRECOGNITIONRESULTSTREAMGLUE_H

@class NSString;
@protocol _EARSpeechRecognitionResultStream;

#import <Foundation/Foundation.h>


@interface EARCSpeechRecognitionResultStreamGlue : NSObject <_EARSpeechRecognitionResultStream>

 {
    EARCSpeechRecognitionResultStream _stream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStream:(struct EARCSpeechRecognitionResultStream *)arg0 ;
-(void)dealloc;
-(void)speechRecognizer:(id)arg0 didFinishRecognitionWithError:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didProcessAudioDuration:(CGFloat)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResults:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResults:(id)arg1 tokenSausage:(id)arg2 nBestChoices:(id)arg3 ;
-(void)speechRecognizer:(id)arg0 didRecognizePartialResult:(id)arg1 ;


@end


#endif