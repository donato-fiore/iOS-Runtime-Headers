// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNAUTOCOMPLETEPEOPLESUGGESTERPREDICTIONSEARCHSTRATEGY_H
#define _CNAUTOCOMPLETEPEOPLESUGGESTERPREDICTIONSEARCHSTRATEGY_H

@class CNContactStore, NSString;
@protocol CNAutocompletePredictionSearchStrategy;

#import <Foundation/Foundation.h>


@interface _CNAutocompletePeopleSuggesterPredictionSearchStrategy : NSObject <CNAutocompletePredictionSearchStrategy>

 {
    CNContactStore *_contactStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *descriptionForLogging;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContactStore:(id)arg0 ;
-(id)searchResultsForFetchRequest:(id)arg0 ;


@end


#endif