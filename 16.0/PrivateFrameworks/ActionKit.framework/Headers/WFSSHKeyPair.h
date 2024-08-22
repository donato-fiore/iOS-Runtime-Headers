// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSSHKEYPAIR_H
#define WFSSHKEYPAIR_H

@class NSString, NSNumber, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSSHKeyPair : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *comment; // ivar: _comment
@property (retain, nonatomic) Class format; // ivar: _format
@property (readonly, nonatomic) NSNumber *keySize; // ivar: _keySize
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedType;
@property (readonly, nonatomic) NSData *privateKeyData; // ivar: _privateKeyData
@property (readonly, nonatomic) NSData *publicKeyData; // ivar: _publicKeyData


+(BOOL)parsePublicKey:(id)arg0 type:(*id)arg1 data:(*id)arg2 comment:(*id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)defaultKeyComment;
+(id)keyFormats;
+(id)keyPairFromPrivateKey:(id)arg0 comment:(id)arg1 error:(*id)arg2 ;
+(id)knownHostFileURL;
+(id)sharedKeyPair;
+(void)setSharedKeyPair:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(Class)arg0 privateKeyData:(id)arg1 publicKeyData:(id)arg2 keySize:(id)arg3 comment:(id)arg4 ;
-(id)privateKeyPEM;
-(id)publicKey;
-(id)publicKeyFingerprintWithType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif