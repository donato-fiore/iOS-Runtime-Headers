// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREDPASSSHARESCONTROLLER_H
#define PKSHAREDPASSSHARESCONTROLLER_H

@class NSHashTable, NSString, NSArray;
@protocol PKPaymentDataProviderDelegate, PKPaymentDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKContactResolver.h"
#import "PKPaymentWebService.h"
#import "PKPassShare.h"
#import "PKSecureElementPass.h"

@interface PKSharedPassSharesController : NSObject <PKPaymentDataProviderDelegate>

 {
    PKContactResolver *_contactResolver;
    PKPaymentWebService *_webService;
    id<PKPaymentDataProvider> *_paymentServiceProvider;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _featureSupported;
    BOOL _isPerformingBatchOpperation;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegateLock;
}


@property (readonly, nonatomic) BOOL canAllowResharing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRevokableShares;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCrossPlatformSharingEnabled;
@property (readonly, nonatomic) NSUInteger maxEntitlementSelectionCount;
@property (readonly, nonatomic) PKPassShare *mostRecentlyCreatedShare; // ivar: _mostRecentlyCreatedShare
@property (readonly, nonatomic) NSArray *myEntitlements; // ivar: _myEntitlements
@property (readonly, nonatomic) NSArray *nonLocalShares;
@property (readonly, nonatomic) PKSecureElementPass *pass; // ivar: _pass
@property (readonly, nonatomic) NSArray *rootShares;
@property (readonly, nonatomic) NSArray *shareableEntitlements; // ivar: _shareableEntitlements
@property (readonly, nonatomic) NSArray *shares; // ivar: _shares
@property (readonly, nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (readonly) Class superclass;


-(BOOL)isSharingChannelBlockedForChannel:(id)arg0 isRecipientKnownContact:(BOOL)arg1 ;
-(NSInteger)_randomCodeOfLength:(NSInteger)arg0 ;
-(NSUInteger)numberOfOutstandingSharingSession;
-(id)_contactResolver;
-(id)_feature;
-(id)_sharingActivationConfigurationForChannel:(id)arg0 channelRisk:(NSInteger)arg1 ;
-(id)allowedSharingChannels;
-(id)baseNewShareForPass;
-(id)blockedSharingChannels;
-(id)childSharesOfShare:(id)arg0 ;
-(id)contactForShare:(id)arg0 ;
-(id)entitlementsForShare:(id)arg0 ;
-(id)initWithPass:(id)arg0 contactResolver:(id)arg1 webService:(id)arg2 paymentServiceProvider:(id)arg3 queue:(id)arg4 ;
-(id)initWithPass:(id)arg0 webService:(id)arg1 paymentServiceProvider:(id)arg2 queue:(id)arg3 ;
-(id)senderShareForShare:(id)arg0 ;
-(id)shareForShareIdentifier:(id)arg0 ;
-(id)shareInitiationActivationConfigurationForChannelBundleIdentifier:(id)arg0 isRecipientKnownContact:(BOOL)arg1 ;
-(void)addDefaultShareActivationOptionsToShare:(id)arg0 availableOptions:(*id)arg1 allowUserEdit:(*BOOL)arg2 channelBundleIdentifier:(id)arg3 isRecipientKnownContact:(BOOL)arg4 ;
-(void)addDelegate:(id)arg0 ;
-(void)canSendInvitationWithCompletion:(id)arg0 ;
-(void)createShareWithPartialShare:(id)arg0 authorization:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateShares;
-(void)fetchContactForShare:(id)arg0 withCompletion:(id)arg1 ;
-(void)immobilizerTokenCountWithCompletion:(id)arg0 ;
-(void)prewarmCreateShare;
-(void)removeDelegate:(id)arg0 ;
-(void)revokeAllSharesWithCompletion:(id)arg0 ;
-(void)revokeShare:(id)arg0 shouldCascade:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)sharesDidUpdateWithPaymentPassWithUniqueIdentifier:(id)arg0 ;
-(void)updateEntitlementsWithCompletion:(id)arg0 ;
-(void)updateShare:(id)arg0 authorization:(id)arg1 completion:(id)arg2 ;
-(void)updateSharesWithCompletion:(id)arg0 ;


@end


#endif