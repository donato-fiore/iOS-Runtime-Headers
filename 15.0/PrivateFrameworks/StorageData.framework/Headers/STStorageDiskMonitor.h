// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTORAGEDISKMONITOR_H
#define STSTORAGEDISKMONITOR_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "STStorageSpace.h"

@interface STStorageDiskMonitor : NSObject {
    NSInteger _updateDelta;
}


@property (readonly) NSInteger deviceSize; // ivar: _deviceSize
@property (retain) NSObject<OS_dispatch_source> *diskSizeTimer; // ivar: _diskSizeTimer
@property (readonly) STStorageSpace *storageSpace; // ivar: _storageSpace


+(id)sharedMonitor;
-(id)init;
-(void)_sendNotify:(id)arg0 ;
-(void)sendNotify:(id)arg0 ;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;
-(void)updateDiskSpace;


@end


#endif