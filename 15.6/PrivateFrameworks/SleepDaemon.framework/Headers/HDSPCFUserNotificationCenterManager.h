// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPCFUSERNOTIFICATIONCENTERMANAGER_H
#define HDSPCFUSERNOTIFICATIONCENTERMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HDSPCFUserNotificationCenterManager : NSObject

@property (readonly, nonatomic) os_unfair_lock_s registrationLock; // ivar: _registrationLock
@property (readonly, nonatomic) NSMutableArray *registrations; // ivar: _registrations


+(id)sharedManager;
-(id)init;
-(void)_withLock:(id)arg0 ;
-(void)cancelNotification:(id)arg0 fromCenter:(id)arg1 ;
-(void)postNotification:(id)arg0 fromCenter:(id)arg1 ;


@end


#endif