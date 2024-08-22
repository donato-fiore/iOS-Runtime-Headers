// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IDSREALTIMEENCRYPTIONPROXY_H
#define _IDSREALTIMEENCRYPTIONPROXY_H

@class NSString, CUTWeakReference;
@protocol IDSDaemonListenerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _IDSRealTimeEncryptionProxy : NSObject <IDSDaemonListenerProtocol>

 {
    NSString *_uniqueID;
    NSString *_accountID;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccount:(id)arg0 ;
-(void)dealloc;
-(void)requestMasterKeyMaterialForGroup:(id)arg0 ;
-(void)requestPublicKeys;
-(void)resetKeysForGroup:(id)arg0 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg0 ;
-(void)sendMasterKeyMaterialToGroup:(id)arg0 ;
-(void)sendPrekeyToGroup:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)xpcObject:(id)arg0 objectContext:(id)arg1 ;


@end


#endif