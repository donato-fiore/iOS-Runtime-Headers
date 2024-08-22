// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DASEARCHQUERY_H
#define DASEARCHQUERY_H

@class NSString, NSPredicate;
@protocol DASearchQueryConsumer;

#import <Foundation/Foundation.h>


@interface DASearchQuery : NSObject

@property (weak, nonatomic) NSObject<DASearchQueryConsumer> *consumer; // ivar: _consumer
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) _NSRange range; // ivar: _range
@property (copy, nonatomic) NSString *searchID; // ivar: _searchID
@property (copy, nonatomic) NSPredicate *searchPredicate; // ivar: _searchPredicate
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) int timeLimit; // ivar: _timeLimit


+(id)searchQueryWithSearchString:(id)arg0 consumer:(id)arg1 ;
-(BOOL)isQueryRunning;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 consumer:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 consumer:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 predicate:(id)arg1 consumer:(id)arg2 ;
-(void)sendFinishedToConsumerWithError:(id)arg0 ;
-(void)sendResultsToConsumer:(id)arg0 ;


@end


#endif