// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL24PRODUCTASKTOBUYPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL24PRODUCTASKTOBUYPRESENTER_H

@class SwiftObject;



@interface _TtC19AppStoreKitInternal24ProductAskToBuyPresenter : SwiftObject {
    ? isAskToBuyApproval;
    ? didRequestAskToBuy;
    ? appStateController;
    ? currentlyObservedAdamId;
    ? productPage;
    ? onDidRequestAskToBuy;
    ? onDidApproveAskToBuy;
    ? onPerformAction;
}




-(void)handleAskToBuyRequest:(id)arg0 ;


@end


#endif