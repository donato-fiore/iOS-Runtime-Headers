// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSNAPSHOTCACHEENTRY_H
#define HMDSNAPSHOTCACHEENTRY_H

@class HMFObject, NSString, HMFTimer;


#import "HMDSnapshotFile.h"

@interface HMDSnapshotCacheEntry : HMFObject

@property (readonly, nonatomic) NSString *snapshotCharacteristicEventUUID; // ivar: _snapshotCharacteristicEventUUID
@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (copy, nonatomic) id *snapshotRequestCompletion; // ivar: _snapshotRequestCompletion
@property (readonly, nonatomic) HMFTimer *timer; // ivar: _timer


-(id)description;
-(id)initWithSnapshotCharacteristicEventUUID:(id)arg0 snapshotFile:(id)arg1 timer:(id)arg2 ;


@end


#endif