// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SENTENCEPIECEMODEL_H
#define SENTENCEPIECEMODEL_H


#import <Foundation/Foundation.h>


@interface SentencePieceModel : NSObject {
    shared_ptr<sentencepiece::SentencePieceProcessor> _processor;
}




-(id)decodeFromIDs:(id)arg0 ;
-(id)decodeFromTokens:(id)arg0 ;
-(id)encodeAsIDsFrom:(id)arg0 ;
-(id)encodeAsTokensFrom:(id)arg0 ;
-(id)initWithModelPath:(id)arg0 ;
-(void)dealloc;


@end


#endif