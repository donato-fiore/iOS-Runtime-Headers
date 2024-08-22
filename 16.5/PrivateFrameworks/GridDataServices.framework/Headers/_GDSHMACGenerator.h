// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSHMACGENERATOR_H
#define _GDSHMACGENERATOR_H


#import <Foundation/Foundation.h>


@interface _GDSHMACGenerator : NSObject



+(id)HMACSignedRequest:(id)arg0 secret:(id)arg1 secretVersion:(id)arg2 ;
+(id)HMAC_SHA256Digest:(id)arg0 key:(id)arg1 ;
+(id)SHA256_HashStringFromData:(id)arg0 ;
+(id)bucketedEpochTimeStamp;
+(id)encodeStringToBase64:(id)arg0 ;
+(id)generateURLRequest:(id)arg0 secretVersion:(id)arg1 signature:(id)arg2 content:(id)arg3 timestamp:(id)arg4 ;


@end


#endif