// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI30TVROOTSHOWCASECAROUSELITEMCELL_H
#define _TTC9SEYMOURUI30TVROOTSHOWCASECAROUSELITEMCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell, UILabel;



@interface _TtC9SeymourUI30TVRootShowcaseCarouselItemCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? onElementAppearance;
    ? onElementDisappearance;
    ? onVisibleBoundsChange;
    ? onImpressionableBoundsChange;
    ? layout;
    ? carouselItemDelegate;
    ? artworkView;
    ? avPlayer;
    ? avPlayerLayer;
    ? blurView;
    ? buttonStackView;
    ? textStackView;
    ? captionLabel;
    ? titleLabel;
    ? subtitleLabel;
    ? focusContainerGuide;
    ? buttonWidthConstraint;
    ? buttons;
    ? buttonActions;
}


@property (nonatomic, readonly) UILabel *accessibilityCaptionLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)handleTappedButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)restartVideo;


@end


#endif