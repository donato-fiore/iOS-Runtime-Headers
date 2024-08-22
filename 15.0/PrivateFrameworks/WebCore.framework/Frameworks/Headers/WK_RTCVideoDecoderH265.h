// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WK_RTCVIDEODECODERH265_H
#define WK_RTCVIDEODECODERH265_H

@class NSString;
@protocol RTCVideoDecoder;

#import <Foundation/Foundation.h>


@interface WK_RTCVideoDecoderH265 : NSObject <RTCVideoDecoder>

 {
    *opaqueCMFormatDescription _videoFormat;
    *OpaqueVTDecompressionSession _decompressionSession;
    id *_callback;
    int _error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)decode:(id)arg0 missingFrames:(BOOL)arg1 codecSpecificInfo:(id)arg2 renderTimeMs:(NSInteger)arg3 ;
-(NSInteger)decodeData:(char *)arg0 size:(NSUInteger)arg1 timeStamp:(unsigned int)arg2 ;
-(NSInteger)releaseDecoder;
-(NSInteger)startDecodeWithNumberOfCores:(int)arg0 ;
-(id)implementationName;
-(id)init;
-(int)resetDecompressionSession;
-(void)configureDecompressionSession;
-(void)dealloc;
-(void)destroyDecompressionSession;
-(void)setCallback:(id)arg0 ;
-(void)setError:(int)arg0 ;
-(void)setVideoFormat:(struct opaqueCMFormatDescription *)arg0 ;


@end


#endif