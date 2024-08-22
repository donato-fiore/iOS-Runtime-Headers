// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDLEGACYCLINICALCREDENTIALMANAGER_H
#define HDLEGACYCLINICALCREDENTIALMANAGER_H

@class NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDLegacyClinicalCredentialManager : NSObject {
    NSData *_cachedCredentialKey;
    NSObject<OS_dispatch_queue> *_credentialKeyQueue;
}


@property (copy, nonatomic) NSData *cachedCredentialKey;


-(BOOL)deleteCredentialKeyFromKeychainWithError:(*id)arg0 ;
-(BOOL)unitTesting_storeCredentialKeyInKeychain:(id)arg0 error:(*id)arg1 ;
-(id)_tokenDataFromToken:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(*id)arg0 ;


@end


#endif