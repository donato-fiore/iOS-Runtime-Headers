// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCLOUDQUOTAPREMIUMOFFERCONTROLLER_H
#define PXCLOUDQUOTAPREMIUMOFFERCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, ICQTileViewDelegate;


#import "PXCloudQuotaController.h"
#import "PXCloudQuotaPremiumOfferProvider.h"

@interface PXCloudQuotaPremiumOfferController : PXCloudQuotaController <PXChangeObserver, ICQTileViewDelegate>

 {
    PXCloudQuotaPremiumOfferProvider *_premiumOfferProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tileView:(id)arg0 performAction:(NSInteger)arg1 parameters:(id)arg2 ;
-(id)init;
-(id)presentingViewControllerForTileView:(id)arg0 ;
-(void)_updateInformationView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)updateTileView;


@end


#endif