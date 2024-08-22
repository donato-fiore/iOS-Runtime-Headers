// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDAUTHENTICATIONPLUGINMANAGER_H
#define ACDAUTHENTICATIONPLUGINMANAGER_H

@class ACRateLimiter, NSMutableSet, NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACDQueueDictionary.h"

@interface ACDAuthenticationPluginManager : NSObject {
    ACDQueueDictionary *_verificationHandlerQueues;
    ACDQueueDictionary *_renewalHandlerQueues;
    ACDQueueDictionary *_discoveryHandlerQueues;
    ACRateLimiter *_renewalRateLimiter;
    NSMutableSet *_keysForRateExceededBugSent;
    NSLock *_verificationHandlersLock;
    NSLock *_renewalHandlersLock;
    NSLock *_discoveryHandlersLock;
    NSMutableDictionary *_authenticationPluginsByType;
    NSObject<OS_dispatch_queue> *_authenticationPluginQueue;
}


@property (retain) ACRateLimiter *renewalRateLimiter;


-(BOOL)_renewalRequestIsWithinLimitsForAccount:(id)arg0 accountStore:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg0 ;
-(id)_authCapableParentAccountForAccount:(id)arg0 ;
-(id)_authenticationTypeForAccount:(id)arg0 ;
-(id)_descriptionForRenewalResult:(NSInteger)arg0 ;
-(id)_pluginForAuthenticationType:(id)arg0 ;
-(id)_sanitizeError:(id)arg0 ;
-(id)_unsanitizeOptionsDictionary:(id)arg0 ;
-(id)init;
-(void)_handleDiscoveryCompletionResult:(id)arg0 forAccount:(id)arg1 discoveryID:(id)arg2 accountStore:(id)arg3 shouldSave:(BOOL)arg4 error:(id)arg5 ;
-(void)_handleRenewalCompletionResult:(NSInteger)arg0 forAccount:(id)arg1 renewalID:(id)arg2 accountStore:(id)arg3 error:(id)arg4 ;
-(void)_handleVerificationCompletionForAccount:(id)arg0 verifiedAccount:(id)arg1 error:(id)arg2 store:(id)arg3 shouldSave:(BOOL)arg4 ;
-(void)credentialForAccount:(id)arg0 client:(id)arg1 store:(id)arg2 handler:(id)arg3 ;
-(void)discoverPropertiesForAccount:(id)arg0 accountStore:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg0 accountStore:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg0 accountStore:(id)arg1 options:(id)arg2 handler:(id)arg3 ;


@end


#endif