// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKAUTOCOMPLETEANALYTICSSTATE_H
#define MKAUTOCOMPLETEANALYTICSSTATE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MKAutocompleteAnalyticsState : NSObject

@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, copy, nonatomic) NSArray *queryTokens; // ivar: _queryTokens
@property (readonly, nonatomic) NSArray *suggestionEntries; // ivar: _suggestionEntries


-(id)initWithQuery:(id)arg0 queryTokens:(id)arg1 suggestionEntries:(id)arg2 ;


@end


#endif