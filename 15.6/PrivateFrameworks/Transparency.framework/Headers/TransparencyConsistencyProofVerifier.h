// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYCONSISTENCYPROOFVERIFIER_H
#define TRANSPARENCYCONSISTENCYPROOFVERIFIER_H


#import <Foundation/Foundation.h>

#import "TransparencyTrustedKeyStore.h"

@interface TransparencyConsistencyProofVerifier : NSObject

@property (retain) TransparencyTrustedKeyStore *trustedKeyStore; // ivar: _trustedKeyStore


-(BOOL)verifyConsistencyProof:(id)arg0 startHash:(id)arg1 startSize:(NSUInteger)arg2 endHash:(id)arg3 endSize:(NSUInteger)arg4 error:(*id)arg5 ;
-(NSUInteger)verifyConsistencyProof:(id)arg0 startLogHead:(id)arg1 endLogHead:(id)arg2 error:(*id)arg3 ;
-(id)initWithTrustedKeyStore:(id)arg0 ;


@end


#endif