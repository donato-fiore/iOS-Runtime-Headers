// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16CRYPTOKITPRIVATE6SCRYPT_H
#define _TTC16CRYPTOKITPRIVATE6SCRYPT_H


#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate6Scrypt : NSObject



+(id)deriveKeyWithPassword:(id)arg0 salt:(id)arg1 outputSize:(NSInteger)arg2 cost:(NSUInteger)arg3 blockSize:(unsigned int)arg4 parallelization:(unsigned int)arg5 ;
-(id)init;


@end


#endif