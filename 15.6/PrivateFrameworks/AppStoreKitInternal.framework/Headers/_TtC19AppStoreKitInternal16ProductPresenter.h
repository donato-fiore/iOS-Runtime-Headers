// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19APPSTOREKITINTERNAL16PRODUCTPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL16PRODUCTPRESENTER_H

@class TtC19AppStoreKitInternal13BasePresenter;



@interface _TtC19AppStoreKitInternal16ProductPresenter : TtC19AppStoreKitInternal13BasePresenter {
    ? appStateController;
    ? completeMyBundleController;
    ? purchaseHistory;
    ? restrictions;
    ? fullProductFetchedAction;
    ? view;
    ? pageRefreshPolicy;
    ? isFetchingShelves;
    ? numberOfActiveRequests;
    ? sidepackedProduct;
    ? fullProduct;
    ? productUrl;
    ? hasBeenPurchasedForReviewsContainer;
    ? isLocalApplicationForAppEvents;
    ? shouldDisplayBetaBanner;
    ? currentBetaBundleVersion;
    ? isPurchased;
    ? isMediaExpanded;
    ? didAskToBuy;
    ? currentlyObservedAdamId;
}




-(void)restrictionsDidChange:(id)arg0 ;


@end


#endif