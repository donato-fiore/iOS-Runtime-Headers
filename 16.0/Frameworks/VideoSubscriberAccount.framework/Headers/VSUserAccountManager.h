// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUSERACCOUNTMANAGER_H
#define VSUSERACCOUNTMANAGER_H

@class NSString;
@protocol VSRemoteNotifierDelegate;

#import <Foundation/Foundation.h>

#import "VSUserAccountServiceConnection.h"
#import "VSRemoteNotifier.h"

@interface VSUserAccountManager : NSObject <VSRemoteNotifierDelegate>



@property (retain, nonatomic) VSUserAccountServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (readonly) Class superclass;


+(id)sharedUserAccountManager;
-(id)init;
-(void)deleteUserAccount:(id)arg0 completion:(id)arg1 ;
-(void)queryUserAccountsWithOptions:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)updateUserAccount:(id)arg0 completion:(id)arg1 ;


@end


#endif