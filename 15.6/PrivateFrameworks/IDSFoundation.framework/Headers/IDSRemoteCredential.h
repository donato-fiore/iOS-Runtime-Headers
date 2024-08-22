// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSREMOTECREDENTIAL_H
#define IDSREMOTECREDENTIAL_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IDSRemoteCredential : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
}


@property (nonatomic) BOOL wantsRetries; // ivar: _wantsRetries


-(BOOL)_connect;
-(BOOL)_disconnect;
-(void)_disconnected;
-(void)_sendMessage:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)dealloc;
-(void)fetchRemoteAccountsOfServiceTypes:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id)arg0 ;
-(void)requestIDStatusForURIs:(id)arg0 service:(id)arg1 lightQuery:(BOOL)arg2 allowQuery:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)sendAccountSyncMessage:(id)arg0 messageID:(id)arg1 queueOneIdentifier:(id)arg2 allowCloudFallback:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id)arg0 ;


@end


#endif