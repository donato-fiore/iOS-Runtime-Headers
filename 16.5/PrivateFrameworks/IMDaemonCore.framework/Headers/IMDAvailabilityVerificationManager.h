// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDAVAILABILITYVERIFICATIONMANAGER_H
#define IMDAVAILABILITYVERIFICATIONMANAGER_H

@class SKStatusSubscriptionService, NSString, NSCache;
@protocol SKStatusSubscriptionServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDAvailabilityVerificationManager : NSObject <SKStatusSubscriptionServiceDelegate>



@property (retain, nonatomic) SKStatusSubscriptionService *availabilitySubscriptionService; // ivar: _availabilitySubscriptionService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // ivar: _privateWorkQueue
@property (retain, nonatomic) NSCache *subscriptionValidationTokenByHandleIDCache; // ivar: _subscriptionValidationTokenByHandleIDCache
@property (readonly) Class superclass;


+(BOOL)deviceSupportsSubscriptionValidationTokens;
+(id)availabilityStatusTypeIdentifier;
+(id)sharedInstance;
-(id)cachedAvailabilityVerificationTokensForHandleID:(id)arg0 ;
-(id)init;
-(void)_inviteSenderHandleID:(id)arg0 fromHandleID:(id)arg1 ;
-(void)_validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)arg0 encryptionValidationToken:(id)arg1 fromSender:(id)arg2 completion:(id)arg3 ;
-(void)populateCacheWithAvailbailityVerificationTokensForHandleID:(id)arg0 ;
-(void)subscriptionInvitationReceived:(id)arg0 ;
-(void)subscriptionReceivedStatusUpdate:(id)arg0 ;
-(void)subscriptionServiceDaemonDisconnected:(id)arg0 ;
-(void)subscriptionStateChanged:(id)arg0 ;
-(void)verifyPersonalSubscriptionMatchesSubscriptionValidationToken:(id)arg0 encryptionValidationToken:(id)arg1 receivedByHandleID:(id)arg2 fromHandleID:(id)arg3 messageDate:(id)arg4 ;


@end


#endif