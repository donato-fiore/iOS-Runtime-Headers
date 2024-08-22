// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCTXPCSERVICESUBSCRIPTIONINFO_H
#define IMCTXPCSERVICESUBSCRIPTIONINFO_H

@class NSArray, CTXPCServiceSubscriptionInfo;

#import <Foundation/Foundation.h>


@interface IMCTXPCServiceSubscriptionInfo : NSObject

@property (retain, nonatomic) NSArray *phoneNumbersOfActiveSubscriptions; // ivar: _phoneNumbersOfActiveSubscriptions
@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo


-(BOOL)__im_containsPhoneNumber:(id)arg0 ;
-(BOOL)__im_hasMultipleSubscriptions;
-(BOOL)__im_onlyHasActiveSlots;
-(NSInteger)__imSlotIDSForPhoneNumber:(id)arg0 ;
-(id)__imSIMIDForSubscriptionSlot:(NSInteger)arg0 ;
-(id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)arg0 ;
-(id)__im_labelForPhoneNumber:(id)arg0 simID:(id)arg1 ;
-(id)__im_phoneNumberForSlotID:(NSInteger)arg0 ;
-(id)__im_phoneNumberForSlotIDOrDefault:(NSInteger)arg0 ;
-(id)__im_preferredSubscriptionContext;
-(id)__im_subscriptionContextForForSimID:(id)arg0 ;
-(id)__im_subscriptionContextForForSimID:(id)arg0 phoneNumber:(id)arg1 ;
-(id)__im_subscriptionContextForForSlotID:(NSInteger)arg0 ;
-(id)__im_subscriptionContextForPhoneNumber:(id)arg0 ;
-(id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg0 ;
-(id)__im_subscriptionContextForSenderIdentity:(id)arg0 ;
-(id)__im_subscriptionContextOrDefaultForForSimID:(id)arg0 phoneNumber:(id)arg1 ;
-(id)__im_subscriptionContextOrDefaultForForSlotID:(NSInteger)arg0 ;
-(id)__im_subscriptionsWithMMSSupport;
-(id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg0 simID:(id)arg1 ;
-(id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg0 ;
-(id)_senderIdentityManager;
-(id)allSubscriptions;
-(id)description;
-(id)initWithSubscriptionInfo:(id)arg0 ;
-(id)preferredOrDefaultSubscriptionContext;
-(id)subscriptions;


@end


#endif