// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL16ACCOUNTPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL16ACCOUNTPRESENTER_H

@class TtC19AppStoreKitInternal13BasePresenter;



@interface _TtC19AppStoreKitInternal16AccountPresenter : TtC19AppStoreKitInternal13BasePresenter {
    ? appStateController;
    ? restrictions;
    ? gameCenterFriendRequestCoordinator;
    ? storeAccountStore;
    ? iCloudAccountStore;
    ? iapStateProvider;
    ? updatesPresenter;
    ? activeStoreAccount;
    ? hasManagedAppleID;
    ? canSetupFamilySharing;
    ? arcadeSubscriptionManager;
    ? hasSubscriptions;
    ? profilePictureDiameter;
    ? view;
    ? profilePicture;
    ? authenticating;
    ? accountNameInputValue;
    ? passwordInputValue;
    ? isMonetaryGiftingEnabled;
    ? accountTopUpURL;
    ? manageSubscriptionsURL;
    ? hasPrimaryiCloudAccount;
    ? snapshotQueue;
    ? onApplySnapshot;
    ? contentSnapshot;
    ? $__lazy_storage_$_notificationsAccountSectionLink;
    ? $__lazy_storage_$_setupFamilySharingSectionLink;
}




-(void)automaticUpdatesEnabledDidChange;
-(void)familyInfoDidChange;
-(void)iCloudAccountsDidChange;
-(void)profilePictureStoreDidChange;
-(void)restrictionsDidChange:(id)arg0 ;
-(void)storeAccountsDidChange;


@end


#endif