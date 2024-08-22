// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERSECURETRANSPORTTHREADPAIRED_H
#define HAP2ACCESSORYSERVERSECURETRANSPORTTHREADPAIRED_H



#import "HAP2AccessoryServerSecureTransportPairVerify.h"
#import "HAPSecuritySessionEncryption.h"

@interface HAP2AccessoryServerSecureTransportThreadPaired : HAP2AccessoryServerSecureTransportPairVerify

@property (retain, nonatomic) HAPSecuritySessionEncryption *eventEncryption; // ivar: _eventEncryption


-(id)decryptData:(id)arg0 type:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)securitySessionDidRequestAdditionalDerivedKeyTuples:(id)arg0 ;
-(void)securitySession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg0 ;


@end


#endif