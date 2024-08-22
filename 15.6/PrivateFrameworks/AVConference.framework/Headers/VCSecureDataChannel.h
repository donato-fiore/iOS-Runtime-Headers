// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSECUREDATACHANNEL_H
#define VCSECUREDATACHANNEL_H

@protocol VCSecureDataChannelDelegate;

#import <Foundation/Foundation.h>

#import "VCTransport.h"

@interface VCSecureDataChannel : NSObject {
    unsigned int _localCallID;
    unsigned int _remoteCallID;
    *_tls_record_s tlsRecord;
    id *_delegate;
    VCTransport *_transport;
}


@property (nonatomic) NSObject<VCSecureDataChannelDelegate> *delegate;
@property (readonly, nonatomic) NSInteger maxEncryptedDataSize;
@property (nonatomic) NSUInteger maxUDPPayloadSize; // ivar: _maxUDPPayloadSize
@property (readonly, nonatomic) NSInteger maxUnencryptedDataSize;


-(id)initWithLocalCallID:(unsigned int)arg0 remoteCallID:(unsigned int)arg1 isCaller:(BOOL)arg2 sharedSecret:(id)arg3 error:(*id)arg4 ;
-(int)convertData:(id)arg0 toEncryptedData:(*id)arg1 encrypted:(BOOL)arg2 ;
-(int)convertEncryptedData:(id)arg0 toData:(*id)arg1 encrypted:(BOOL)arg2 ;
-(int)sendData:(id)arg0 messageType:(unsigned int)arg1 encrypted:(BOOL)arg2 ;
-(int)setupWithSharedSecret:(id)arg0 isCaller:(BOOL)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif