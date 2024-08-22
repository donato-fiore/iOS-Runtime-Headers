// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLERECOGNITIONPHRASETOKENS_H
#define QSSMUTABLERECOGNITIONPHRASETOKENS_H

@class NSArray;


#import "QSSRecognitionPhraseTokens.h"

@interface QSSMutableRecognitionPhraseTokens : QSSRecognitionPhraseTokens

@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif