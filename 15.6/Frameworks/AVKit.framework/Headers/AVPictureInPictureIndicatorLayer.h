// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPICTUREINPICTUREINDICATORLAYER_H
#define AVPICTUREINPICTUREINDICATORLAYER_H

@class CALayer, NSString;


#import "AVPictureInPictureIndicatorSublayer.h"

@interface AVPictureInPictureIndicatorLayer : CALayer

@property (readonly, nonatomic) AVPictureInPictureIndicatorSublayer *contentLayer; // ivar: _contentLayer
@property (copy, nonatomic) NSString *customText;
@property (readonly, nonatomic) CGRect videoRectWhenPIPBegan; // ivar: _videoRectWhenPIPBegan


-(id)init;
-(id)initWithDisplayScale:(CGFloat)arg0 placeholderImage:(struct CGImage *)arg1 opaque:(BOOL)arg2 videoRectWhenPIPBegan:(struct CGRect )arg3 ;
-(void)layoutSublayers;


@end


#endif