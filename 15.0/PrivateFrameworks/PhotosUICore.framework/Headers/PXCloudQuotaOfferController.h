// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDQUOTAOFFERCONTROLLER_H
#define PXCLOUDQUOTAOFFERCONTROLLER_H

@class NSString;
@protocol PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver;


#import "PXCloudQuotaController.h"
#import "PXCloudQuotaOfferProvider.h"

@interface PXCloudQuotaOfferController : PXCloudQuotaController <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver>

 {
    PXCloudQuotaOfferProvider *_offerProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_mockOfferIncludeAssetCounts;
-(NSInteger)_mockOfferLevel;
-(id)init;
-(id)presentingViewControllerForBannerView:(id)arg0 ;
-(void)_updateInformationView;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif