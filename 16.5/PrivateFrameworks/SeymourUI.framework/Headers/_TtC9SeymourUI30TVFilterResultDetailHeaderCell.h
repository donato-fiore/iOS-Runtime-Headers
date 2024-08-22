// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI30TVFILTERRESULTDETAILHEADERCELL_H
#define _TTC9SEYMOURUI30TVFILTERRESULTDETAILHEADERCELL_H

@class UICollectionViewCell, UILabel, NSArray;



@interface _TtC9SeymourUI30TVFilterResultDetailHeaderCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? artworkView;
    ? floatingView;
    ? titleLabel;
    ? subtitleLabel;
    ? actionLabel;
    ? labelStackView;
    ? buttonStackView;
    ? focusGuide;
    ? labelStackViewTrailingConstraint;
}


@property (nonatomic, readonly) UILabel *accessibilityActionLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)primaryActionButtonPressed:(id)arg0 ;
-(void)secondaryActionButtonPressed:(id)arg0 ;


@end


#endif