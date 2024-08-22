// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPDATAPROTECTIONMASTER_H
#define _DPDATAPROTECTIONMASTER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DPDataProtectionMaster : NSObject

@property (readonly, nonatomic) NSMutableDictionary *availableState; // ivar: _availableState
@property (readonly, nonatomic) BOOL deviceFormatedForContentProtection; // ivar: _deviceFormatedForContentProtection
@property (readonly, nonatomic) NSMutableDictionary *handlers; // ivar: _handlers
@property (readonly, nonatomic) BOOL notifyEnabled; // ivar: _notifyEnabled
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (readonly, nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


+(id)sharedInstance;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsLocked;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)isDataAvailableFor:(id)arg0 ;
-(BOOL)isDataAvailableForClassA;
-(BOOL)isDataAvailableForClassC;
-(id)init;
-(id)registerStateChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)deregisterStateChangeHandler:(id)arg0 ;
-(void)handleKeyBagLockNotification;


@end


#endif