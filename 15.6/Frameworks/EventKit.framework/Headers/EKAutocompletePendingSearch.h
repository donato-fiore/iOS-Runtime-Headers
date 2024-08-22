// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKAUTOCOMPLETEPENDINGSEARCH_H
#define EKAUTOCOMPLETEPENDINGSEARCH_H

@class NSString;
@protocol EKAutocompletePendingSearchProtocol, CalSpotlightQueryPendingSearchProtocol;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"
#import "EKEvent.h"

@interface EKAutocompletePendingSearch : NSObject <EKAutocompletePendingSearchProtocol>

 {
    EKEventStore *_eventStore;
    NSUInteger _maximumResultCount;
    BOOL _ignoreScheduledEvents;
    EKEvent *_initialEvent;
    id<CalSpotlightQueryPendingSearchProtocol> *_pendingSearch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_eventKitQueue;
+(id)_queue;
+(void)_updateResult:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldReturnResultForEvent:(id)arg0 ;
-(id)firstNaturalLanguageResultWithSearchString:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 searchString:(id)arg1 maximumResultCount:(NSUInteger)arg2 ignoreScheduledEvents:(BOOL)arg3 initialEvent:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancel;
-(void)searchWithString:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif