// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL22SHEETENGAGEMENTMANAGER_H
#define _TTC19APPSTOREKITINTERNAL22SHEETENGAGEMENTMANAGER_H

@protocol AMSEngagementObserver;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal22SheetEngagementManager : NSObject <AMSEngagementObserver>

 {
    ? engagement;
    ? presentationWindow;
    ? objectGraph;
}




-(id)init;
-(void)engagement:(id)arg0 didUpdateEngagementRequest:(id)arg1 placement:(id)arg2 serviceType:(id)arg3 completion:(id)arg4 ;
-(void)engagement:(id)arg0 didUpdateRequest:(id)arg1 placement:(id)arg2 serviceType:(id)arg3 ;
-(void)engagement:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)engagement:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif