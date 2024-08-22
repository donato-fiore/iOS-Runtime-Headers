// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19APPSTOREKITINTERNAL19URLPROTOCOLDELEGATE_H
#define _TTC19APPSTOREKITINTERNAL19URLPROTOCOLDELEGATE_H

@protocol AMSURLProtocolDelegate, NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal19URLProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate>

 {
    ? dialogStyle;
}




-(id)init;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;


@end


#endif