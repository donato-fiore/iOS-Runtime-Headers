// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPIXELBUFFERVIEW_H
#define PXPIXELBUFFERVIEW_H

@class UIView;



@interface PXPixelBufferView : UIView



+(Class)layerClass;
-(id)imageQueueLayer;
-(void)didMoveToWindow;
-(void)enqueuePixelBuffer:(struct __CVBuffer *)arg0 ;


@end


#endif