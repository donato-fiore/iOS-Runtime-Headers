// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBDEFAULTUIDELEGATE_H
#define WEBDEFAULTUIDELEGATE_H

@class NSString;
@protocol WebUIDelegate;

#import <Foundation/Foundation.h>


@interface WebDefaultUIDelegate : NSObject <WebUIDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedUIDelegate;
-(BOOL)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(BOOL)webViewAreToolbarsVisible:(id)arg0 ;
-(BOOL)webViewIsResizable:(id)arg0 ;
-(BOOL)webViewIsStatusBarVisible:(id)arg0 ;
-(NSUInteger)webView:(id)arg0 dragDestinationActionMaskForSession:(id)arg1 ;
-(id)webView:(id)arg0 createWebViewWithRequest:(id)arg1 userGesture:(BOOL)arg2 ;
-(id)webView:(id)arg0 createWebViewWithRequest:(id)arg1 windowFeatures:(id)arg2 ;
-(id)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webViewFirstResponder:(id)arg0 ;
-(id)webViewStatusText:(id)arg0 ;
-(struct CGRect )webViewFrame:(id)arg0 ;
-(void)webView:(id)arg0 didDrawRect:(struct CGRect )arg1 ;
-(void)webView:(id)arg0 didScrollDocumentInFrameView:(id)arg1 ;
-(void)webView:(id)arg0 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg1 totalSpaceNeeded:(NSUInteger)arg2 ;
-(void)webView:(id)arg0 makeFirstResponder:(id)arg1 ;
-(void)webView:(id)arg0 mouseDidMoveOverElement:(id)arg1 modifierFlags:(NSUInteger)arg2 ;
-(void)webView:(id)arg0 printFrameView:(id)arg1 ;
-(void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 ;
-(void)webView:(id)arg0 runOpenPanelForFileButtonWithResultListener:(id)arg1 ;
-(void)webView:(id)arg0 setFrame:(struct CGRect )arg1 ;
-(void)webView:(id)arg0 setResizable:(BOOL)arg1 ;
-(void)webView:(id)arg0 setStatusBarVisible:(BOOL)arg1 ;
-(void)webView:(id)arg0 setStatusText:(id)arg1 ;
-(void)webView:(id)arg0 setToolbarsVisible:(BOOL)arg1 ;
-(void)webViewClose:(id)arg0 ;
-(void)webViewFocus:(id)arg0 ;
-(void)webViewShow:(id)arg0 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg0 ;
-(void)webViewUnfocus:(id)arg0 ;


@end


#endif