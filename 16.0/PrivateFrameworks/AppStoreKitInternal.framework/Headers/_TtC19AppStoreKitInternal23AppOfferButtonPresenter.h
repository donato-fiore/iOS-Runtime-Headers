// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL23APPOFFERBUTTONPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL23APPOFFERBUTTONPRESENTER_H

@class SwiftObject;



@interface _TtC19AppStoreKitInternal23AppOfferButtonPresenter : SwiftObject {
    ? view;
    ? buttonAction;
    ? offerDisplayProperties;
    ? restrictions;
    ? stateMachine;
    ? theme;
    ? alignment;
    ? subtitlePosition;
    ? hasCompactRedownloads;
    ? includeBetaApps;
    ? isBeingConfirmed;
    ? arePreordersCancellable;
    ? currentState;
    ? previousState;
    ? hasParentBeenPurchased;
}




-(void)offerButtonTapped;
-(void)restrictionsDidChange:(id)arg0 ;


@end


#endif