// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSOSECRETDELEGATE_H
#define WKSOSECRETDELEGATE_H

@class NSString;
@protocol WKNavigationDelegate, WKUIDelegate;

#import <Foundation/Foundation.h>


@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate>

 {
    WeakPtr<WebKit::PopUpSOAuthorizationSession, WTF::EmptyCounter> _session;
    BOOL _isFirstNavigation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSession:(*void)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewDidClose:(id)arg0 ;


@end


#endif