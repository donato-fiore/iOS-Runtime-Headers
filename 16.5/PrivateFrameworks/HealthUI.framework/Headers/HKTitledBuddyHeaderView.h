// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTITLEDBUDDYHEADERVIEW_H
#define HKTITLEDBUDDYHEADERVIEW_H

@class UIView, UITextView, UIButton, NSString, NSLayoutConstraint, UILabel;
@protocol HKTitledBuddyHeaderViewDelegate;



@interface HKTitledBuddyHeaderView : UIView {
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSString *_bodyText;
    NSInteger _bodyTextAlignment;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
}


@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) NSInteger bodyTextAlignment;
@property (weak, nonatomic) NSObject<HKTitledBuddyHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;


-(CGFloat)bottomPadding;
-(id)_attributedBodyTextWithString:(id)arg0 alignment:(NSInteger)arg1 ;
-(id)initWithTopInset:(CGFloat)arg0 linkButtonTitle:(id)arg1 ;
-(void)_linkButtonTapped:(id)arg0 ;
-(void)_updateBodyTextViewConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)deactivateDefaultTitleLabelBaselineConstraint;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif