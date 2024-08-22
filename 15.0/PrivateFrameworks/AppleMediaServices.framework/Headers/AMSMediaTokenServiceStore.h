// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMEDIATOKENSERVICESTORE_H
#define AMSMEDIATOKENSERVICESTORE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMediaTokenServiceKeychainStore.h"
#import "AMSMediaToken.h"
#import "AMSMediaTokenServiceUserDefaultsStore.h"

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSString *keychainAccessGroup; // ivar: _keychainAccessGroup
@property (retain, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore; // ivar: _keychainStore
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken; // ivar: _memoryMediaToken
@property (retain, nonatomic) AMSMediaTokenServiceUserDefaultsStore *userDefaultsStore; // ivar: _userDefaultsStore


-(BOOL)_hasAppleGroupEnabled;
-(id)_mediaTokenChangedNotificationName;
-(id)initWithClientIdentifier:(id)arg0 keychainAccessGroup:(id)arg1 ;
-(id)retrieveToken;
-(void)_mediaTokenChanged;
-(void)_postMediaTokenChangedNotification;
-(void)_setupKeychainNotifications;
-(void)_teardownKeychainNotifications;
-(void)dealloc;
-(void)storeToken:(id)arg0 ;


@end


#endif