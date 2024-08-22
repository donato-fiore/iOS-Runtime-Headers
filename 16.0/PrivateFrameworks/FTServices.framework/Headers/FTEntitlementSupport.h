// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTENTITLEMENTSUPPORT_H
#define FTENTITLEMENTSUPPORT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FTEntitlementSupport : NSObject {
    *__CTServerConnection _ctServerConnection;
    *__CFString _entitlementStatus;
}


@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;


+(id)sharedInstance;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(BOOL)_registerForCTEntitlementNotifications;
-(BOOL)_setupCTServerConnection;
-(id)_rawEntitlementValue;
-(id)init;
-(void)_cleanupMachInfo;
-(void)_entitlementStatusChanged;
-(void)_handleCTServiceRequestName:(struct __CFString *)arg0 userInfo:(struct __CFDictionary *)arg1 contextInfo:(*void)arg2 ;
-(void)_unregisterForCTEntitlementNotifications;
-(void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary *)arg0 ;


@end


#endif