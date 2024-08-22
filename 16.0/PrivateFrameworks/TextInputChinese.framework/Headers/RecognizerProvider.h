// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECOGNIZERPROVIDER_H
#define RECOGNIZERPROVIDER_H

@class NSLocale, CHRecognizer;

#import <Foundation/Foundation.h>


@interface RecognizerProvider : NSObject

@property (readonly) NSLocale *recognitionLanguage; // ivar: _recognitionLanguage
@property (readonly) CHRecognizer *recognizer; // ivar: _recognizer
@property (copy) id *recognizerDidLoadBlock; // ivar: _recognizerDidLoadBlock


-(id)initWithRecognitionLanguage:(id)arg0 ;
-(void)dealloc;
-(void)provideRecognizerToBlock:(id)arg0 ;
-(void)unloadRecognizer;


@end


#endif