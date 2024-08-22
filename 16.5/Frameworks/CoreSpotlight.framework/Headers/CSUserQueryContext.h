// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSUSERQUERYCONTEXT_H
#define CSUSERQUERYCONTEXT_H



#import "CSSearchQueryContext.h"

@interface CSUserQueryContext : CSSearchQueryContext {
    BOOL _enableSuggestionTokens;
}


@property (nonatomic) BOOL enableRankedResults; // ivar: _enableRankedResults
@property (nonatomic) NSInteger maxResultCount; // ivar: _maxResultCount
@property (nonatomic) NSInteger maxSuggestionCount;


+(id)userQueryContext;
+(id)userQueryContextWithCurrentSuggestion:(id)arg0 ;


@end


#endif