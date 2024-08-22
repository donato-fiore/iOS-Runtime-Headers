// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBEXTENSIONCONTEXTDELEGATE_H
#define _WKWEBEXTENSIONCONTEXTDELEGATE_H

@class NSString;
@protocol WKNavigationDelegate, WKUIDelegate;

#import <Foundation/Foundation.h>


@interface _WKWebExtensionContextDelegate : NSObject <WKNavigationDelegate, WKUIDelegate>

 {
    WeakPtr<WebKit::WebExtensionContext, WTF::DefaultWeakPtrImpl> _webExtensionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWebExtensionContext:(*void)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif