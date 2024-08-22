// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLPLEARNERCHARACTERLANGUAGEMODELINGDATA_H
#define NLPLEARNERCHARACTERLANGUAGEMODELINGDATA_H

@class CVNLPTokenIDConverter;


#import "NLPLearnerLanguageModelingData.h"

@interface NLPLearnerCharacterLanguageModelingData : NLPLearnerLanguageModelingData {
    CVNLPTokenIDConverter *_tokenConverter;
}




+(NSUInteger)defaultMaxSequenceLength;
+(void)initialize;
-(BOOL)loadFromCoreDuet:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)addResource:(id)arg0 ;


@end


#endif