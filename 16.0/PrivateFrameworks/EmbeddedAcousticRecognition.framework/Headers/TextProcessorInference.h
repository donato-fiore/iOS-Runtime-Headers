// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TEXTPROCESSORINFERENCE_H
#define TEXTPROCESSORINFERENCE_H

@class NSMutableArray, NSString;
@protocol TextProcessor;

#import <Foundation/Foundation.h>

#import "_EARLMTKaldiVocab.h"

@interface TextProcessorInference : NSObject <TextProcessor>

 {
    NSMutableArray *_text;
    _EARLMTKaldiVocab *_vocab;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLength:(NSUInteger)arg0 vocab:(id)arg1 BOS:(NSUInteger)arg2 ;
-(id)initWithVocab:(id)arg0 ;
-(id)textSequence;
-(void)addText:(id)arg0 ;
-(void)resetWithBOS:(NSUInteger)arg0 ;


@end


#endif