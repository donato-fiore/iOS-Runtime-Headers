// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLERECOGNITIONPHRASETOKENSALTERNATIVES_H
#define FTMUTABLERECOGNITIONPHRASETOKENSALTERNATIVES_H

@class NSArray;


#import "FTRecognitionPhraseTokensAlternatives.h"

@interface FTMutableRecognitionPhraseTokensAlternatives : FTRecognitionPhraseTokensAlternatives

@property (nonatomic) BOOL has_unsuggested_alternatives;
@property (copy, nonatomic) NSArray *tok_phrases;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif