// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCVIDEOFRAME_H
#define AVCVIDEOFRAME_H

@class NSData;

#import <Foundation/Foundation.h>


@interface AVCVideoFrame : NSObject {
    id *_delegate;
}


@property (nonatomic) *__CVBuffer depthPixelBuffer; // ivar: _depthPixelBuffer
@property (retain) NSData *effectsMetadata; // ivar: _effectsMetadata
@property (retain) NSData *imageData; // ivar: _imageData
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property float renderProcessTime; // ivar: _renderProcessTime
@property ? time; // ivar: _time


-(id)delegate;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 depthPixelBuffer:(struct __CVBuffer *)arg1 time:(struct ? )arg2 imageData:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 time:(struct ? )arg1 imageData:(id)arg2 ;
-(void)dealloc;


@end


#endif