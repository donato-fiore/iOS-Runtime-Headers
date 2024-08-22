// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFRECIPIENTTABLEVIEWCELL_H
#define MFRECIPIENTTABLEVIEWCELL_H

@class UITableViewCell, UIColor, NSArray, UILabel;


#import "MFComposeRecipient.h"

@interface MFRecipientTableViewCell : UITableViewCell {
    MFComposeRecipient *_recipient;
    UIColor *_tintColor;
    BOOL _shouldHideDetailLabel;
}


@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (nonatomic) BOOL shouldDimIrrelevantInformation; // ivar: _shouldDimIrrelevantInformation
@property (nonatomic) BOOL shouldHighlightCompleteMatches; // ivar: _shouldHighlightCompleteMatches
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)_constrainedWidthForDetailViewWithAccessoryWidth:(CGFloat)arg0 containerWidth:(CGFloat)arg1 ;
+(CGFloat)_constrainedWidthForTitleViewWithAccessoryWidth:(CGFloat)arg0 containerWidth:(CGFloat)arg1 ;
+(CGFloat)_deviceSpecificLayoutMargin;
+(CGFloat)_realDetailButtonAccessoryMargin;
+(CGFloat)detailLineHeight;
+(CGFloat)height;
+(CGFloat)heightWithRecipient:(id)arg0 width:(CGFloat)arg1 ;
+(id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg0 constrainedToWidth:(CGFloat)arg1 overflowRecipients:(*id)arg2 useHighlighting:(BOOL)arg3 ;
+(id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg0 useHighlighting:(BOOL)arg1 ;
+(id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg0 withSortedRecipientList:(id)arg1 ;
+(id)_defaultTintColor;
+(id)_tintedAttributedString:(id)arg0 toColor:(id)arg1 shouldDim:(BOOL)arg2 ;
+(id)cellForRecipient:(id)arg0 ;
+(id)defaultDetailStringAttributes;
+(id)defaultTitleStringAttributes;
+(id)groupDetailStringAttributes;
+(id)highlightedDetailStringAttributes;
+(id)highlightedTitleStringAttributes;
+(id)identifier;
+(id)labelDetailStringAttributes;
+(id)regularTitleStringAttributes;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)recipient;
-(id)tintColor;
-(void)animateSnapshotOfLabel:(id)arg0 withBlock:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setRecipient:(id)arg0 ;
-(void)setTintColor:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateActiveConstraints;


@end


#endif