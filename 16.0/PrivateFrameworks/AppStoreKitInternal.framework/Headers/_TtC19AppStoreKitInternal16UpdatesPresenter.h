// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL16UPDATESPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL16UPDATESPRESENTER_H

@class TtC19AppStoreKitInternal13BasePresenter;



@interface _TtC19AppStoreKitInternal16UpdatesPresenter : TtC19AppStoreKitInternal13BasePresenter {
    ? onUpdatesDataChanged;
    ? onPerformAction;
    ? onShowWhatsNew;
    ? onUpdateAllChanged;
    ? updateStore;
    ? automaticUpdates;
    ? appStateController;
    ? isAppleSiliconSupportEnabled;
    ? isRosettaAvailable;
    ? hasLoaded;
    ? canUpdateBadgeCounts;
    ? isUpdateAllEnabled;
    ? pendingUpdates;
    ? recentUpdates;
    ? haveDoneInitialUpdatesFetch;
    ? sections;
    ? expandedUpdates;
    ? appStateControllerReady;
    ? organizationQueue;
    ? transitionQueue;
    ? currentTransitionContext;
    ? numberFormatter;
    ? lastServerRefreshTime;
    ? includeUpdateAllInPendingUpdates;
    ? externalPendingUpdatesSectionIndex;
    ? externalRecentlyUpdatedSectionIndex;
}




-(void)updateStoreDidChange;


@end


#endif