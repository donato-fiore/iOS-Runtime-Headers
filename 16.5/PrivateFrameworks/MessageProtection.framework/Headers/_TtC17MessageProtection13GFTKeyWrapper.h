// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MESSAGEPROTECTION13GFTKEYWRAPPER_H
#define _TTC17MESSAGEPROTECTION13GFTKEYWRAPPER_H


#import <Foundation/Foundation.h>


@interface _TtC17MessageProtection13GFTKeyWrapper : NSObject



+(id)decrypt:(id)arg0 using:(struct __SecKey *)arg1 error:(*id)arg2 ;
+(id)encrypt:(id)arg0 to:(struct __SecKey *)arg1 error:(*id)arg2 ;
+(id)unwrapWrappedSeed:(id)arg0 legacy:(BOOL)arg1 using:(struct __SecKey *)arg2 error:(*id)arg3 ;
+(id)wrapSeed:(id)arg0 to:(id)arg1 legacy:(BOOL)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif