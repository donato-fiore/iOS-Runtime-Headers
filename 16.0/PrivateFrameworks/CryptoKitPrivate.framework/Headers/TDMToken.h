// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDMTOKEN_H
#define TDMTOKEN_H


#import <Foundation/Foundation.h>

#import "_TtC16CryptoKitPrivate9TDMClient.h"

@interface TDMToken : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate9TDMClient *tdmClient; // ivar: _tdmClient


-(id)blindedElement;
-(id)finalizeWithEvaluatedElement:(id)arg0 proof:(id)arg1 publicKey:(id)arg2 fsr:(id)arg3 error:(*id)arg4 ;
-(id)initWithTID:(id)arg0 ;


@end


#endif