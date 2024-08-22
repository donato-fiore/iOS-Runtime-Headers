// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECKEYP256PRIVATE_H
#define SECKEYP256PRIVATE_H

@class NSString, NSData;
@protocol P256PrivateKeyProtocol;

#import <Foundation/Foundation.h>

#import "SecKeyP256Public.h"

@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *privateKey; // ivar: _privateKey
@property (readonly, nonatomic) NSData *privateKeyBlob; // ivar: _privateKeyBlob
@property (retain, nonatomic) SecKeyP256Public *publicKey; // ivar: _publicKey
@property (readonly) Class superclass;


+(id)generate;
+(id)generateWithAccessControl:(struct __CFString *)arg0 ;
+(struct __CFString *)defaultProtectionClassForPlatform;
-(id)getPrivateKeyRefWithError:(*id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)keyAgreement:(id)arg0 error:(*id)arg1 ;
-(id)keyAgreement:(id)arg0 error:(*id)arg1 isRetry:(BOOL)arg2 ;
-(id)keychainData;
-(id)signData:(id)arg0 error:(*id)arg1 ;


@end


#endif