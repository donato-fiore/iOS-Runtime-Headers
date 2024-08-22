// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDISKSPACERECLAIMER_H
#define BRCDISKSPACERECLAIMER_H

@class br_pacer, NSString;
@protocol BRCLowDiskDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"

@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate>

 {
    BRCAccountSession *_session;
    BOOL _isClosed;
    BOOL _computingPurgable;
    br_pacer *_purgePacer;
    *CacheDeleteToken _purgeRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(CGFloat)_onDiskAccessTimeDeltaForUrgency:(int)arg0 ;
+(CGFloat)accessTimeDeltaForUrgency:(int)arg0 ;
+(int)simpleUrgencyForCacheDeleteUrgency:(int)arg0 ;
-(BOOL)documentUpdateEvictability:(id)arg0 ;
-(BOOL)documentWasAccessedRecently:(id)arg0 ;
-(BOOL)documentWasCreated:(id)arg0 ;
-(BOOL)documentWasDeleted:(id)arg0 ;
-(BOOL)documentWasUpdated:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)overwriteDocumentAccessTime:(id)arg0 atime:(NSUInteger)arg1 ;
-(BOOL)performOptimizeStorageWithTimeDelta:(CGFloat)arg0 onDiskAccessTimeDelta:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg0 path:(id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg0 ;
-(NSInteger)_computeCiconiaSizeInBytes:(BOOL)arg0 ;
-(NSInteger)_dbAutovacuumableSpaceInBytes:(id)arg0 ;
-(NSInteger)_dbSizeInBytes:(id)arg0 ;
-(NSInteger)_doIncrementalVacuum:(id)arg0 amount:(NSInteger)arg1 ;
-(NSInteger)_fullVacuumIfPossible:(id)arg0 ;
-(NSInteger)_purgeSpaceUnderQueue:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSInteger)_vacuumDB:(id)arg0 amount:(NSInteger)arg1 withUrgency:(int)arg2 ;
-(NSInteger)cachedPurgeableSpaceForUrgency:(int)arg0 ;
-(NSInteger)periodicReclaimSpace;
-(NSInteger)purgeSpace:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSUInteger)_recursivelySizeDirectoryAtPath:(id)arg0 ;
-(NSUInteger)totalSize;
-(id)accessTimestampForDocument:(id)arg0 ;
-(id)descriptionForItem:(id)arg0 context:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(int)urgencyForCacheDeleteUrgency:(int)arg0 ;
-(void)_asyncAutovacuumIfNeeds:(id)arg0 ;
// -(void)_enumerateItemsForEvictSyncWithBlock:(id)arg0 withTimeDelta:(unk)arg1 onDiskAccessTimeDelta:(CGFloat)arg2  ;
// -(void)_enumerateItemsForEvictSyncWithBlock:(id)arg0 withUrgency:(unk)arg1  ;
-(void)_requestPurgeSpace;
-(void)_updateNonPurgeableCachedSizeByAddingBytes:(NSInteger)arg0 ;
-(void)_updateNonPurgeableCachedSizeForDocument:(id)arg0 ;
-(void)cachedPurgeableSpaceForAllUrgencies:(*id)arg0 nonPurgeableSpace:(*id)arg1 error:(*id)arg2 ;
-(void)close;
-(void)computePurgeableSpaceForAllUrgenciesWithReply:(id)arg0 ;
-(void)didAccessDocument:(id)arg0 ;
-(void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(BOOL)arg1 ;
-(void)requestPurgeSpace;


@end


#endif