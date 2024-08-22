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


+(CGFloat)accessTimeDeltaForUrgency:(int)arg0 ;
+(int)simpleUrgencyForCacheDeleteUrgency:(int)arg0 ;
-(BOOL)performOptimizeStorageWithTimeDelta:(CGFloat)arg0 onDiskAccessTimeDelta:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg0 path:(id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg0 ;
-(NSInteger)_computeCiconiaSizeInBytes:(BOOL)arg0 ;
-(NSInteger)_dbAutovacuumableSpaceInBytes:(id)arg0 ;
-(NSInteger)_dbSizeInBytes:(id)arg0 ;
-(NSInteger)_doIncrementalVacuum:(id)arg0 amount:(NSInteger)arg1 ;
-(NSInteger)_fullVacuumIfPossible:(id)arg0 ;
-(NSInteger)_garbageCollectGroupContainersDownloadStage;
-(NSInteger)_purgeSpaceUnderQueue:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSInteger)_vacuumDB:(id)arg0 amount:(NSInteger)arg1 withUrgency:(int)arg2 ;
-(NSInteger)cachedPurgeableSpaceForUrgency:(int)arg0 ;
-(NSInteger)periodicReclaimSpace;
-(NSInteger)purgeSpace:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSUInteger)_recursivelySizeDirectoryAtPath:(id)arg0 ;
-(NSUInteger)totalSize;
-(id)initWithAccountSession:(id)arg0 ;
-(int)urgencyForCacheDeleteUrgency:(int)arg0 ;
-(void)_asyncAutovacuumIfNeeds:(id)arg0 ;
-(void)_requestPurgeSpace;
-(void)cachedPurgeableSpaceForAllUrgencies:(*id)arg0 nonPurgeableSpace:(*id)arg1 error:(*id)arg2 ;
-(void)close;
-(void)computePurgeableSpaceForAllUrgenciesWithReply:(id)arg0 ;
-(void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(BOOL)arg1 ;
-(void)requestPurgeSpace;


@end


#endif