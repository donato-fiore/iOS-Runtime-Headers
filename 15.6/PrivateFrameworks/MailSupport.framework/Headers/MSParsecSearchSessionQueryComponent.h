// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPARSECSEARCHSESSIONQUERYCOMPONENT_H
#define MSPARSECSEARCHSESSIONQUERYCOMPONENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSParsecSearchSessionQueryComponent : NSObject

@property (readonly, nonatomic) BOOL cannedSuggestion; // ivar: _cannedSuggestion
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly, nonatomic) NSString *scope; // ivar: _scope


+(id)_structuredQueryForComponents:(id)arg0 hasCurrentMailboxScope:(BOOL)arg1 languages:(id)arg2 ;
+(id)freeTextQueryComponentWithString:(id)arg0 ;
+(id)suggestionAtomQueryComponentWithCategory:(id)arg0 scope:(id)arg1 queryString:(id)arg2 cannedSuggestion:(BOOL)arg3 ;
-(id)_structuredQueryComponentWithLanguages:(id)arg0 ;
-(id)initWithCategory:(id)arg0 scope:(id)arg1 queryString:(id)arg2 cannedSuggestion:(BOOL)arg3 ;


@end


#endif