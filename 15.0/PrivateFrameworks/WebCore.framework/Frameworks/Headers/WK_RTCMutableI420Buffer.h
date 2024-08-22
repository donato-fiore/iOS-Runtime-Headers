// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WK_RTCMUTABLEI420BUFFER_H
#define WK_RTCMUTABLEI420BUFFER_H

@class RTCI420Buffer, NSString;
@protocol RTCMutableI420Buffer;



@interface WK_RTCMutableI420Buffer : RTCI420Buffer <RTCMutableI420Buffer>



@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) char * dataU;
@property (readonly, nonatomic) char * dataV;
@property (readonly, nonatomic) char * dataY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) char * mutableDataU;
@property (readonly, nonatomic) char * mutableDataV;
@property (readonly, nonatomic) char * mutableDataY;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int strideY;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int width;




@end


#endif