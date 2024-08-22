// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPEERPERMANENTINFO_H
#define TPPEERPERMANENTINFO_H

@class NSData, NSString;
@protocol TPPublicKey;

#import <Foundation/Foundation.h>


@interface TPPeerPermanentInfo : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSObject<TPPublicKey> *encryptionPubKey; // ivar: _encryptionPubKey
@property (readonly, nonatomic) NSUInteger epoch; // ivar: _epoch
@property (readonly, nonatomic) NSString *machineID; // ivar: _machineID
@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSString *peerID; // ivar: _peerID
@property (readonly, nonatomic) NSData *sig; // ivar: _sig
@property (readonly, nonatomic) NSObject<TPPublicKey> *signingPubKey; // ivar: _signingPubKey


+(id)peerIDForData:(id)arg0 sig:(id)arg1 peerIDHashAlgo:(NSInteger)arg2 ;
+(id)permanentInfoWithMachineID:(id)arg0 modelID:(id)arg1 epoch:(NSUInteger)arg2 signingKeyPair:(id)arg3 encryptionKeyPair:(id)arg4 peerIDHashAlgo:(NSInteger)arg5 error:(*id)arg6 ;
+(id)permanentInfoWithPeerID:(id)arg0 data:(id)arg1 sig:(id)arg2 keyFactory:(id)arg3 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithMachineID:(id)arg0 modelID:(id)arg1 epoch:(NSUInteger)arg2 signingPubKey:(id)arg3 encryptionPubKey:(id)arg4 data:(id)arg5 sig:(id)arg6 peerID:(id)arg7 ;


@end


#endif