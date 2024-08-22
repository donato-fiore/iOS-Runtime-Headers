// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECDATAPROTECTIONMONITOR_H
#define _DECDATAPROTECTIONMONITOR_H

@protocol _DECDataProtectionMonitorDelegate;

#import <Foundation/Foundation.h>


@interface _DECDataProtectionMonitor : NSObject {
    id<_DECDataProtectionMonitorDelegate> *_delegate;
    NSInteger _encryptedDataAvailability;
    BOOL _unlockedSinceBoot;
    _opaque_pthread_rwlock_t _rwlock;
}


@property (readonly, nonatomic) NSInteger dataProtectionStatus; // ivar: _dataProtectionStatus
@property (weak, nonatomic) NSObject<_DECDataProtectionMonitorDelegate> *delegate;
@property (readonly, nonatomic) NSInteger encryptedDataAvailability;
@property (readonly, nonatomic) BOOL unlockedSinceBoot;


+(id)_DECDataProtectionMonitorDataProtectionStatus:(NSInteger)arg0 ;
+(id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(NSInteger)arg0 ;
+(id)_DECDataProtectionMonitorLockStateToString:(NSInteger)arg0 ;
-(BOOL)dataProtectionEnabled;
-(id)init;
-(void)_registerForKeyBagNotifications;
-(void)dealloc;
-(void)handkeKeybagLockStatusChange:(NSInteger)arg0 ;
-(void)handleUnlockedSinceBoot;


@end


#endif