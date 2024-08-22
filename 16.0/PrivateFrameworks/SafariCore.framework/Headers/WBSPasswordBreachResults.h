// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDBREACHRESULTS_H
#define WBSPASSWORDBREACHRESULTS_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>

#import "WBSPasswordBreachContext.h"

@interface WBSPasswordBreachResults : NSObject {
    os_unfair_lock_s _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}




-(id)initWithContext:(id)arg0 ;
-(id)recentlyBreachedResultRecords;
-(id)resultRecordsForQueries:(id)arg0 ;
-(void)_restoreResultsFromPersistentStoreIfNecessary;
-(void)_saveResultsToPersistentStore;
-(void)addResultRecords:(id)arg0 ;
-(void)clearAllResultsSynchronously;
-(void)clearRecentlyBreachedResultRecords;
-(void)markAllCompromisedResultRecordsAsRecentlyBreached;


@end


#endif