// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDEVICEOBSERVER_H
#define CHDEVICEOBSERVER_H

@protocol CHDeviceDataSource, OS_dispatch_queue;


#import "CHDelegateManager.h"
#import "CHNotifyObserver.h"

@interface CHDeviceObserver : CHDelegateManager

@property (nonatomic, getter=isBootLockEnabled) BOOL bootLockEnabled; // ivar: _bootLockEnabled
@property (readonly, nonatomic) NSObject<CHDeviceDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) CHNotifyObserver *firstUnlockNotifyObserver; // ivar: _firstUnlockNotifyObserver
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 ;
-(void)performDelegateSelector:(SEL)arg0 withDelegate:(id)arg1 ;


@end


#endif