// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLLMTOKENIDCONVERTER_H
#define NLLMTOKENIDCONVERTER_H



#import "NLTokenIDConverter.h"
#import "NLLanguageModel.h"
#import "NLTagger.h"

@interface NLLMTokenIDConverter : NLTokenIDConverter

@property (readonly, weak, nonatomic) NLLanguageModel *languageModel; // ivar: _languageModel
@property (readonly, retain, nonatomic) NLTagger *tagger; // ivar: _tagger


-(id)initWithLanguageModel:(id)arg0 ;
-(id)stringForTokenID:(unsigned int)arg0 ;
-(id)stringForTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(unsigned int)tokenIDForString:(id)arg0 ;
-(void)enumerateTokenIDsForString:(id)arg0 range:(struct _NSRange )arg1 withBlock:(id)arg2 ;


@end


#endif