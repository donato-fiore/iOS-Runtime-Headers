// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCLOUDCALLINGLISTCONTROLLER_H
#define TPSCLOUDCALLINGLISTCONTROLLER_H

@class NSString, OBPrivacyLinkController, OBPrivacyPresenter;
@protocol TPSCloudCallingURLControllerDelegate;


#import "TPSListController.h"

@interface TPSCloudCallingListController : TPSListController <TPSCloudCallingURLControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (readonly, nonatomic) OBPrivacyPresenter *privacyPresenter; // ivar: _privacyPresenter
@property (readonly) Class superclass;


-(void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg0 ;
-(void)presentOrUpdateViewController:(id)arg0 ;
-(void)presentPrivacyPresenter;
-(void)privacySplashControllerDidRequestDismissal:(id)arg0 ;


@end


#endif