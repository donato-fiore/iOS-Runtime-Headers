// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQPREMIUMOFFER_H
#define ICQPREMIUMOFFER_H

@class NSNumber;


#import "ICQOffer.h"
#import "ICQOpportunityBubbleSpecification.h"

@interface ICQPremiumOffer : ICQOffer

@property (retain, nonatomic) NSNumber *bundleQuotaInfo; // ivar: _bundleQuotaInfo
@property (retain, nonatomic) NSNumber *commerceQuotaInfo; // ivar: _commerceQuotaInfo
@property (nonatomic) BOOL dismissed; // ivar: _dismissed
@property (nonatomic) BOOL isBadgeApp; // ivar: _isBadgeApp
@property (retain, nonatomic) ICQOpportunityBubbleSpecification *opportunityBubble; // ivar: _opportunityBubble
@property (nonatomic) BOOL shouldStartOnDeviceJourney; // ivar: _shouldStartOnDeviceJourney


-(BOOL)_hasFollowupEnabledFromServerDict:(id)arg0 ;
-(BOOL)getBadgeAppFromServerDict:(id)arg0 ;
-(id)_ICQOpportunityBubbleSpecificationForServerDict:(id)arg0 bundleId:(id)arg1 ;
-(id)_bundleStorageLevelFromServerDict:(id)arg0 ;
-(id)_commerceStorageLevelFromServerDict:(id)arg0 ;
-(id)_parseQuotaInfo:(id)arg0 ;
-(id)_remoteUIURLFromOfferContents;
-(id)initWithServerDictionary:(id)arg0 accountAltDSID:(id)arg1 notificationID:(id)arg2 retrievalDate:(id)arg3 callbackInterval:(CGFloat)arg4 bundleIdentifier:(id)arg5 ;
-(id)remoteUIURL;
-(void)shouldShowOpportunityBubbleWithCompletion:(id)arg0 ;
-(void)shouldShowOpportunityBubbleWithDisplayRuleResult:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif