// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYSIGNATUREVERIFIER_H
#define TRANSPARENCYSIGNATUREVERIFIER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TransparencySignatureVerifier : NSObject

@property BOOL needsRefresh; // ivar: _needsRefresh
@property (retain) NSDictionary *trustedKeys; // ivar: _trustedKeys


+(BOOL)verifyMessage:(id)arg0 signature:(id)arg1 spkiHash:(id)arg2 trustedKeys:(id)arg3 algorithm:(struct __CFString *)arg4 error:(*id)arg5 ;
+(int)protoAlgorithmForSecKeyAlgorithm:(struct __CFString *)arg0 ;
+(struct __CFString *)secKeyAlgorithmForProtoAlgorithm:(int)arg0 ;
-(BOOL)verifyMessage:(id)arg0 signature:(id)arg1 spkiHash:(id)arg2 algorithm:(struct __CFString *)arg3 error:(*id)arg4 ;
-(id)initWithTrustedKeys:(id)arg0 ;


@end


#endif