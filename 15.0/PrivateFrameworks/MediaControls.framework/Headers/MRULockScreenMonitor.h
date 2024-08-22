// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRULOCKSCREENMONITOR_H
#define MRULOCKSCREENMONITOR_H

@protocol MRULockScreenMonitorDelegate;

#import <Foundation/Foundation.h>


@interface MRULockScreenMonitor : NSObject

@property (weak, nonatomic) NSObject<MRULockScreenMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDeviceLocked) BOOL deviceLocked; // ivar: _deviceLocked
@property (nonatomic) int mobileKeyBagLockStatusNotifyToken; // ivar: _mobileKeyBagLockStatusNotifyToken


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)updateDeviceLocked;


@end


#endif