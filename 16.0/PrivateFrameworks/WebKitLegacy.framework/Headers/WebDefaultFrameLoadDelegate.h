// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBDEFAULTFRAMELOADDELEGATE_H
#define WEBDEFAULTFRAMELOADDELEGATE_H


#import <Foundation/Foundation.h>


@interface WebDefaultFrameLoadDelegate : NSObject



+(id)sharedFrameLoadDelegate;
-(void)webView:(id)arg0 didCancelClientRedirectForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didChangeLocationWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didClearInspectorWindowObject:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didClearWindowObject:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didClearWindowObjectForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)webView:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didCreateJavaScriptContext:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didDetectXSS:(id)arg1 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didHandleOnloadEventsForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didLayout:(NSUInteger)arg1 ;
-(void)webView:(id)arg0 didPopStateWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didPushStateWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveTitle:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didRemoveFrameFromHierarchy:(id)arg1 ;
-(void)webView:(id)arg0 didReplaceStateWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didRunInsecureContent:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 willCloseFrame:(id)arg1 ;
-(void)webView:(id)arg0 willPerformClientRedirectToURL:(id)arg1 delay:(CGFloat)arg2 fireDate:(id)arg3 forFrame:(id)arg4 ;
-(void)webView:(id)arg0 windowScriptObjectAvailable:(id)arg1 ;
-(void)webViewDidDisplayInsecureContent:(id)arg0 ;


@end


#endif