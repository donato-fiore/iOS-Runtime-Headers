// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI26WEBADNAVIGATIONCOORDINATOR_H
#define _TTC17PROMOTEDCONTENTUI26WEBADNAVIGATIONCOORDINATOR_H

@protocol WKNavigationDelegatePrivate;

#import <Foundation/Foundation.h>


@interface _TtC17PromotedContentUI26WebAdNavigationCoordinator : NSObject <WKNavigationDelegatePrivate>

 {
    ? navigationResponder;
}




-(id)init;
-(void)_webView:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 webContentProcessDidTerminateWithReason:(NSInteger)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif