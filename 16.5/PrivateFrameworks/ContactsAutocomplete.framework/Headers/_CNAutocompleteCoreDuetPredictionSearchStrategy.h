// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNAUTOCOMPLETECOREDUETPREDICTIONSEARCHSTRATEGY_H
#define _CNAUTOCOMPLETECOREDUETPREDICTIONSEARCHSTRATEGY_H

@class CNContactStore, NSString;
@protocol CNAutocompletePredictionSearchStrategy;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteCoreDuetPredictionSearchStrategy : NSObject <CNAutocompletePredictionSearchStrategy>

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