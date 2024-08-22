// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDIMAGELAYER_H
#define CUIPSDIMAGELAYER_H



#import "CUIPSDLayer.h"
#import "CUIImage.h"

@interface CUIPSDImageLayer : CUIPSDLayer {
    CUIImage *_image;
}


@property (readonly, nonatomic) *CGImage cgImageRef;


-(id)initWithCGImageRef:(struct CGImage *)arg0 ;
-(void)dealloc;


@end


#endif