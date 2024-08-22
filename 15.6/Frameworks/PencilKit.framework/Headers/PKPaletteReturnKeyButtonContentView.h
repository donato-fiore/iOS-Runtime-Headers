// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTERETURNKEYBUTTONCONTENTVIEW_H
#define PKPALETTERETURNKEYBUTTONCONTENTVIEW_H

@class UIView, UIStackView, TUICandidateLabel, NSLayoutConstraint, UIImageView, NSString, UIColor;



@interface PKPaletteReturnKeyButtonContentView : UIView {
    UIStackView *_stackView;
    TUICandidateLabel *_label;
    NSLayoutConstraint *_labelHeightConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
}


@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL useCompactLayout; // ivar: _useCompactLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateUI;


@end


#endif