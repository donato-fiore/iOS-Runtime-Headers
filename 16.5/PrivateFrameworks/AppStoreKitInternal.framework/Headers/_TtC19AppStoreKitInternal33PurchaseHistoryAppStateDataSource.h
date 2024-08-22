// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL33PURCHASEHISTORYAPPSTATEDATASOURCE_H
#define _TTC19APPSTOREKITINTERNAL33PURCHASEHISTORYAPPSTATEDATASOURCE_H


#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal33PurchaseHistoryAppStateDataSource : NSObject {
    ? delegate;
    ? accessQueue;
    ? callbackQueue;
    ? expectedAppStates;
    ? lastAccountId;
    ? additionalFamilyMembers;
    ? purchaseHistory;
    ? hasRequestedPurchaseHistoryUpdate;
    ? purchaseHistoryContext;
}




-(id)init;
-(void)accountsDidChange;
-(void)dealloc;
-(void)purchaseHistoryUpdated:(id)arg0 ;


@end


#endif