// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETESTEWIESEARCH_H
#define CNAUTOCOMPLETESTEWIESEARCH_H

@class NSString;
@protocol CNAutocompleteSearch;

#import <Foundation/Foundation.h>


@interface CNAutocompleteStewieSearch : NSObject <CNAutocompleteSearch>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)executeRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif