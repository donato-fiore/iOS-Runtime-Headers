// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPIEIMAGEVIEW_H
#define MSPIEIMAGEVIEW_H

@class UIView, UIBezierPath, UIImage;



@interface MSPieImageView : UIView {
    UIBezierPath *_clipPath;
}


@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIImage *foregroundImage; // ivar: _foregroundImage
@property (nonatomic) CGFloat pieFraction; // ivar: _pieFraction
@property (nonatomic) CGFloat pieRadius; // ivar: _pieRadius


-(void)_reloadClipPath;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sizeToFit;


@end


#endif