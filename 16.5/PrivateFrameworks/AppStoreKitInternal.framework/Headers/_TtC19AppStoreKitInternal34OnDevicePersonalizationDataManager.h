// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL34ONDEVICEPERSONALIZATIONDATAMANAGER_H
#define _TTC19APPSTOREKITINTERNAL34ONDEVICEPERSONALIZATIONDATAMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal34OnDevicePersonalizationDataManager : NSObject {
    ? accountStore;
    ? requestQueue;
    ? bag;
    ? storeDataProvider;
    ? amsEngagement;
    ? dataCacheAvailabilityConditionLock;
    ? dataCacheBox;
    ? activeStoreAccount;
    ? timeoutTimer;
}




-(id)init;
-(void)appEnteredWhileAppeared;
-(void)storeAccountDidChange;


@end


#endif