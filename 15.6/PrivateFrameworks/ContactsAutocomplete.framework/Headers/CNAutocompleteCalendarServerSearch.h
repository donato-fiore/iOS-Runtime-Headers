// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETECALENDARSERVERSEARCH_H
#define CNAUTOCOMPLETECALENDARSERVERSEARCH_H

@class NSString, EKEventStore, CNStringTokenizer;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>

#import "CNAutocompleteCalendarServerOperationFactory.h"

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNAutocompleteCalendarServerOperationFactory *operationFactory; // ivar: _operationFactory
@property (readonly) Class superclass;
@property (retain, nonatomic) CNStringTokenizer *tokenizer; // ivar: _tokenizer


+(BOOL)isSupported;
-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)executeRequest:(id)arg0 source:(id)arg1 resultsFactory:(id)arg2 withCompletionHandler:(id)arg3 ;
-(id)init;
-(id)initWithEventStore:(id)arg0 operationFactory:(id)arg1 ;
-(id)queryForFetchRequest:(id)arg0 ;
-(id)resultTransformWithFactory:(SEL)arg0 ;


@end


#endif