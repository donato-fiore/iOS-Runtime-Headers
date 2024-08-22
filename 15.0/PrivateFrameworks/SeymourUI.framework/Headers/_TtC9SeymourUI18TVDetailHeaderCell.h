// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI18TVDETAILHEADERCELL_H
#define _TTC9SEYMOURUI18TVDETAILHEADERCELL_H

@class UICollectionViewCell, UILabel, UITextView, NSArray;



@interface _TtC9SeymourUI18TVDetailHeaderCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? onElementAppearance;
    ? onElementDisappearance;
    ? onVisibleBoundsChange;
    ? onImpressionableBoundsChange;
    ? buttonStackView;
    ? descriptionStack;
    ? descriptionTextView;
    ? traitsTextView;
    ? captionTagsLabel;
    ? buttons;
    ? buttonActions;
    ? focusContainerGuide;
    ? layout;
    ? traitsWidthConstraint;
    ? accessibilityMediaTags;
}


@property (nonatomic, readonly) UILabel *accessibilityCaptionTagsLabel;
@property (nonatomic, readonly) UITextView *accessibilityDescriptionLabel;
@property (nonatomic, copy) NSArray *accessibilityMediaTags;
@property (nonatomic, readonly) UITextView *accessibilityTraitsLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleTappedButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif