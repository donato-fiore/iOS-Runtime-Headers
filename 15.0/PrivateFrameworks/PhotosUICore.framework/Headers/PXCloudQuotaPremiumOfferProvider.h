// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDQUOTAPREMIUMOFFERPROVIDER_H
#define PXCLOUDQUOTAPREMIUMOFFERPROVIDER_H

@class ICQPremiumOffer;


#import "PXObservable.h"

@interface PXCloudQuotaPremiumOfferProvider : PXObservable

@property (readonly, nonatomic) ICQPremiumOffer *premiumOffer; // ivar: _premiumOffer


+(id)currentPremiumOfferProvider;
-(id)init;
-(void)_currentPremiumOfferChangedNotification:(id)arg0 ;
-(void)_queue_getCurrentPremiumOffer;
-(void)_queue_initialSetup;
-(void)_updateCurrentPremiumOffer:(id)arg0 ;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;


@end


#endif