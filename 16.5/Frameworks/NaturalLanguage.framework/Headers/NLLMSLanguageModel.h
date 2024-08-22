// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLLMSLANGUAGEMODEL_H
#define NLLMSLANGUAGEMODEL_H



#import "NLLanguageModel.h"

@interface NLLMSLanguageModel : NLLanguageModel {
    LanguageModel _model;
}




-(*void)_underlyingModel;
-(BOOL)generatesPredictions;
-(id)initWithLocalization:(id)arg0 options:(id)arg1 ;
-(id)sessionWithOptions:(id)arg0 ;


@end


#endif