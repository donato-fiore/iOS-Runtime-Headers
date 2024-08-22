// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSQUERYREWRITE_H
#define _CSQUERYREWRITE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CSSearchQueryContext.h"

@interface _CSQueryRewrite : NSObject

@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (nonatomic) float score; // ivar: _score
@property (retain, nonatomic) CSSearchQueryContext *searchQueryContext; // ivar: _searchQueryContext


-(id)initWithSearchQueryString:(id)arg0 searchQueryContext:(id)arg1 score:(float)arg2 ;


@end


#endif