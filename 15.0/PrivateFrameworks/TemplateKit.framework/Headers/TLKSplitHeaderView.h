// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKSPLITHEADERVIEW_H
#define TLKSPLITHEADERVIEW_H

@class NUIContainerGridView, NSString, NUIContainerStackView, NUIContainerBoxView;
@protocol NUIContainerViewDelegate;


#import "TLKView.h"
#import "TLKMultilineText.h"
#import "TLKLabel.h"
#import "TLKImage.h"
#import "TLKImageView.h"
#import "TLKEmbossedLabel.h"
#import "TLKStackView.h"

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate>



@property (retain, nonatomic) TLKMultilineText *centerLeadingTitle; // ivar: _centerLeadingTitle
@property (retain, nonatomic) TLKLabel *centerLeadingTitleLabel; // ivar: _centerLeadingTitleLabel
@property (retain, nonatomic) TLKMultilineText *centerTrailingTitle; // ivar: _centerTrailingTitle
@property (retain, nonatomic) TLKLabel *centerTrailingTitleLabel; // ivar: _centerTrailingTitleLabel
@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKImage *leadingImage; // ivar: _leadingImage
@property (retain, nonatomic) TLKImageView *leadingImageView; // ivar: _leadingImageView
@property (retain, nonatomic) TLKMultilineText *leadingSubtitle; // ivar: _leadingSubtitle
@property (retain, nonatomic) TLKLabel *leadingSubtitleLabel; // ivar: _leadingSubtitleLabel
@property (retain, nonatomic) TLKMultilineText *leadingTitle; // ivar: _leadingTitle
@property (retain, nonatomic) TLKLabel *leadingTitleLabel; // ivar: _leadingTitleLabel
@property (nonatomic) BOOL shouldBadgeSubtitle; // ivar: _shouldBadgeSubtitle
@property (retain, nonatomic) TLKMultilineText *subtitle1; // ivar: _subtitle1
@property (retain, nonatomic) TLKLabel *subtitle1Label; // ivar: _subtitle1Label
@property (retain, nonatomic) TLKMultilineText *subtitle2; // ivar: _subtitle2
@property (retain, nonatomic) TLKEmbossedLabel *subtitle2Label; // ivar: _subtitle2Label
@property (retain, nonatomic) NUIContainerStackView *subtitleStackView; // ivar: _subtitleStackView
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKMultilineText *title; // ivar: _title
@property (retain, nonatomic) NUIContainerBoxView *titleBoxView; // ivar: _titleBoxView
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) TLKStackView *titleStackView; // ivar: _titleStackView
@property (retain, nonatomic) TLKImage *trailingImage; // ivar: _trailingImage
@property (retain, nonatomic) TLKImageView *trailingImageView; // ivar: _trailingImageView
@property (retain, nonatomic) TLKMultilineText *trailingSubtitle; // ivar: _trailingSubtitle
@property (retain, nonatomic) TLKLabel *trailingSubtitleLabel; // ivar: _trailingSubtitleLabel
@property (retain, nonatomic) TLKMultilineText *trailingTitle; // ivar: _trailingTitle
@property (retain, nonatomic) TLKLabel *trailingTitleLabel; // ivar: _trailingTitleLabel
@property (nonatomic) BOOL useCompactWidth; // ivar: _useCompactWidth
@property (nonatomic) BOOL useLargeTitle; // ivar: _useLargeTitle


-(BOOL)secondRowIsHidden;
-(BOOL)usesDefaultLayoutMargins;
-(id)firstRowOfViews;
-(id)grid;
-(id)secondRowOfViews;
-(id)setupContentView;
-(id)thirdRowOfViews;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)observedPropertiesChanged;


@end


#endif