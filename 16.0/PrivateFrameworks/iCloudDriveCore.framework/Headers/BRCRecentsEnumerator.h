// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCRECENTSENUMERATOR_H
#define BRCRECENTSENUMERATOR_H

@class br_pacer, NSString;
@protocol BRCModule, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "brc_task_tracker.h"

@interface BRCRecentsEnumerator : NSObject <BRCModule>

 {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_pacer;
    BOOL _readyForIndexing;
    NSUInteger _flushedNotifRank;
    brc_task_tracker *_tracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;


+(void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(id)arg0 ;
+(void)dropRecentsForSession:(id)arg0 completionHandler:(id)arg1 ;
-(char)computeTombstoneEntryType:(id)arg0 ;
-(id)_deletedDocIdResultSetFromNotifRank:(NSUInteger)arg0 batchSize:(NSUInteger)arg1 ;
-(id)changeTokenForNotifRank:(NSUInteger)arg0 ;
-(id)initWithAccountSession:(id)arg0 ;
-(void)_activeSetDidChange;
-(void)_deleteAllRanks;
-(void)_enumerateChangesFromChangeToken:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_handleResetForRowID:(NSInteger)arg0 notifRank:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_readyForIndexingWithAckedRank:(NSUInteger)arg0 ;
-(void)_signalActiveSetDidChange;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)dropIndexForClientZone:(id)arg0 ;
-(void)dropItemWithFileObjectID:(id)arg0 notifRank:(NSUInteger)arg1 itemIsLive:(BOOL)arg2 ;
-(void)enumerateChangesFromChangeToken:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)garbageCollectRanksPreceding:(NSUInteger)arg0 ;
-(void)maxNotifRankWasFlushed;
-(void)resume;


@end


#endif