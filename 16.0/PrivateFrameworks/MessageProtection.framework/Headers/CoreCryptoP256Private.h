// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CORECRYPTOP256PRIVATE_H
#define CORECRYPTOP256PRIVATE_H

@class NSString;
@protocol P256PrivateKeyProtocol;

#import <Foundation/Foundation.h>


@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property *ccec_full_ctx full_key; // ivar: _full_key
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)generate;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithKey:(struct ccec_full_ctx *)arg0 ;
-(id)keyAgreement:(id)arg0 error:(*id)arg1 ;
-(id)keychainData;
-(id)publicKey;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif