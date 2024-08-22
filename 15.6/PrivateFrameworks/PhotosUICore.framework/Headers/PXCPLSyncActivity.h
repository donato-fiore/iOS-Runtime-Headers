// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCPLSYNCACTIVITY_H
#define PXCPLSYNCACTIVITY_H

@class NSProgress;
@protocol OS_dispatch_queue;


#import "PXObservable.h"

@interface PXCPLSyncActivity : PXObservable {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUInteger _syncProgressState;
    id *_syncProgressSubscriber;
    NSProgress *_syncProgress;
}


@property (readonly, nonatomic) BOOL isSyncing; // ivar: _isSyncing


-(id)description;
-(id)init;
-(void)_queue_subscribeToSyncProgress;
-(void)_setSyncProgress:(id)arg0 ;
-(void)_setSyncProgressState:(NSUInteger)arg0 ;
-(void)_unsubscribeFromSyncProgress;
-(void)_updateIsSyncing;
-(void)_updateSyncProgressState;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif