// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL33FLOATINGUNIFIEDMESSAGECOORDINATOR_H
#define _TTC19APPSTOREKITINTERNAL33FLOATINGUNIFIEDMESSAGECOORDINATOR_H

@protocol AMSEngagementObserver, AMSUIMessageViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal33FloatingUnifiedMessageCoordinator : NSObject <AMSEngagementObserver, AMSUIMessageViewControllerDelegate>

 {
    ? actionHandler;
    ? engagement;
    ? metricsPipeline;
    ? registeredPlacements;
    ? onscreenViewController;
}




-(id)init;
-(void)engagement:(id)arg0 didUpdateEngagementRequest:(id)arg1 placement:(id)arg2 serviceType:(id)arg3 completion:(id)arg4 ;
-(void)engagement:(id)arg0 didUpdateRequest:(id)arg1 placement:(id)arg2 serviceType:(id)arg3 ;
-(void)engagement:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)engagement:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;
-(void)messageViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)messageViewController:(id)arg0 didSelectActionWithDialogResult:(id)arg1 ;
-(void)messageViewController:(id)arg0 didUpdateSize:(struct CGSize )arg1 ;
-(void)messageViewController:(id)arg0 enqueueEventWithFields:(id)arg1 inTopic:(id)arg2 ;


@end


#endif