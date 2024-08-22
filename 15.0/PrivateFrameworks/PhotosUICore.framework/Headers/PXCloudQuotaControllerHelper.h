// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDQUOTACONTROLLERHELPER_H
#define PXCLOUDQUOTACONTROLLERHELPER_H

@class NSString, UIView;
@protocol PXCloudQuotaControllerDelegate, PXCloudQuotaControllerHelperDelegate;

#import <Foundation/Foundation.h>

#import "PXCloudQuotaOfferController.h"
#import "PXCloudQuotaPremiumOfferController.h"

@interface PXCloudQuotaControllerHelper : NSObject <PXCloudQuotaControllerDelegate>

 {
    PXCloudQuotaOfferController *_offerController;
    PXCloudQuotaPremiumOfferController *_premiumOfferController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCloudQuotaControllerHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAnyInformationViews;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *informationView;
@property (readonly, nonatomic) UIView *premiumInformationView;
@property (readonly) Class superclass;


-(id)init;
-(id)presentingViewControllerForCloudQuotaController:(id)arg0 ;
-(void)cloudQuotaController:(id)arg0 informationViewDidChange:(id)arg1 ;


@end


#endif