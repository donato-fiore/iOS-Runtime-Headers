// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSREALTIMEENCRYPTIONPROXY_H
#define IDSREALTIMEENCRYPTIONPROXY_H


#import <Foundation/Foundation.h>

#import "_IDSRealTimeEncryptionProxy.h"

@interface IDSRealTimeEncryptionProxy : NSObject {
    _IDSRealTimeEncryptionProxy *_internal;
}




-(id)initWithAccount:(id)arg0 ;
-(void)dealloc;
-(void)requestMasterKeyMaterialForGroup:(id)arg0 ;
-(void)requestPublicKeys;
-(void)resetKeysForGroup:(id)arg0 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg0 ;
-(void)sendMasterKeyMaterialToGroup:(id)arg0 ;
-(void)sendPrekeyToGroup:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif