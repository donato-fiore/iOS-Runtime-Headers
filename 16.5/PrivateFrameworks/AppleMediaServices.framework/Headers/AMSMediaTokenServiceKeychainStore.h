// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIATOKENSERVICEKEYCHAINSTORE_H
#define AMSMEDIATOKENSERVICEKEYCHAINSTORE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *keychainAccessGroup; // ivar: _keychainAccessGroup


-(BOOL)_removeTokenFromKeychain;
-(BOOL)deleteToken;
-(BOOL)storeToken:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 keychainAccessGroup:(id)arg1 ;
-(id)retrieveToken;
-(struct __CFDictionary *)_copyKeychainQuery;


@end


#endif