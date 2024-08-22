// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIATOKENSERVICESTORE_H
#define AMSMEDIATOKENSERVICESTORE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AMSMediaTokenServiceKeychainStore.h"
#import "AMSMediaToken.h"

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) os_unfair_lock_s accessLock; // ivar: _accessLock
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *keychainAccessGroup; // ivar: _keychainAccessGroup
@property (readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore; // ivar: _keychainStore
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken; // ivar: _memoryMediaToken
@property (readonly, nonatomic) NSString *notificationObject; // ivar: _notificationObject


+(BOOL)_hasAppleGroupEnabled;
-(id)_mediaTokenChangedNotificationName;
-(id)_mediaTokenFromUserDefaults;
-(id)initWithClientIdentifier:(id)arg0 keychainAccessGroup:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg0 keychainStore:(id)arg1 ;
-(id)retrieveToken;
-(void)_deleteMediaTokenFromUserDefaultsIfPresent;
-(void)_mediaTokenChanged:(id)arg0 ;
-(void)_setupKeychainNotifications;
-(void)_teardownKeychainNotifications;
-(void)dealloc;
-(void)deleteToken;
-(void)storeToken:(id)arg0 ;


@end


#endif