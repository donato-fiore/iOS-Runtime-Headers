// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEADPHONEAUDIOEXPOSUREBUCKETCOLLECTION_H
#define HDHEADPHONEAUDIOEXPOSUREBUCKETCOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HDHeadphoneAudioExposureBucketCollection : NSObject {
    NSMutableArray *_storage;
    os_unfair_lock_s _lock;
}


@property (nonatomic, getter=isDirty) BOOL dirty; // ivar: _dirty


-(id)_bucketsWithEarliestStartDate:(id)arg0 resetDoseToZero:(BOOL)arg1 error:(*id)arg2 ;
-(id)_lock_snapshotStatisticsForNowDate:(id)arg0 error:(*id)arg1 ;
-(id)_lock_updateWithSampleBatch:(id)arg0 error:(*id)arg1 ;
-(id)_updateWithSampleBatch:(id)arg0 needsRebuild:(*BOOL)arg1 error:(*id)arg2 ;
-(id)copyWithEarliestStartDate:(id)arg0 resetDoseToZero:(BOOL)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithBuckets:(id)arg0 ;
-(id)snapshotStatisticsForNowDate:(id)arg0 error:(*id)arg1 ;
-(id)unitTesting_snapshotBuckets;
-(void)clear;
-(void)insertBuckets:(id)arg0 ;
-(void)pruneWithNowDate:(id)arg0 ;


@end


#endif