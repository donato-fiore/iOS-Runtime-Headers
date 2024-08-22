// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETEPEOPLESUGGESTERPREDICTIONSEARCHSTRATEGYTASK_H
#define _CNAUTOCOMPLETEPEOPLESUGGESTERPREDICTIONSEARCHSTRATEGYTASK_H

@class CNTask, CNContactStore, _PSPredictionContext, NSArray;


#import "CNAutocompleteFetchRequest.h"

@interface _CNAutocompletePeopleSuggesterPredictionSearchStrategyTask : CNTask {
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    _PSPredictionContext *_context;
    NSArray *_psResults;
    NSArray *_results;
}




+(NSInteger)_addressTypeFromHandle:(id)arg0 ;
-(id)_identifierForGroupResultSuggestion:(id)arg0 ;
-(id)initWithRequest:(id)arg0 contactStore:(id)arg1 ;
-(id)run:(*id)arg0 ;
-(void)convertResults;
-(void)prepareQuery;
-(void)runQuery;


@end


#endif