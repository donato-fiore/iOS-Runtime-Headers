// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEPREDICTIONSEARCH_H
#define CNAUTOCOMPLETEPREDICTIONSEARCH_H

@class CNContactStore, NSString;
@protocol CNAutocompleteSearch, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNAutocompletePredictionSearch : NSObject <CNAutocompleteSearch>

 {
    id<CNScheduler> *_scheduler;
}


@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)predictedResultLimit;
+(NSUInteger)predictionStrategyForRequest:(id)arg0 ;
-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)strategyForRequest:(id)arg0 ;
-(id)suggestionsForRequest:(id)arg0 ;


@end


#endif