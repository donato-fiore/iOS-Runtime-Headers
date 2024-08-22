// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKLOGOUTSUPPORT_H
#define LKLOGOUTSUPPORT_H

@class UMUserSwitchBlockingTask;

#import <Foundation/Foundation.h>


@interface LKLogoutSupport : NSObject

@property (retain, nonatomic) UMUserSwitchBlockingTask *syncTask; // ivar: _syncTask


-(BOOL)_canLogoutToLoginSession;
-(BOOL)isCurrentUserAnonymous;
-(id)init;
-(id)logoutWarningMessage;
-(void)_syncPreferencesIfNeeded;
-(void)logoutToLoginSessionWithCompletionHandler:(id)arg0 ;
-(void)logoutToLoginUserWithCompletionHandler:(id)arg0 ;
-(void)logoutToLoginWindowWithCompletionHandler:(id)arg0 ;


@end


#endif