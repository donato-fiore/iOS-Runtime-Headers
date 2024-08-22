// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYLOGENTRYVERIFIER_H
#define TRANSPARENCYLOGENTRYVERIFIER_H


#import <Foundation/Foundation.h>

#import "TransparencyTrustedKeyStore.h"

@interface TransparencyLogEntryVerifier : NSObject

@property (retain) TransparencyTrustedKeyStore *trustedKeyStore; // ivar: _trustedKeyStore


-(BOOL)verifyInclusionOfLogLeaf:(id)arg0 position:(NSUInteger)arg1 treeSize:(NSUInteger)arg2 treeHead:(id)arg3 hashPath:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)verifyLogEntryWithLogLeaf:(id)arg0 position:(NSUInteger)arg1 hashesToRoot:(id)arg2 signedLogHead:(id)arg3 error:(*id)arg4 ;
-(id)initWithTrustedKeyStore:(id)arg0 ;


@end


#endif