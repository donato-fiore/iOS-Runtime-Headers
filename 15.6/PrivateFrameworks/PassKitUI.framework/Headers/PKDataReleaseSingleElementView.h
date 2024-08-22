// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDATARELEASESINGLEELEMENTVIEW_H
#define PKDATARELEASESINGLEELEMENTVIEW_H

@class UIView, UILabel, UIImageView;



@interface PKDataReleaseSingleElementView : UIView {
    UILabel *_titleLabel;
    UIImageView *_imageView;
    BOOL _isTemplateLayout;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 image:(id)arg1 ;


@end


#endif