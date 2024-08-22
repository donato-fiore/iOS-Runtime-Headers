// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLERECOGNITIONPHRASETOKENSALTERNATIVES_H
#define QSSMUTABLERECOGNITIONPHRASETOKENSALTERNATIVES_H

@class NSArray;


#import "QSSRecognitionPhraseTokensAlternatives.h"

@interface QSSMutableRecognitionPhraseTokensAlternatives : QSSRecognitionPhraseTokensAlternatives

@property (nonatomic) BOOL has_unsuggested_alternatives;
@property (copy, nonatomic) NSArray *tok_phrases;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif