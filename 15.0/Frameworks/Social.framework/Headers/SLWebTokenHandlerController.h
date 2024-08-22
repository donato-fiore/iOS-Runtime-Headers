// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLWEBTOKENHANDLERCONTROLLER_H
#define SLWEBTOKENHANDLERCONTROLLER_H

@protocol OS_dispatch_queue, SLWebClient;

#import <Foundation/Foundation.h>


@interface SLWebTokenHandlerController : NSObject {
    NSObject<OS_dispatch_queue> *_webClientQueue;
}


@property (readonly) NSObject<SLWebClient> *webClient; // ivar: _webClient


+(id)emailAddressFromIdToken:(id)arg0 ;
-(id)initWithWebClient:(id)arg0 ;
-(void)_exchangeAuthCode:(id)arg0 usingRedirect:(id)arg1 codeVerifier:(id)arg2 forTokensWithCompletion:(id)arg3 ;
-(void)_fetchNamesForToken:(id)arg0 idToken:(id)arg1 completion:(id)arg2 ;
-(void)_fetchNamesForToken:(id)arg0 usingFallbackURL:(id)arg1 completion:(id)arg2 ;
-(void)exchangeAuthCode:(id)arg0 usingRedirect:(id)arg1 codeVerifier:(id)arg2 forTokensAndUsernameWithCompletion:(id)arg3 ;


@end


#endif