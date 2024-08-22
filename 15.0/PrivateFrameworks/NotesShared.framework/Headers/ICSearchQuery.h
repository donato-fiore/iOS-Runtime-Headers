// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSEARCHQUERY_H
#define ICSEARCHQUERY_H

@class NSArray, NSDictionary, NSString, CSSearchQuery;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ICRankingQueriesDefinition.h"

@interface ICSearchQuery : NSObject

@property (retain, nonatomic) NSArray *externalRankingQueries; // ivar: _externalRankingQueries
@property (nonatomic) BOOL modernResultsOnly; // ivar: _modernResultsOnly
@property (retain, nonatomic) NSDictionary *queryResults; // ivar: _queryResults
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition; // ivar: _rankingQueriesDefinition
@property (retain, nonatomic) CSSearchQuery *searchQuery; // ivar: _searchQuery
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore; // ivar: _synchronousSemaphore
@property (nonatomic) BOOL wasForceStopped; // ivar: _wasForceStopped


+(id)defaultAttributesToReturnFromCoreSpotlight;
+(id)fetchDefaultAttributesForIdentifiers:(id)arg0 ;
+(id)fetchModernNoteSearchableItemAttributesFromCoreDataForObjectIDURIs:(id)arg0 context:(id)arg1 ;
-(BOOL)run:(*id)arg0 ;
-(id)initWithQueryString:(id)arg0 externalRankingQueries:(id)arg1 modernResultsOnly:(BOOL)arg2 ;
-(id)initWithQueryString:(id)arg0 rankingQueriesDefinition:(id)arg1 modernResultsOnly:(BOOL)arg2 ;
-(void)cancel;
-(void)forceStop;
-(void)setup;


@end


#endif