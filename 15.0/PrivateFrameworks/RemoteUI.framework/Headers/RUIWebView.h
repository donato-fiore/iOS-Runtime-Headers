// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUIWEBVIEW_H
#define RUIWEBVIEW_H

@class WKWebView, NSURL, NSString;
@protocol WKNavigationDelegate;


#import "RUIElement.h"

@interface RUIWebView : RUIElement <WKNavigationDelegate>

 {
    WKWebView *_webView;
}


@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *html; // ivar: _html
@property (readonly) Class superclass;


-(BOOL)_isScrollEnabled;
-(id)scriptForDisableMagnification;
-(id)sourceURL;
-(id)userStyleSheet;
-(id)webView;
-(void)dealloc;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif