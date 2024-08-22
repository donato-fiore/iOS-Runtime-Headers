// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNINDEXREQUESTHANDLER_H
#define CNINDEXREQUESTHANDLER_H

@protocol CNCSSearchableIndex, CNSpotlightIndexingLogger;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"
#import "CNIndexClientState.h"

@interface CNIndexRequestHandler : NSObject {
    BOOL _isFullSyncNeeded;
    CNContactStore *_contactStore;
    id<CNCSSearchableIndex> *_index;
    id<CNSpotlightIndexingLogger> *_logger;
    NSUInteger _batchSize;
    CNIndexClientState *_clientState;
}




-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 searchableIndex:(id)arg1 logger:(id)arg2 batchSize:(NSUInteger)arg3 ;
-(id)verifyIndexLoggingSummary:(BOOL)arg0 error:(*id)arg1 ;
-(void)performIndexing;
-(void)reindexAllSearchableItems;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg0 ;


@end


#endif