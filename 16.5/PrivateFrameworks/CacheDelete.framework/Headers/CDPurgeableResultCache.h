// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPURGEABLERESULTCACHE_H
#define CDPURGEABLERESULTCACHE_H

@protocol CDPurgeableResultCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CDRecentInfo.h"

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults; // ivar: _recentPurgeableResults


+(id)fetchVolumeWithPath:(id)arg0 ;
+(id)sharedPurgeableResultsCache;
-(BOOL)hasInvalids;
-(BOOL)hasSnapshotForVolume:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isInvalidForVolume:(id)arg0 ;
-(BOOL)isStale;
-(BOOL)isStaleForVolume:(id)arg0 ;
-(NSInteger)recentStateForVolume:(id)arg0 ;
-(id)_recentPurgeableTotals:(int)arg0 validateResults:(BOOL)arg1 ;
-(id)bsdDiskForVolume:(id)arg0 ;
-(id)initEmpty;
-(id)recentInfoForVolume:(id)arg0 atUrgency:(int)arg1 ;
-(id)recentInfoForVolume:(id)arg0 atUrgency:(int)arg1 validateResults:(BOOL)arg2 ;
-(id)recentInfoForVolumes:(id)arg0 atUrgency:(int)arg1 ;
-(id)recentInfoForVolumes:(id)arg0 atUrgency:(int)arg1 validateResults:(BOOL)arg2 targetVolume:(id)arg3 ;
-(id)recentPurgeableTotals:(int)arg0 ;
-(id)servicesForVolume:(id)arg0 ;
-(id)thresholdsForVolume:(id)arg0 ;
-(void)absorbRecentInfo:(id)arg0 ;
-(void)invalidateAllForgettingPushers:(BOOL)arg0 ;
-(void)keepUpToDate:(id)arg0 ;
-(void)log;
-(void)updateRecentVolumeInfo:(id)arg0 ;


@end


#endif