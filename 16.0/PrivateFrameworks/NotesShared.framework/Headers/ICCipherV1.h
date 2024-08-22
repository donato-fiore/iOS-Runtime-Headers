// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCIPHERV1_H
#define ICCIPHERV1_H


#import <Foundation/Foundation.h>


@interface ICCipherV1 : NSObject



+(id)ic_decrypt:(id)arg0 withKey:(id)arg1 tag:(id)arg2 initialVector:(id)arg3 error:(*id)arg4 ;
+(id)ic_encrypt:(id)arg0 withKey:(id)arg1 tag:(*id)arg2 initialVector:(*id)arg3 error:(*id)arg4 ;
+(id)ic_keyWithUserPassphrase:(id)arg0 salt:(id)arg1 iterationCount:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)ic_unwrap:(id)arg0 withWrapper:(id)arg1 error:(*id)arg2 ;
+(id)ic_wrap:(id)arg0 withWrapper:(id)arg1 error:(*id)arg2 ;


@end


#endif