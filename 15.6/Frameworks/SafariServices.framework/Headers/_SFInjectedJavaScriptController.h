// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFINJECTEDJAVASCRIPTCONTROLLER_H
#define _SFINJECTEDJAVASCRIPTCONTROLLER_H

@class WKWebView;
@protocol SFInjectedJavaScriptWebProcessController;

#import <Foundation/Foundation.h>


@interface _SFInjectedJavaScriptController : NSObject {
    WKWebView *_webView;
    id<SFInjectedJavaScriptWebProcessController> *_activityProxy;
}




-(id)_webProcessActivityProxy;
-(id)initWithWebView:(id)arg0 ;
-(void)runJavaScriptForActivity:(id)arg0 withScript:(id)arg1 object:(id)arg2 invokeMethod:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif