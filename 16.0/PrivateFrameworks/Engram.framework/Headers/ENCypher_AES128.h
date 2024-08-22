// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENCYPHER_AES128_H
#define ENCYPHER_AES128_H

@class NSString, NSData;
@protocol ENCypher;

#import <Foundation/Foundation.h>


@interface ENCypher_AES128 : NSObject <ENCypher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *key; // ivar: _key
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_decryptData:(id)arg0 withKey:(id)arg1 ;
+(id)_encryptData:(id)arg0 withKey:(id)arg1 ;
+(id)_randomDataWithLength:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)cypherData:(id)arg0 withAccountIdentity:(id)arg1 identifier:(*id)arg2 error:(*id)arg3 ;
-(id)decypherData:(id)arg0 withAccountIdentity:(id)arg1 signingDevicePublicKey:(id)arg2 identifier:(id)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithRandomKey;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif