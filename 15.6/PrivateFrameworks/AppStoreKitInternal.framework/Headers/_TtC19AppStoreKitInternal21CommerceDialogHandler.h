// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19APPSTOREKITINTERNAL21COMMERCEDIALOGHANDLER_H
#define _TTC19APPSTOREKITINTERNAL21COMMERCEDIALOGHANDLER_H

@protocol ASDNotificationCenterDialogObserver;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal21CommerceDialogHandler : NSObject <ASDNotificationCenterDialogObserver>

 {
    ? bag;
    ? presentingViewController;
    ? sheetPresentationViewController;
}




-(id)init;
-(void)handleAuthenticateRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif