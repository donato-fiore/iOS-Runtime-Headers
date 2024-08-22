// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCIPHERV2_H
#define ICCIPHERV2_H


#import <Foundation/Foundation.h>


@interface ICCipherV2 : NSObject



+(NSInteger)ICCryptoWrappedKeyLengthV2;
+(id)concatenateCipherData:(id)arg0 initializationVector:(id)arg1 tag:(id)arg2 ;
+(id)ic_decrypt:(id)arg0 withCipherKey:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(*id)arg3 ;
+(id)ic_encrypt:(id)arg0 withCipherKey:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(*id)arg3 ;
+(id)ic_unwrap:(id)arg0 withWrapper:(id)arg1 error:(*id)arg2 ;
+(id)ic_wrap:(id)arg0 withWrapper:(id)arg1 error:(*id)arg2 ;
+(void)getParsedCipherData:(*id)arg0 initializationVector:(*id)arg1 tag:(*id)arg2 fromData:(id)arg3 ;


@end


#endif