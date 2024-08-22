// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHQUERYBUILDER_H
#define SEARCHQUERYBUILDER_H

@class NSString, _SFSearchEngineInfo;

#import <Foundation/Foundation.h>


@interface SearchQueryBuilder : NSObject {
    NSString *queryString;
    _SFSearchEngineInfo *engineInfo;
}




+(id)searchQueryBuilderWithQuery:(id)arg0 ;
+(id)searchQueryBuilderWithXWebSearchURL:(id)arg0 ;
-(BOOL)searchEngineIsDefault;
-(id)initWithQueryString:(id)arg0 ;
-(id)initWithSearchEngineInfo:(id)arg0 queryString:(id)arg1 ;
-(id)initWithXWebSearchURL:(id)arg0 ;
-(id)queryString;
-(id)searchEngineInfo;
-(id)searchURL;


@end


#endif