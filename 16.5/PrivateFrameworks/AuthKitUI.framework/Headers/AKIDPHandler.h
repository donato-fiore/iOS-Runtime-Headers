// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKIDPHANDLER_H
#define AKIDPHANDLER_H

@class AKServerRequestConfiguration, NSString;
@protocol WKNavigationDelegate, AKIDPHandlerDelegate;

#import <Foundation/Foundation.h>

#import "AKURLRequestApprover.h"

@interface AKIDPHandler : NSObject <WKNavigationDelegate>

 {
    AKURLRequestApprover *_redirectApprover;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) AKServerRequestConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKIDPHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_safeACSDictionaryFromResult:(id)arg0 ;
-(id)_samlJavaScriptQuery;
-(id)_sanitizeError:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_completeFlowWithError:(id)arg0 ;
-(void)_completeWithACSPostRequestFromWebView:(id)arg0 ;
-(void)cancel;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif