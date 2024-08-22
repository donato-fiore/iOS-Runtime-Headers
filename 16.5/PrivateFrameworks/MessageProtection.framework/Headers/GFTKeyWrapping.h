// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GFTKEYWRAPPING_H
#define GFTKEYWRAPPING_H


#import <Foundation/Foundation.h>


@interface GFTKeyWrapping : NSObject



+(id)decrypt:(id)arg0 usingKey:(struct __SecKey *)arg1 error:(*id)arg2 ;
+(id)encrypt:(id)arg0 toKey:(struct __SecKey *)arg1 error:(*id)arg2 ;
+(id)unwrapSeed:(id)arg0 usingKey:(struct __SecKey *)arg1 legacy:(BOOL)arg2 error:(*id)arg3 ;
+(id)wrapSeed:(id)arg0 to:(struct __SecKey *)arg1 legacy:(BOOL)arg2 error:(*id)arg3 ;
+(id)wrapSeed:(id)arg0 toKeys:(id)arg1 error:(*id)arg2 ;


@end


#endif