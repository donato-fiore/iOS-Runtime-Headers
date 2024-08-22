// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARSENTENCEPIECEMODULE_H
#define EARSENTENCEPIECEMODULE_H


#import <Foundation/Foundation.h>


@interface EARSentencePieceModule : NSObject {
    shared_ptr<sentencepiece::SentencePieceProcessor> _processor;
}




-(NSInteger)setEncodeOptions:(id)arg0 ;
-(id)encodeUtterance:(id)arg0 ;
-(id)initWithModelPath:(id)arg0 ;
-(void)dealloc;


@end


#endif