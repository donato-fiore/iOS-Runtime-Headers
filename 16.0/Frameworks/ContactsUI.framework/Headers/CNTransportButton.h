// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTRANSPORTBUTTON_H
#define CNTRANSPORTBUTTON_H

@class UIButton, UIColor, UIImage;



@interface CNTransportButton : UIButton

@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL showBackgroundPlatter; // ivar: _showBackgroundPlatter
@property (nonatomic) NSInteger transportType; // ivar: _transportType


+(id)transportButton;
+(id)transportButtonWithType:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateImageWithType:(NSInteger)arg0 ;
-(void)_updateTouchInsetsToFillContainerWithSize:(struct CGSize )arg0 ;
-(void)tintColorDidChange;


@end


#endif