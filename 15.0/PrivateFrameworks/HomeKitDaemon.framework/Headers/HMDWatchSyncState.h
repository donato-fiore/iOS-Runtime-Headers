// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWATCHSYNCSTATE_H
#define HMDWATCHSYNCSTATE_H

@class HMFObject, NSMutableArray, NSString;


#import "HMDWatchSync.h"
#import "HMDPairedSync.h"

@interface HMDWatchSyncState : HMFObject {
    NSMutableArray *_syncs;
}


@property (readonly, nonatomic) HMDWatchSync *currentSync;
@property (readonly, copy, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMDPairedSync *pairedSync; // ivar: _pairedSync


+(BOOL)isNewBetter:(NSUInteger)arg0 present:(NSUInteger)arg1 ;
-(BOOL)removeSync;
-(id)description;
-(id)initWithDeviceId:(id)arg0 pairedSync:(id)arg1 ;
-(void)addNewSync:(id)arg0 ;
-(void)dealloc;


@end


#endif