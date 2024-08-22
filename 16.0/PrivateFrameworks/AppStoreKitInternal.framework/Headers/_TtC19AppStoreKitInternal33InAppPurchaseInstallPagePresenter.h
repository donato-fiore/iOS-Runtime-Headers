// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL33INAPPPURCHASEINSTALLPAGEPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL33INAPPPURCHASEINSTALLPAGEPRESENTER_H

@class TtC19AppStoreKitInternal13BasePresenter;



@interface _TtC19AppStoreKitInternal33InAppPurchaseInstallPagePresenter : TtC19AppStoreKitInternal13BasePresenter {
    ? mode;
    ? sidepack;
    ? fetchedPage;
    ? pageUrl;
    ? pageTitle;
    ? didAutoDownload;
    ? initialInstallState;
    ? installAction;
    ? offerDisplayProperties;
    ? stateMachine;
    ? appStateController;
    ? view;
    ? currentState;
}




-(void)didAcceptPreInstallOffer;
-(void)offerButtonTapped;


@end


#endif