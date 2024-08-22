// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPSERVERNLCLASSIFIER_H
#define SNLPSERVERNLCLASSIFIER_H



#import "SNLPITFMClassifier.h"

@interface SNLPServerNLClassifier : SNLPITFMClassifier



+(id)_classifierWithModelURL:(id)arg0 configURL:(id)arg1 spanVocabularyURL:(id)arg2 contextVocabularyURL:(id)arg3 versionURL:(id)arg4 error:(*id)arg5 ;
+(id)_convertITFMResponse:(id)arg0 ;
+(id)_convertSNLCRequest:(id)arg0 ;
+(id)_initializationBlock:(SEL)arg0 ;
+(id)classifierWithModelURL:(id)arg0 configURL:(id)arg1 spanVocabularyURL:(id)arg2 contextVocabularyURL:(id)arg3 error:(*id)arg4 ;
+(id)classifierWithPathURL:(id)arg0 error:(*id)arg1 ;
-(id)inferenceResponseForRequest:(id)arg0 ;
-(id)inferenceResponseForRequest:(id)arg0 error:(*id)arg1 ;
-(id)responseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif