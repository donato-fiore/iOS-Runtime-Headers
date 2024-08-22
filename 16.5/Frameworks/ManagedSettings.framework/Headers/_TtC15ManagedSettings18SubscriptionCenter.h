// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15MANAGEDSETTINGS18SUBSCRIPTIONCENTER_H
#define _TTC15MANAGEDSETTINGS18SUBSCRIPTIONCENTER_H

@class SwiftObject;
@protocol _TtP15ManagedSettings30ManagedSettingsSubscriberProxy_;



@interface _TtC15ManagedSettings18SubscriptionCenter : SwiftObject <_TtP15ManagedSettings30ManagedSettingsSubscriberProxy_>

 {
    ? $__lazy_storage_$_connection;
    ? lock;
    ? effectiveSubject;
    ? effectiveSubscriptions;
}




-(void)effectiveSettingsChangedForGroups:(id)arg0 ;


@end


#endif