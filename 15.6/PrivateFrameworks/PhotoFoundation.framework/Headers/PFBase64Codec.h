// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFBASE64CODEC_H
#define PFBASE64CODEC_H


#import <Foundation/Foundation.h>


@interface PFBase64Codec : NSObject



+(BOOL)appendPadding;
+(BOOL)checkTerminators:(NSInteger)arg0 expected:(NSInteger)arg1 ;
+(BOOL)decodeString:(id)arg0 with:(id)arg1 ;
+(NSUInteger)encodedUuidLength;
+(char *)alphabet;
+(char *)decoder;
+(id)decodeString:(id)arg0 ;
+(id)decodeUuid:(id)arg0 ;
+(id)encodeBytes:(*void)arg0 withLength:(NSUInteger)arg1 ;
+(id)encodeData:(id)arg0 ;
+(id)encodeUuid:(id)arg0 ;
-(id)init;


@end


#endif