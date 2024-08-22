// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRNLPLANGUAGEMODEL_H
#define PRNLPLANGUAGEMODEL_H

@class NLLanguageModel, NLLanguageModelSession, NSMutableDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface PRNLPLanguageModel : NSObject {
    NLLanguageModel *_model;
    NLLanguageModelSession *_session;
    NSMutableDictionary *_cachedStates;
    NSMutableArray *_cachedContextsRecycleQueue;
}


@property (readonly, nonatomic) NSString *localization; // ivar: _localization
@property (readonly) NSInteger modelType; // ivar: _modelType


+(id)languageModelWithLocalization:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)getConditionalProbabilityForString:(id)arg0 context:(id)arg1 probability:(*CGFloat)arg2 ;
-(BOOL)stringIsBlocklisted:(id)arg0 ;
-(id)description;
-(id)initWithLocalization:(id)arg0 type:(NSInteger)arg1 ;
-(id)modelOptionsForLocale:(id)arg0 type:(NSInteger)arg1 ;
-(id)stateWithContext:(id)arg0 ;
-(void)dealloc;


@end


#endif