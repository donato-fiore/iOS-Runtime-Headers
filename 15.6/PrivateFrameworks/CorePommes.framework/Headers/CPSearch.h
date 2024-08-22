// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSEARCH_H
#define CPSEARCH_H

@class NSString, NSArray;
@protocol CPSearch, CPXPCConnection;

#import <Foundation/Foundation.h>

#import "PMQuery.h"
#import "CPSearchContext.h"

@interface CPSearch : NSObject <CPSearch>



@property (copy) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<CPXPCConnection> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSArray *filterQueries; // ivar: _filterQueries
@property (copy) id *foundItemsHandler; // ivar: _foundItemsHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PMQuery *query; // ivar: _query
@property (readonly, nonatomic) CPSearchContext *searchContext; // ivar: _searchContext
@property (readonly) Class superclass;


+(id)log;
-(id)initWithCSQueryString:(id)arg0 connection:(id)arg1 ;
-(id)initWithCSQueryString:(id)arg0 context:(id)arg1 connection:(id)arg2 ;
-(id)initWithQueryString:(id)arg0 connection:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 connection:(id)arg2 ;
-(void)start;


@end


#endif