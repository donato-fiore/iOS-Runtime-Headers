// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSHOMEKITMANAGER_H
#define IDSHOMEKITMANAGER_H

@class NSString;
@protocol IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>

#import "_IDSGenericCompletionHandler.h"

@interface IDSHomeKitManager : NSObject <IDSDaemonListenerProtocol>

 {
    _IDSGenericCompletionHandler *_getServiceUserIDsCompletion;
    _IDSGenericCompletionHandler *_getAdminAccessTokensCompletion;
    _IDSGenericCompletionHandler *_getConsentTokensCompletion;
    _IDSGenericCompletionHandler *_getUserAccessTokensCompletion;
    _IDSGenericCompletionHandler *_refreshUserAccessTokensCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)adminAccessTokens:(id)arg0 error:(id)arg1 ;
-(void)consentTokens:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
// -(void)getAdminAccessTokensWithWithServiceUserID:(id)arg0 accessoryID:(id)arg1 pairingToken:(id)arg2 completionBlock:(id)arg3 queue:(unk)arg4  ;
// -(void)getConsentTokensWithServiceUserID:(id)arg0 accessoryIDs:(id)arg1 adminID:(id)arg2 completionBlock:(id)arg3 queue:(unk)arg4  ;
// -(void)getServiceUserIDsWithCompletionBlock:(id)arg0 queue:(unk)arg1  ;
// -(void)getUserAccessTokensWithServiceUserID:(id)arg0 userID:(id)arg1 userHandle:(id)arg2 accessoryRequests:(id)arg3 completionBlock:(id)arg4 queue:(unk)arg5  ;
-(void)refreshUserAccessTokens:(id)arg0 error:(id)arg1 ;
// -(void)refreshUserAccessTokensWithServiceUserID:(id)arg0 userID:(id)arg1 accessoryRequests:(id)arg2 completionBlock:(id)arg3 queue:(unk)arg4  ;
-(void)serviceUserIDs:(id)arg0 error:(id)arg1 ;
-(void)userAccessTokens:(id)arg0 error:(id)arg1 ;


@end


#endif