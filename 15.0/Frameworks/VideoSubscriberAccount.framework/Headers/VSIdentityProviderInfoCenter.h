// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERINFOCENTER_H
#define VSIDENTITYPROVIDERINFOCENTER_H

@class NSString, NSError, NSOperationQueue;
@protocol VSRemoteNotifierDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSIdentityProvider.h"
#import "VSPreferences.h"
#import "VSRemoteNotifier.h"

@interface VSIdentityProviderInfoCenter : NSObject <VSRemoteNotifierDelegate>



@property (retain, nonatomic) NSString *cachedDesignatedAppBundleIdentifier; // ivar: _cachedDesignatedAppBundleIdentifier
@property (retain, nonatomic) VSIdentityProvider *cachedIdentityProvider; // ivar: _cachedIdentityProvider
@property (nonatomic) BOOL cachedIsSetTopBox; // ivar: _cachedIsSetTopBox
@property (retain, nonatomic) NSError *currentError; // ivar: _currentError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoredFirstNotification; // ivar: _ignoredFirstNotification
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic) BOOL setupCompleted; // ivar: _setupCompleted
@property (readonly) Class superclass;


+(id)sharedCenter;
-(id)_value:(id)arg0 withDefault:(id)arg1 ;
-(id)accountStore;
-(id)device;
-(id)identityProviderFetchAllOperation;
-(id)init;
-(void)_accountStoreDidChange;
-(void)_developerSettingsDidChange;
-(void)_postdentityProviderInfoDidChangeNotification;
-(void)_refresh:(id)arg0 ;
-(void)dealloc;
-(void)enqueueIdentityProviderAppsQueryWithCompletion:(id)arg0 ;
-(void)enqueueInfoQueryWithCompletion:(id)arg0 ;
-(void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(id)arg0 ;
-(void)fetchAccountAndIdentityProvider:(id)arg0 ;
-(void)fetchIdentityProviderAppBundleIdFromDeveloperSettings:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;


@end


#endif