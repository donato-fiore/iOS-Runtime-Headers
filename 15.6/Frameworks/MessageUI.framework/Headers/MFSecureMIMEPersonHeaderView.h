// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFSECUREMIMEPERSONHEADERVIEW_H
#define MFSECUREMIMEPERSONHEADERVIEW_H

@class UIView, UILabel, NSArray, NSString;



@interface MFSecureMIMEPersonHeaderView : UIView {
    UIView *_signedLabel;
    UIView *_secureLabel;
    UIView *_warningLabel;
    UILabel *_label;
    BOOL _editing;
}


@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (nonatomic) BOOL editing;
@property (copy, nonatomic) NSString *explanationText;
@property (copy, nonatomic) NSString *secureLabelText;
@property (copy, nonatomic) NSString *signedLabelText;
@property (copy, nonatomic) NSString *warningLabelText;


+(id)_explanationLabelDefaultAttributes;
-(BOOL)showsButtons;
-(CGFloat)heightOfBottomMargin;
-(CGFloat)heightThatFitsButtons;
-(CGFloat)heightThatFitsMainLabel:(struct CGSize )arg0 ;
-(CGFloat)heightThatFitsSubview:(id)arg0 padding:(CGFloat)arg1 ;
-(CGFloat)widthForSizingToFitSize:(struct CGSize )arg0 ;
-(id)_secureLabel;
-(id)_signedLabel;
-(id)_warningLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_insert:(BOOL)arg0 subview:(id)arg1 ;
-(void)_setText:(id)arg0 forLabel:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif