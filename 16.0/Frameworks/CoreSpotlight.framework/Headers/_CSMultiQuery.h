// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSMULTIQUERY_H
#define _CSMULTIQUERY_H

@class NSArray, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CSMultiQuery : NSObject {
    BOOL _started;
}


@property (retain, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain, nonatomic) NSArray *queries; // ivar: _queries
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (nonatomic) BOOL simple; // ivar: _simple
@property (retain, nonatomic) NSMutableArray *simpleQueryTokens; // ivar: _simpleQueryTokens


+(id)countingQueryWithContactSuggestions:(id)arg0 scope:(NSUInteger)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
+(id)countingQueryWithPeopleSuggestions:(id)arg0 filterQuery:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
+(id)countingQueryWithStrings:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
+(id)countingQueryWithStrings:(id)arg0 contexts:(id)arg1 completionHandler:(id)arg2 ;
+(id)countingQueryWithSuggestions:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
+(void)initialize;
-(id)initWithQueries:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithSimpleQueries:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)startSimpleQueryAtIndex:(NSUInteger)arg0 ;


@end


#endif