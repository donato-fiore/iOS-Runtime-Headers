// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSCHECKMARKVIEW_H
#define BPSCHECKMARKVIEW_H

@class UIView, UIImageView;



@interface BPSCheckMarkView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isChecked; // ivar: _isChecked


-(id)checkedImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)uncheckedImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif