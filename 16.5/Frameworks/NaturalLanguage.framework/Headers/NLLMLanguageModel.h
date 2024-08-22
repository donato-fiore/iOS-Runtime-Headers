// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLLMLANGUAGEMODEL_H
#define NLLMLANGUAGEMODEL_H



#import "NLLanguageModel.h"
#import "NLLMTokenIDConverter.h"

@interface NLLMLanguageModel : NLLanguageModel {
    NLLMTokenIDConverter *_tokenIDConverter;
}




-(BOOL)generatesPredictions;
-(id)sessionWithOptions:(id)arg0 ;
-(id)tokenIDConverter;


@end


#endif