// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL25PURCHASESCONTENTPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL25PURCHASESCONTENTPRESENTER_H

@class TtC19AppStoreKitInternal13BasePresenter;



@interface _TtC19AppStoreKitInternal25PurchasesContentPresenter : TtC19AppStoreKitInternal13BasePresenter {
    ? view;
    ? purchaseHistory;
    ? accountStore;
    ? familyMember;
    ? purchases;
    ? updatedPurchases;
    ? appStateControllerReady;
    ? observer;
    ? purchasesContentModes;
    ? term;
    ? showMacOSCompatibleIOSApps;
    ? isRosettaAvailable;
    ? appStateController;
    ? mode;
    ? canHidePurchases;
}




-(void)handlePurchasesChanged;


@end


#endif