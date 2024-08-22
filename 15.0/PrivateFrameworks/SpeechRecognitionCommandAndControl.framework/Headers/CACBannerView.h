// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACBANNERVIEW_H
#define CACBANNERVIEW_H

@class UIView, UIImageView, NSAttributedString, NSLayoutConstraint, NSString, UILabel;



@interface CACBannerView : UIView

@property (retain, nonatomic) UIImageView *accessoryImageView; // ivar: _accessoryImageView
@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIView *baseView; // ivar: _baseView
@property (retain, nonatomic) NSLayoutConstraint *imageToTextConstraint; // ivar: _imageToTextConstraint
@property (retain, nonatomic) NSString *symbolImage; // ivar: _symbolImage
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif