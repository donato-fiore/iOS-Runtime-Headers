// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7MUSICUI19URLPROTOCOLDELEGATE_H
#define _TTC7MUSICUI19URLPROTOCOLDELEGATE_H

@protocol AMSURLProtocolDelegate, NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI19URLProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate>

 {
    ? tabViewController;
}




-(id)init;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;


@end


#endif