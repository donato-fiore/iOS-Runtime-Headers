// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOFRAMEWRITERELEMENT_H
#define VIDEOFRAMEWRITERELEMENT_H


#import <Foundation/Foundation.h>


@interface VideoFrameWriterElement : NSObject

@property (nonatomic) NSInteger frameNumber; // ivar: _frameNumber
@property (nonatomic) ? frameTime; // ivar: _frameTime
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


-(void)DeallocPixBuffer;
-(void)dealloc;


@end


#endif