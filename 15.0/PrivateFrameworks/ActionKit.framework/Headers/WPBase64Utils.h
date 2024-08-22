// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPBASE64UTILS_H
#define WPBASE64UTILS_H


#import <Foundation/Foundation.h>


@interface WPBase64Utils : NSObject



+(id)decodeString:(id)arg0 ;
+(id)encodeData:(id)arg0 ;
+(void)encodeFileHandle:(id)arg0 withChunkHandler:(id)arg1 ;
+(void)encodeInputStream:(id)arg0 withChunkHandler:(id)arg1 ;


@end


#endif