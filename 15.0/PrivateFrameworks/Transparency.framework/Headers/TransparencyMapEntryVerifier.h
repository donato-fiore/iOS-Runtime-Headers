// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYMAPENTRYVERIFIER_H
#define TRANSPARENCYMAPENTRYVERIFIER_H

@class NSData;

#import <Foundation/Foundation.h>

#import "TransparencyTrustedKeyStore.h"

@interface TransparencyMapEntryVerifier : NSObject

@property (retain) NSData *entryPosition; // ivar: _entryPosition
@property (retain) TransparencyTrustedKeyStore *trustedKeyStore; // ivar: _trustedKeyStore


+(id)emptyAtDepth:(NSUInteger)arg0 leafIndex:(id)arg1 treeId:(NSUInteger)arg2 ;
+(id)interiorNodeForLeftData:(id)arg0 rightData:(id)arg1 ;
+(id)leafHash:(id)arg0 index:(id)arg1 treeId:(NSUInteger)arg2 ;
+(id)peerIndexAtDepth:(NSUInteger)arg0 leafIndex:(id)arg1 ;
-(BOOL)verifyInclusionOfMapLeaf:(id)arg0 position:(id)arg1 treeHead:(id)arg2 treeId:(NSUInteger)arg3 hashPath:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)verifyMapEntryWithMapLeaf:(id)arg0 hashesToRoot:(id)arg1 signedMapHead:(id)arg2 error:(*id)arg3 ;
-(id)initWithPositon:(id)arg0 trustedKeyStore:(id)arg1 ;
-(void)storeSMHSignatureFailure:(NSUInteger)arg0 smh:(id)arg1 error:(*id)arg2 ;


@end


#endif