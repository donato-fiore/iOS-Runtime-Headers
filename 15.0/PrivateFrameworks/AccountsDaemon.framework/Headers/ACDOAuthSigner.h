// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDOAUTHSIGNER_H
#define ACDOAUTHSIGNER_H

@class NSString;
@protocol ACDOAuthSignerProtocol;

#import <Foundation/Foundation.h>

#import "ACDClient.h"
#import "ACDDatabaseConnection.h"
#import "ACDClientAuthorizationManager.h"

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>

 {
    ACDClient *_client;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _shouldIncludeAppIdInRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
-(BOOL)_permissionGrantedForBundleID:(id)arg0 onAccountType:(id)arg1 ;
-(id)_signedRequest:(id)arg0 withAccountObject:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)ckForAccountType:(id)arg0 ;
-(id)csForAccountType:(id)arg0 ;
-(id)init;
-(id)initWithClient:(id)arg0 databaseConnection:(id)arg1 ;
-(id)signedRequest:(id)arg0 withAccount:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(void)setClientBundleID:(id)arg0 withHandler:(id)arg1 ;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg0 ;
-(void)signURLRequest:(id)arg0 withAccount:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 handler:(id)arg4 ;
-(void)signURLRequest:(id)arg0 withAccount:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 handler:(id)arg4 ;


@end


#endif