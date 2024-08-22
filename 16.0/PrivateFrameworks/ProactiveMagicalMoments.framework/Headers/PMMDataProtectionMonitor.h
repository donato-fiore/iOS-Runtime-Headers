// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMMDATAPROTECTIONMONITOR_H
#define PMMDATAPROTECTIONMONITOR_H

@protocol PMMDataProtectionMonitorDelegate;

#import <Foundation/Foundation.h>


@interface PMMDataProtectionMonitor : NSObject {
    id<PMMDataProtectionMonitorDelegate> *_delegate;
    NSInteger _encryptedDataAvailability;
    BOOL _unlockedSinceBoot;
    _opaque_pthread_rwlock_t _rwlock;
}


@property (readonly, nonatomic) NSInteger dataProtectionStatus; // ivar: _dataProtectionStatus
@property (weak, nonatomic) NSObject<PMMDataProtectionMonitorDelegate> *delegate;
@property (readonly, nonatomic) NSInteger encryptedDataAvailability;
@property (readonly, nonatomic) BOOL unlockedSinceBoot;


+(id)PMMDataProtectionMonitorDataProtectionStatus:(NSInteger)arg0 ;
+(id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(NSInteger)arg0 ;
+(id)PMMDataProtectionMonitorLockStateToString:(NSInteger)arg0 ;
-(BOOL)dataProtectionEnabled;
-(id)init;
-(void)_registerForKeyBagNotifications;
-(void)dealloc;
-(void)handkeKeybagLockStatusChange:(NSInteger)arg0 ;
-(void)handleUnlockedSinceBoot;


@end


#endif