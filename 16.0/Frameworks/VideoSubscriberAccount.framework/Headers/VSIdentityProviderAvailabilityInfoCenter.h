// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIDENTITYPROVIDERAVAILABILITYINFOCENTER_H
#define VSIDENTITYPROVIDERAVAILABILITYINFOCENTER_H

@class NSString, NSOperationQueue;
@protocol VSRemoteNotifierDelegate;

#import <Foundation/Foundation.h>

#import "VSDeveloperServiceConnection.h"
#import "VSAMSBagLoadOperation.h"
#import "VSPreferences.h"
#import "VSRemoteNotifier.h"

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSDeveloperServiceConnection *developerServiceConnection; // ivar: _developerServiceConnection
@property (nonatomic) BOOL hasDeterminedInitialStatus; // ivar: _hasDeterminedInitialStatus
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSAMSBagLoadOperation *mockAMSBagLoadOperation; // ivar: _mockAMSBagLoadOperation
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversOfStatus;
+(id)defaultCenter;
-(id)init;
-(void)_accountStoreChanged:(id)arg0 ;
-(void)_beginStatusUpdateAttemptWithCompletionHandler:(id)arg0 ;
-(void)_sendStatusChangeNotification;
-(void)determineIdentityProviderAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;


@end


#endif