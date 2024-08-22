// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDOMPARSER_H
#define SGDOMPARSER_H

@class WKWebView, NSString;
@protocol WKNavigationDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SGDOMParser : NSObject <WKNavigationDelegate>

 {
    NSObject<OS_dispatch_semaphore> *_loadedSem;
    WKWebView *_webView;
    NSString *_html;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_parseDocument:(id)arg0 ;
-(id)parseHTML:(id)arg0 ;
-(id)webView;
-(void)runJavascriptOnWebView:(id)arg0 withCallback:(id)arg1 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif