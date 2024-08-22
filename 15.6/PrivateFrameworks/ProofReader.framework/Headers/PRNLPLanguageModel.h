// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


@property (readonly) NSInteger granularity; // ivar: _granularity
@property (readonly, nonatomic) NSString *localization; // ivar: _localization


+(id)languageModelWithLocalization:(id)arg0 granularity:(NSInteger)arg1 ;
-(BOOL)getConditionalProbabilityForString:(id)arg0 context:(id)arg1 probability:(*CGFloat)arg2 ;
-(id)description;
-(id)initWithLocalization:(id)arg0 granularity:(NSInteger)arg1 ;
-(id)stateWithContext:(id)arg0 ;
-(void)dealloc;


@end


#endif