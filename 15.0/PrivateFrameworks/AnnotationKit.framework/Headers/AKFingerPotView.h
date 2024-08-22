// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKFINGERPOTVIEW_H
#define AKFINGERPOTVIEW_H

@class UIButton, UIImageView, UIImage;



@interface AKFingerPotView : UIButton

@property (retain, nonatomic) UIImageView *highlight; // ivar: _highlight
@property (retain, nonatomic) UIImage *menuImage;
@property (retain, nonatomic) UIImageView *selectedOutline; // ivar: _selectedOutline


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif