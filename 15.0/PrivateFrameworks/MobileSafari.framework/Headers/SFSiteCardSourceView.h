// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSITECARDSOURCEVIEW_H
#define SFSITECARDSOURCEVIEW_H

@class UIView, UIImageView, UILabel, NSLayoutConstraint, UIImage, NSString;



@interface SFSiteCardSourceView : UIView {
    UIImageView *_imageView;
    UILabel *_label;
    NSLayoutConstraint *_imageBaselineAlignmentConstraint;
    NSLayoutConstraint *_imageCenterAlignmentConstraint;
}


@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *text;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif