// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLVIDEOPOSTERFRAMEVIEW_H
#define PLVIDEOPOSTERFRAMEVIEW_H

@class UIView, UIImageView;



@interface PLVideoPosterFrameView : UIView {
    UIImageView *_imageView;
    NSInteger _scaleMode;
}


@property (readonly, nonatomic) CGRect imageFrame;


-(id)image;
-(id)imageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setScaleMode:(NSInteger)arg0 ;


@end


#endif