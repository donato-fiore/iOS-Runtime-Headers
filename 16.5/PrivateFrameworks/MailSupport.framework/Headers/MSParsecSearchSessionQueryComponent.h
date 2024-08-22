// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPARSECSEARCHSESSIONQUERYCOMPONENT_H
#define MSPARSECSEARCHSESSIONQUERYCOMPONENT_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MSParsecSearchSessionQueryComponent : NSObject <EFLoggable>



@property (readonly, nonatomic) BOOL cannedSuggestion; // ivar: _cannedSuggestion
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly, nonatomic) NSString *scope; // ivar: _scope
@property (readonly) Class superclass;


+(id)_structuredQueryForComponents:(id)arg0 hasCurrentMailboxScope:(BOOL)arg1 languages:(id)arg2 ;
+(id)freeTextQueryComponentWithString:(id)arg0 ;
+(id)log;
+(id)suggestionAtomQueryComponentWithCategory:(id)arg0 scope:(id)arg1 queryString:(id)arg2 cannedSuggestion:(BOOL)arg3 ;
+(id)userTypedQueryComponentWithString:(id)arg0 removingFreeTextTokenString:(id)arg1 ;
+(id)userTypedQueryComponentWithString:(id)arg0 removingFreeTextTokens:(id)arg1 ;
-(id)_structuredQueryComponentWithLanguages:(id)arg0 ;
-(id)initWithCategory:(id)arg0 scope:(id)arg1 queryString:(id)arg2 cannedSuggestion:(BOOL)arg3 ;


@end


#endif