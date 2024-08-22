// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16CRYPTOKITPRIVATE18ALISHASPAKE2PROVER_H
#define _TTC16CRYPTOKITPRIVATE18ALISHASPAKE2PROVER_H


#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate18AlishaSPAKE2Prover : NSObject {
    ? spakeCtxData;
    ? aad;
    ? X;
    ? z0_self;
    ? z1_self;
}




-(id)getX;
-(id)init;
-(id)initWithPassword:(id)arg0 salt:(id)arg1 authenticatedData:(id)arg2 keyDerivationCost:(NSUInteger)arg3 ;
-(id)processResponseWithY:(id)arg0 M1:(id)arg1 ;


@end


#endif