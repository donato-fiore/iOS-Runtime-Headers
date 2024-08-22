// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WK_RTCI420BUFFER_H
#define WK_RTCI420BUFFER_H

@class NSString;
@protocol RTCI420Buffer;

#import <Foundation/Foundation.h>


@interface WK_RTCI420Buffer : NSObject <RTCI420Buffer>

 {
    scoped_refptr<webrtc::I420BufferInterface> _i420Buffer;
}


@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) char * dataU;
@property (readonly, nonatomic) char * dataV;
@property (readonly, nonatomic) char * dataY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int strideY;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int width;


-(id)initWithFrameBuffer:(struct scoped_refptr<webrtc::I420BufferInterface> )arg0 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 dataY:(char *)arg2 dataU:(char *)arg3 dataV:(char *)arg4 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 strideY:(int)arg2 strideU:(int)arg3 strideV:(int)arg4 ;
-(id)toI420;
-(struct scoped_refptr<webrtc::I420BufferInterface> )nativeI420Buffer;
-(void)close;


@end


#endif