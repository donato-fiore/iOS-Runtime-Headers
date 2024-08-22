// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WK_RTCENCODEDIMAGE_H
#define WK_RTCENCODEDIMAGE_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface WK_RTCEncodedImage : NSObject

@property (retain, nonatomic) NSData *buffer; // ivar: _buffer
@property (nonatomic) NSInteger captureTimeMs; // ivar: _captureTimeMs
@property (nonatomic) BOOL completeFrame; // ivar: _completeFrame
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (nonatomic) NSInteger encodeFinishMs; // ivar: _encodeFinishMs
@property (nonatomic) NSInteger encodeStartMs; // ivar: _encodeStartMs
@property (nonatomic) int encodedHeight; // ivar: _encodedHeight
@property (nonatomic) int encodedWidth; // ivar: _encodedWidth
@property (nonatomic) unsigned char flags; // ivar: _flags
@property (nonatomic) NSUInteger frameType; // ivar: _frameType
@property (nonatomic) NSInteger ntpTimeMs; // ivar: _ntpTimeMs
@property (retain, nonatomic) NSNumber *qp; // ivar: _qp
@property (nonatomic) NSInteger rotation; // ivar: _rotation
@property (nonatomic) unsigned int timeStamp; // ivar: _timeStamp


-(id)initWithNativeEncodedImage:(*void)arg0 ;
-(struct EncodedImage )nativeEncodedImage;
-(struct scoped_refptr<webrtc::EncodedImageBufferInterface> )encodedData;
-(void)setEncodedData:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> )arg0 ;


@end


#endif