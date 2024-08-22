// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNGEMINIMANAGER_H
#define CNGEMINIMANAGER_H

@class CoreTelephonyClient, TUCallProviderManager, NSMapTable, NSString;
@protocol CoreTelephonyClientDelegate, TUCallProviderManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CNContactsEnvironment.h"

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate>

 {
    CNContactsEnvironment *_environment;
    CoreTelephonyClient *_coreTelephonyClient;
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
}


@property (nonatomic) NSUInteger dataSourceExclusions; // ivar: _dataSourceExclusions
@property (nonatomic) NSUInteger dataSourceExclusions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deviceSupportsGemini;
+(id)channelStringFromSenderIdentity:(id)arg0 ;
+(id)descriptorForRequiredKeys;
-(BOOL)isReferencedByContactsForSenderLabelIdentifier:(id)arg0 store:(id)arg1 ;
-(BOOL)remapChannelIdentifier:(id)arg0 toIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)remapContactsHavingPreferredChannelIdentifier:(id)arg0 toPreferredChannelIdentifier:(id)arg1 contactStore:(id)arg2 error:(*id)arg3 ;
-(id)badgeLabelForSenderIdentity:(id)arg0 error:(*id)arg1 ;
-(id)badgeLabelForSubscription:(id)arg0 error:(*id)arg1 ;
-(id)bestSenderIdentityForContact:(id)arg0 error:(*id)arg1 ;
-(id)bestSenderIdentityForFavoritesEntry:(id)arg0 error:(*id)arg1 ;
-(id)bestSenderIdentityForHandle:(id)arg0 contactStore:(id)arg1 error:(*id)arg2 ;
-(id)bestSubscriptionForContact:(id)arg0 error:(*id)arg1 ;
-(id)bestSubscriptionForHandle:(id)arg0 contactStore:(id)arg1 error:(*id)arg2 ;
-(id)channelForContact:(id)arg0 error:(*id)arg1 ;
-(id)channelForFavoritesEntry:(id)arg0 error:(*id)arg1 ;
-(id)fetchedSenderIdentitiesWithError:(*id)arg0 ;
-(id)geminiResultForContact:(id)arg0 error:(*id)arg1 ;
-(id)geminiResultForContact:(id)arg0 substituteDefaultForDangling:(BOOL)arg1 error:(*id)arg2 ;
-(id)geminiResultForHandle:(id)arg0 contactStore:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCallProviderManager:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 coreTelephonyClient:(id)arg1 callProviderManager:(id)arg2 ;
-(id)remoteBestSenderIdentityForHandle:(id)arg0 contactStore:(id)arg1 error:(*id)arg2 ;
-(id)remoteGeminiResultForContact:(id)arg0 substituteDefaultForDangling:(BOOL)arg1 error:(*id)arg2 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)danglingPlansDidUpdate:(id)arg0 ;
-(void)providersChangedForProviderManager:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)subscriptionInfoDidChange;


@end


#endif