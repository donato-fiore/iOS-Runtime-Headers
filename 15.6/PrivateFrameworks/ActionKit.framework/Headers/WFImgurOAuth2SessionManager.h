// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFIMGUROAUTH2SESSIONMANAGER_H
#define WFIMGUROAUTH2SESSIONMANAGER_H

@class NSString;
@protocol WFOAuth2ProviderSessionManager;


#import "WFOAuth2SessionManager.h"

@interface WFImgurOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)authorizationSessionWithResponseType:(id)arg0 scopes:(id)arg1 redirectURI:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithClientID:(id)arg0 clientSecret:(id)arg1 ;
-(id)initWithSessionConfiguration:(id)arg0 clientID:(id)arg1 clientSecret:(id)arg2 ;
-(void)sendRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif