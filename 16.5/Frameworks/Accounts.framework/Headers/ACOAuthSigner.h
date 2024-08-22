// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACOAUTHSIGNER_H
#define ACOAUTHSIGNER_H

@class NSXPCConnection;
@protocol ACDOAuthSignerProtocol;

#import <Foundation/Foundation.h>

#import "ACAccount.h"

@interface ACOAuthSigner : NSObject {
    NSXPCConnection *_connection;
    ACAccount *_account;
    id<ACDOAuthSignerProtocol> *_proxyShim;
}


@property (nonatomic) BOOL shouldIncludeAppIdInRequest; // ivar: _shouldIncludeAppIdInRequest


-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 remoteEndpoint:(id)arg1 ;
-(id)signedURLRequestWithURLRequest:(id)arg0 ;
-(id)signedURLRequestWithURLRequest:(id)arg0 applicationID:(id)arg1 timestamp:(id)arg2 ;
-(id)signedURLRequestWithURLRequest:(id)arg0 callingPID:(id)arg1 timestamp:(id)arg2 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromRemoteOAuthSigner;


@end


#endif