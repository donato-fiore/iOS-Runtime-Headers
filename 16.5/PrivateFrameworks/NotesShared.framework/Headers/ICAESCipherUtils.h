// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAESCIPHERUTILS_H
#define ICAESCIPHERUTILS_H


#import <Foundation/Foundation.h>


@interface ICAESCipherUtils : NSObject



+(id)_ic_decrypt:(id)arg0 withCipherKey:(id)arg1 standardKeyLength:(NSUInteger)arg2 additionalAuthenticatedData:(id)arg3 inputTag:(id)arg4 standardTagLength:(NSUInteger)arg5 inputInitializationVector:(id)arg6 standardInitializationVectorLength:(NSUInteger)arg7 error:(*id)arg8 ;
+(id)_ic_encrypt:(id)arg0 withCipherKey:(id)arg1 standardKeyLength:(NSUInteger)arg2 additionalAuthenticatedData:(id)arg3 outputTag:(*id)arg4 standardTagLength:(NSUInteger)arg5 outputInitializationVector:(*id)arg6 standardInitializationVectorLength:(NSUInteger)arg7 error:(*id)arg8 ;
+(id)_ic_unwrap:(id)arg0 withWrapper:(id)arg1 standardKeyLength:(NSUInteger)arg2 standardWrappedKeyLength:(NSUInteger)arg3 error:(*id)arg4 ;
+(id)_ic_wrap:(id)arg0 withWrapper:(id)arg1 standardKeyLength:(NSUInteger)arg2 standardWrappedKeyLength:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif