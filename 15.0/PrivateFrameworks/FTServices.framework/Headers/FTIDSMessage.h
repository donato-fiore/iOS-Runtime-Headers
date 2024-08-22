// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTIDSMESSAGE_H
#define FTIDSMESSAGE_H

@class IDSBaseMessage, NSNumber, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface FTIDSMessage : IDSBaseMessage <NSCopying>

 {
    NSNumber *_serverTimestamp;
    NSNumber *_serverTimestampReceivedDate;
}


@property (copy, nonatomic) NSData *IDCertificate; // ivar: _identityCert
@property (copy, nonatomic) NSMutableArray *certDataArray; // ivar: _certDataArray
@property (nonatomic) *__SecKey identityPrivateKey; // ivar: _identityKey
@property (nonatomic) *__SecKey identityPublicKey; // ivar: _identityPublicKey
@property (copy, nonatomic) NSMutableArray *privateKeyArray; // ivar: _privateKeyArray
@property (copy, nonatomic) NSMutableArray *publicKeyArray; // ivar: _publicKeyArray
@property (copy, nonatomic) NSData *pushCertificate; // ivar: _pushCert
@property (nonatomic) *__SecKey pushPrivateKey; // ivar: _pushKey
@property (nonatomic) *__SecKey pushPublicKey; // ivar: _pushPublicKey
@property (copy, nonatomic) NSData *pushToken; // ivar: _pushToken
@property (copy, nonatomic) NSString *selfURI; // ivar: _selfURI
@property (copy, nonatomic) NSMutableArray *userIDArray; // ivar: _userIDArray
@property (readonly) BOOL wantsIDSProtocolVersion;


-(BOOL)wantsBagKey;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsBodySignature;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsIDSServer;
-(BOOL)wantsSignature;
-(NSInteger)command;
-(NSInteger)responseCommand;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retryCountKey;
-(id)serverTimestamp;
-(id)serverTimestampReceivedDate;
-(void)addAuthUserID:(id)arg0 certificate:(id)arg1 privateKey:(struct __SecKey *)arg2 publicKey:(struct __SecKey *)arg3 ;
-(void)dealloc;
-(void)setServerTimestamp:(id)arg0 ;
-(void)setServerTimestampReceivedDate:(id)arg0 ;


@end


#endif