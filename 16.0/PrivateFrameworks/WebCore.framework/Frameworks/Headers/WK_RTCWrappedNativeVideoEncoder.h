// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WK_RTCWRAPPEDNATIVEVIDEOENCODER_H
#define WK_RTCWRAPPEDNATIVEVIDEOENCODER_H

@class NSString;
@protocol RTCVideoEncoder;

#import <Foundation/Foundation.h>


@interface WK_RTCWrappedNativeVideoEncoder : NSObject <RTCVideoEncoder>

 {
    unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> _wrappedEncoder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)encode:(id)arg0 codecSpecificInfo:(id)arg1 frameTypes:(id)arg2 ;
-(NSInteger)releaseEncoder;
-(NSInteger)startEncodeWithSettings:(id)arg0 numberOfCores:(int)arg1 ;
-(id)implementationName;
-(id)initWithNativeEncoder:(struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> )arg0 ;
-(id)scalingSettings;
-(int)setBitrate:(unsigned int)arg0 framerate:(unsigned int)arg1 ;
-(struct unique_ptr<webrtc::VideoEncoder, std::default_delete<webrtc::VideoEncoder>> )releaseWrappedEncoder;
-(void)setCallback:(id)arg0 ;


@end


#endif