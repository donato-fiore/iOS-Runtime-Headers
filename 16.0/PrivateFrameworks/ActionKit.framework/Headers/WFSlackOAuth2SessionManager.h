// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLACKOAUTH2SESSIONMANAGER_H
#define WFSLACKOAUTH2SESSIONMANAGER_H

@class NSString;
@protocol WFOAuth2ProviderSessionManager;


#import "WFOAuth2SessionManager.h"

@interface WFSlackOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientID:(id)arg0 clientSecret:(id)arg1 ;
-(id)initWithSessionConfiguration:(id)arg0 clientID:(id)arg1 clientSecret:(id)arg2 ;


@end


#endif