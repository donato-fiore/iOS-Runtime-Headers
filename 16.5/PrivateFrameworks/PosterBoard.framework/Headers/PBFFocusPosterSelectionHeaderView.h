// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFFOCUSPOSTERSELECTIONHEADERVIEW_H
#define PBFFOCUSPOSTERSELECTIONHEADERVIEW_H

@class UICollectionReusableView, UIStackView, UIView, NSLayoutConstraint, UILabel, NSAttributedString, NSString;



@interface PBFFocusPosterSelectionHeaderView : UICollectionReusableView {
    UIStackView *_stackView;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorViewHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (copy, nonatomic) NSAttributedString *attributedSubtitle; // ivar: _attributedSubtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createSeparatorView;
-(void)_createStackView;
-(void)_createTitleLabel;
-(void)_updateSeparatorHeightConstraint;
-(void)didMoveToWindow;
-(void)prepareForReuse;


@end


#endif