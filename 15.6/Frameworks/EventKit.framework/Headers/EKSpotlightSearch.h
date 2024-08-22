// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKSPOTLIGHTSEARCH_H
#define EKSPOTLIGHTSEARCH_H

@class CSSearchQuery;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKSpotlightSearch : NSObject {
    CSSearchQuery *csQuery;
}


@property (weak) EKEventStore *eventStore; // ivar: _eventStore


+(id)_queryStringForPeopleMatchingSearchTerm:(id)arg0 ;
+(id)queryStringForSearchTerm:(id)arg0 matchingTypes:(NSUInteger)arg1 ;
+(id)queryStringForSearchTerm:(id)arg0 matchingTypes:(NSUInteger)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 ;
// +(id)searchWithCSQuery:(id)arg0 inStore:(id)arg1 resultHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)initWithSearchWithCSQuery:(id)arg0 inStore:(id)arg1 resultHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)query;
-(void)cancel;
-(void)start;


@end


#endif