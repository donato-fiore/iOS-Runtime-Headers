// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PKCHECKERGRIDVIEW_H
#define _PKCHECKERGRIDVIEW_H

@class UIView, UIColor, UIImageView;



@interface _PKCheckerGridView : UIView

@property (retain, nonatomic) UIColor *colorA; // ivar: _colorA
@property (retain, nonatomic) UIColor *colorB; // ivar: _colorB
@property (nonatomic) CGFloat gridSize; // ivar: _gridSize
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)gridTileImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif