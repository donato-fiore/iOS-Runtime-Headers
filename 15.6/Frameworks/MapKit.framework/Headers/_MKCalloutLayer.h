// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKCALLOUTLAYER_H
#define _MKCALLOUTLAYER_H

@class MKResizingLayer, CALayer, UIColor;



@interface _MKCalloutLayer : MKResizingLayer {
    *CGImage _contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
}


@property (nonatomic) CGFloat arrowOffset; // ivar: _arrowOffset
@property (nonatomic) NSInteger arrowPosition; // ivar: _arrowPosition
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) ? metrics; // ivar: _metrics
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


-(id)init;
-(struct CGImage *)_newContentImage;
-(struct CGSize )_contentSize;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setContentsScale:(CGFloat)arg0 ;


@end


#endif