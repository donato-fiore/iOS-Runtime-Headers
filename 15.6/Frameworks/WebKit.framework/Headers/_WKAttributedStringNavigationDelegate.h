// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKATTRIBUTEDSTRINGNAVIGATIONDELEGATE_H
#define _WKATTRIBUTEDSTRINGNAVIGATIONDELEGATE_H

@class NSString;
@protocol WKNavigationDelegate;

#import <Foundation/Foundation.h>


@interface _WKAttributedStringNavigationDelegate : NSObject <WKNavigationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *decidePolicyForNavigationAction; // ivar: _decidePolicyForNavigationAction
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFailNavigation; // ivar: _didFailNavigation
@property (copy, nonatomic) id *didFailProvisionalNavigation; // ivar: _didFailProvisionalNavigation
@property (copy, nonatomic) id *didFinishNavigation; // ivar: _didFinishNavigation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *webContentProcessDidTerminate; // ivar: _webContentProcessDidTerminate


-(void)dealloc;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif