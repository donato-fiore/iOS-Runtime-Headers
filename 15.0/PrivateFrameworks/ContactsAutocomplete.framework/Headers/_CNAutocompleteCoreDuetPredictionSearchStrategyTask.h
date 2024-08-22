// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETECOREDUETPREDICTIONSEARCHSTRATEGYTASK_H
#define _CNAUTOCOMPLETECOREDUETPREDICTIONSEARCHSTRATEGYTASK_H

@class CNTask, CNContactStore, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings, NSArray;


#import "CNAutocompleteFetchRequest.h"

@interface _CNAutocompleteCoreDuetPredictionSearchStrategyTask : CNTask {
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
    NSArray *_results;
}




+(NSInteger)_addressTypeFromHandle:(id)arg0 ;
+(id)constrainMechanismsForSearchType:(NSUInteger)arg0 ;
+(void)configureContext:(id)arg0 withFetchRequest:(id)arg1 ;
+(void)configureSettings:(id)arg0 withFetchRequest:(id)arg1 ;
-(NSInteger)addressTypeForCDContact:(id)arg0 ;
-(id)initWithRequest:(id)arg0 contactStore:(id)arg1 ;
-(id)resultValueForCDContact:(id)arg0 ;
-(id)run:(*id)arg0 ;
-(id)suggesterContextForFetchRequest:(id)arg0 ;
-(id)suggesterSettingsForFetchRequest:(id)arg0 ;
-(void)convertResults;
-(void)prepareQuery;
-(void)runQuery;


@end


#endif