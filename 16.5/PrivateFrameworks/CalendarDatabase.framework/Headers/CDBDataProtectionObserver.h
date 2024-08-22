// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDBDATAPROTECTIONOBSERVER_H
#define CDBDATAPROTECTIONOBSERVER_H

@class CalDeviceLockObserver;

#import <Foundation/Foundation.h>


@interface CDBDataProtectionObserver : NSObject

@property (readonly, nonatomic) BOOL dataIsAccessible;
@property (retain, nonatomic) CalDeviceLockObserver *deviceLockObserver; // ivar: _deviceLockObserver
@property (copy, nonatomic) id *stateChangedCallback; // ivar: _stateChangedCallback


+(id)stateChangedNotificationName;
-(id)init;
-(void)_deviceLockStateChanged;


@end


#endif