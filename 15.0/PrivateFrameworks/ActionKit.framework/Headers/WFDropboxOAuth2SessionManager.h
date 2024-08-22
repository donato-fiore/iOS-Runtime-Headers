// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDROPBOXOAUTH2SESSIONMANAGER_H
#define WFDROPBOXOAUTH2SESSIONMANAGER_H

@class NSString;
@protocol WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager;


#import "WFOAuth2SessionManager.h"

@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)appAuthorizationSessionWithCompletionHandler:(id)arg0 ;
-(id)authorizationSessionWithCompletionHandler:(id)arg0 ;
-(id)initWithClientID:(id)arg0 clientSecret:(id)arg1 ;
-(id)initWithSessionConfiguration:(id)arg0 clientID:(id)arg1 clientSecret:(id)arg2 ;
-(void)authenticateWithLegacyAccessToken:(id)arg0 accessTokenSecret:(id)arg1 completionHandler:(id)arg2 ;
-(void)revokeCredential:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif