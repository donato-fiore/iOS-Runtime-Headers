// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVLABEL_H
#define AVLABEL_H

@class UIView, NSAttributedString, NSString, UIFont, UILabel, UIActivityIndicatorView, NSLayoutConstraint;
@protocol AVPlaybackControlsViewItem;


#import "AVLayoutItemAttributes.h"

@interface AVLabel : UIView <AVPlaybackControlsViewItem>



@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly, nonatomic) UILabel *labelIfLoaded;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (nonatomic) NSInteger loadingIndicatorAlignment; // ivar: _loadingIndicatorAlignment
@property (retain, nonatomic) NSLayoutConstraint *loadingIndicatorLeftAlignmentConstraint; // ivar: _loadingIndicatorLeftAlignmentConstraint
@property (retain, nonatomic) NSLayoutConstraint *loadingIndicatorRightAlignmentConstraint; // ivar: _loadingIndicatorRightAlignmentConstraint
@property (nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (nonatomic) BOOL showsLoadingIndicator; // ivar: _showsLoadingIndicator
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )minimumSize;
-(void)_updateLayoutItem;
-(void)didMoveToSuperview;
-(void)tintColorDidChange;
-(void)updateConstraints;


@end


#endif