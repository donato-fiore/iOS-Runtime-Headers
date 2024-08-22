// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLWEBAUTHFLOWCONTROLLER_H
#define SLWEBAUTHFLOWCONTROLLER_H

@class NSURLRequest, NSString;
@protocol SL_OOPAuthFlowDelegate, UIWebViewDelegate, SLWebClient;

#import <Foundation/Foundation.h>


@interface SLWebAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate>

 {
    NSURLRequest *_requestWithAuthorizationCode;
    id *_completion;
    NSString *_yahooJapanUserName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<SLWebClient> *webClient; // ivar: _webClient


-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg0 ;
-(id)authURLForUsername:(id)arg0 ;
-(id)initWithWebClient:(id)arg0 ;
-(id)initialRedirectURL;
-(id)requestForAuthURL:(id)arg0 ;
-(void)setAuthFlowCompletion:(id)arg0 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(id)arg0 ;


@end


#endif