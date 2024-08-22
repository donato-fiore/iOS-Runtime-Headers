// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEODECODER_H
#define VCVIDEODECODER_H


#import <Foundation/Foundation.h>


@interface VCVideoDecoder : NSObject {
    NSInteger _streamToken;
    *tagHANDLE _videoPlayerHandle;
    int _clientCount;
}


@property (readonly) *tagHANDLE videoPlayerHandle;


+(?)decoderForStreamTokenwithConfig;
+(id)streamTokenDecoderMap;
+(void)releaseVideoDecoderForStreamToken:(NSInteger)arg0 ;
-(id)initWithConfig:(struct tagVideoDecoderConfig *)arg0 ;
-(void)dealloc;


@end


#endif