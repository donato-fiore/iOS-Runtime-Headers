// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKOCCURRENCECACHESEARCH_H
#define EKOCCURRENCECACHESEARCH_H

@class NSSet, NSString, NSNumber;
@protocol EKCancellableRemoteOperation;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation>

 {
    NSSet *_calendars;
    NSString *_searchTerm;
    EKEventStore *_store;
    id *_callback;
    NSNumber *_replyID;
    BOOL _canceled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)searchWithCalendars:(id)arg0 searchTerm:(id)arg1 store:(id)arg2 callback:(id)arg3 ;
-(id)initWithCalendars:(id)arg0 searchTerm:(id)arg1 store:(id)arg2 callback:(id)arg3 ;
-(id)searchTerm;
-(int)performSearchOperation:(unsigned int)arg0 inCalendars:(id)arg1 withEventStore:(id)arg2 andSearchTerm:(id)arg3 ;
-(void)cancel;
-(void)disconnected;
-(void)receivedBatchResultsFromServer:(id)arg0 finished:(BOOL)arg1 ;
-(void)run;


@end


#endif