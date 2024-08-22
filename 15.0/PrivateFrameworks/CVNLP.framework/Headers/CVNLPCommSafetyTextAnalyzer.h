// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPCOMMSAFETYTEXTANALYZER_H
#define CVNLPCOMMSAFETYTEXTANALYZER_H

@class NSArray;


#import "CVNLPModelBase.h"

@interface CVNLPCommSafetyTextAnalyzer : CVNLPModelBase {
    NSArray *_models;
}




-(NSInteger)_classifyString:(id)arg0 ;
-(NSInteger)classifyString:(id)arg0 ;
-(id)_classificationForTextItems:(id)arg0 conversationIdentifier:(id)arg1 ;
-(id)_classificationsForTextItems:(id)arg0 previousClassifications:(id)arg1 ;
-(id)initWithModelURL:(id)arg0 options:(id)arg1 ;
-(id)processText:(id)arg0 inConversationWithIdentifier:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
-(id)processText:(id)arg0 inConversationWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(*id)arg4 ;
// -(void)processConversationsWithStartDate:(id)arg0 endDate:(id)arg1 previousClassifications:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;


@end


#endif