// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFBASE64MERCURYCODEC_H
#define PFBASE64MERCURYCODEC_H



#import "PFBase64Codec.h"

@interface PFBase64MercuryCodec : PFBase64Codec



+(BOOL)appendPadding;
+(BOOL)checkTerminators:(NSInteger)arg0 expected:(NSInteger)arg1 ;
+(NSUInteger)encodedUuidLength;
+(char *)alphabet;
+(char *)decoder;


@end


#endif