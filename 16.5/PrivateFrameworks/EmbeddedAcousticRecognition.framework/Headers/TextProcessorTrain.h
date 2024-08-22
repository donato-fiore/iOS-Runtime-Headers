// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TEXTPROCESSORTRAIN_H
#define TEXTPROCESSORTRAIN_H

@class NSMutableArray, NSString;
@protocol TextProcessor;

#import <Foundation/Foundation.h>

#import "_EARLMTKaldiVocab.h"

@interface TextProcessorTrain : NSObject <TextProcessor>

 {
    NSMutableArray *_text;
    _EARLMTKaldiVocab *_vocab;
    *NSInteger _numValidTokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberTokens;
-(NSUInteger)numberSamples;
-(id)init;
-(id)initWithVocab:(id)arg0 ;
-(id)textSequence;
-(void)addText:(id)arg0 ;
-(void)addText:(id)arg0 length:(NSUInteger)arg1 ;
-(void)addTokenizedText:(id)arg0 length:(NSUInteger)arg1 ;
-(void)shuffleSamples;


@end


#endif