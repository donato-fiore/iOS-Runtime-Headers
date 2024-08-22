// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17MESSAGEPROTECTION13GFTKEYWRAPPER_H
#define _TTC17MESSAGEPROTECTION13GFTKEYWRAPPER_H


#import <Foundation/Foundation.h>


@interface _TtC17MessageProtection13GFTKeyWrapper : NSObject



+(id)unwrapWrappedSeed:(id)arg0 legacy:(BOOL)arg1 using:(struct __SecKey *)arg2 error:(*id)arg3 ;
+(id)wrapSeed:(id)arg0 to:(id)arg1 legacy:(BOOL)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif