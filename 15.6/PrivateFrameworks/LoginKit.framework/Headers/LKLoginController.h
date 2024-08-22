// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKLOGINCONTROLLER_H
#define LKLOGINCONTROLLER_H

@class NSXPCConnection;
@protocol LKLoginDaemonProtocol;

#import <Foundation/Foundation.h>


@interface LKLoginController : NSObject <LKLoginDaemonProtocol>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain) NSXPCConnection *connection; // ivar: _connection


+(id)sharedController;
-(id)init;
-(id)proxy;
-(id)recentUsers;
-(void)checkInWithCurrentEnvironment:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)chooseUserWithIdentifier:(id)arg0 inClassWithID:(id)arg1 password:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)interruptLocalUserSwitchTest;
-(void)isReadyToLoginWithCompletionHandler:(id)arg0 ;
-(void)isReadyToLogoutWithCompletionHandler:(id)arg0 ;
-(void)loginAppleID:(id)arg0 password:(id)arg1 localLoginOnly:(BOOL)arg2 withCompletionHandler:(id)arg3 ;
-(void)logoutWithLogoutType:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)saveClassConfiguration:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)triggerLocalUserSwitchTestForType:(NSUInteger)arg0 count:(NSInteger)arg1 username:(id)arg2 password:(id)arg3 completionHandler:(id)arg4 ;
-(void)updateGlobalDefaultsValue:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif