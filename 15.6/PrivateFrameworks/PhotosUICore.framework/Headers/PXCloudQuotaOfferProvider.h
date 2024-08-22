// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCLOUDQUOTAOFFERPROVIDER_H
#define PXCLOUDQUOTAOFFERPROVIDER_H

@class ICQOffer;


#import "PXObservable.h"

@interface PXCloudQuotaOfferProvider : PXObservable

@property (readonly, nonatomic) ICQOffer *offer; // ivar: _offer
@property (readonly, nonatomic) BOOL offerHasAssetCounts; // ivar: _offerHasAssetCounts


+(id)currentOfferProvider;
-(id)init;
-(void)_currentOfferChangedNotification:(id)arg0 ;
-(void)_queue_getCurrentOffer;
-(void)_queue_initialSetup;
-(void)_updateCurrentOffer:(id)arg0 ;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;


@end


#endif