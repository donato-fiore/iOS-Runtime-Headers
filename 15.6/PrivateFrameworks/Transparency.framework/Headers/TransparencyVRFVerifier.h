// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYVRFVERIFIER_H
#define TRANSPARENCYVRFVERIFIER_H


#import <Foundation/Foundation.h>

#import "VRFPublicKey.h"

@interface TransparencyVRFVerifier : NSObject

@property (retain) VRFPublicKey *key; // ivar: _key
@property (readonly) int vrfType;


+(BOOL)verifyMessage:(id)arg0 output:(id)arg1 proof:(id)arg2 key:(id)arg3 error:(*id)arg4 ;
+(BOOL)verifyMessage:(id)arg0 salt:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(*id)arg5 ;
+(id)saltMessage:(id)arg0 salt:(id)arg1 ;
+(id)verifierOfType:(int)arg0 key:(id)arg1 ;
-(BOOL)verifyMessage:(id)arg0 output:(id)arg1 proof:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyMessage:(id)arg0 salt:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(*id)arg4 ;
-(id)initWithKey:(id)arg0 ;


@end


#endif