// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMAGEQUEUELAYER_H
#define PXIMAGEQUEUELAYER_H

@class CALayer;



@interface PXImageQueueLayer : CALayer {
    *_CAImageQueue _imageQueue;
    *__CVBuffer _pixelBuffer;
    NSUInteger _pixelBufferId;
}


@property (nonatomic) *__CVBuffer pixelBuffer;


-(id)init;
-(void)dealloc;


@end


#endif