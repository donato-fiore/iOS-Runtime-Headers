// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSUSERQUERY_H
#define CSUSERQUERY_H

@class NSArray, NSString;


#import "CSSearchQuery.h"

@interface CSUserQuery : CSSearchQuery

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) NSArray *filterQueries;
@property (readonly) NSUInteger foundItemCount;
@property (readonly) NSString *keyboardLanguage;


-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 keyboardLanguage:(id)arg1 attributes:(id)arg2 ;
-(void)cancel;
-(void)start;


@end


#endif