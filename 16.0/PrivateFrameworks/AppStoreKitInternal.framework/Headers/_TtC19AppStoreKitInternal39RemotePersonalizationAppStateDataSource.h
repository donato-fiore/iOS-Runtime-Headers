// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL39REMOTEPERSONALIZATIONAPPSTATEDATASOURCE_H
#define _TTC19APPSTOREKITINTERNAL39REMOTEPERSONALIZATIONAPPSTATEDATASOURCE_H


#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal39RemotePersonalizationAppStateDataSource : NSObject {
    ? delegate;
    ? accessQueue;
    ? expectedAppStates;
    ? registeredAdamIds;
    ? bag;
    ? urlSession;
    ? process;
}




-(id)init;
-(void)dealloc;
-(void)didCompletePurchase:(id)arg0 ;
-(void)registerPersonalizedAdamIds:(id)arg0 ;
-(void)storeAccountDidChange;


@end


#endif