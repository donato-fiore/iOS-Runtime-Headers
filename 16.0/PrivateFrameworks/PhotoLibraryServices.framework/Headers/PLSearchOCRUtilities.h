// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHOCRUTILITIES_H
#define PLSEARCHOCRUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSearchOCRUtilities : NSObject



+(id)_ocrTextLineCandidatesFromTextBlockObservation:(id)arg0 tokenizer:(id)arg1 allowLowConfidence:(BOOL)arg2 ;
+(id)_ocrTextLinesFromDocumentObservation:(id)arg0 allowLowConfidence:(BOOL)arg1 ;
+(id)_wordsFromString:(id)arg0 usingTokenizer:(id)arg1 ;
+(id)jsonOCRTextLinesFromDocumentObservation:(id)arg0 ;
+(id)ocrTextLinesFromDocumentObservation:(id)arg0 ;
+(id)spotlightTextLinesFromDocumentObservation:(id)arg0 ;


@end


#endif