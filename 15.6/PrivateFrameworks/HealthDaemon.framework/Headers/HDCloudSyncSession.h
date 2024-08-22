// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSESSION_H
#define HDCLOUDSYNCSESSION_H

@class NSSet, NSArray;


#import "HDSyncSession.h"
#import "HDCloudSyncSequenceRecord.h"

@interface HDCloudSyncSession : HDSyncSession {
    NSSet *_excludedSyncStores;
    NSArray *_filteredOrderedSyncEntities;
}


@property (retain, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // ivar: _sequenceRecord


-(BOOL)requiresSyncForChangesFromAnchorRangeMap:(id)arg0 ;
-(NSInteger)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg0 ;
-(NSInteger)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg0 ;
-(id)excludedSyncStores;
-(id)newChangeWithSyncEntityClass:(Class)arg0 version:(struct ? )arg1 ;
-(id)syncPredicate;
-(void)setExcludedSyncStores:(id)arg0 ;


@end


#endif