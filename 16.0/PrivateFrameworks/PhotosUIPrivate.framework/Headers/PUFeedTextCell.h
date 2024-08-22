// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUFEEDTEXTCELL_H
#define PUFEEDTEXTCELL_H

@class UIButton, UILabel, UIImageView, NSAttributedString, UIImage;


#import "PUFeedCell.h"

@interface PUFeedTextCell : PUFeedCell

@property (retain, nonatomic, setter=_setButton:) UIButton *_button; // ivar: __button
@property (retain, nonatomic, setter=_setDetailLabel:) UILabel *_detailLabel; // ivar: __detailLabel
@property (retain, nonatomic, setter=_setIconImageView:) UIImageView *_iconImageView; // ivar: __iconImageView
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label; // ivar: __label
@property (retain, nonatomic) NSAttributedString *attributedDetailText; // ivar: _attributedDetailText
@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) NSInteger buttonHorizontalAlignment; // ivar: _buttonHorizontalAlignment
@property (nonatomic) CGFloat buttonPadding; // ivar: _buttonPadding
@property (nonatomic) NSInteger buttonSize; // ivar: _buttonSize
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (nonatomic) NSInteger iconLocation; // ivar: _iconLocation
@property (nonatomic) UIOffset iconOffset; // ivar: _iconOffset
@property (nonatomic) UIEdgeInsets iconPadding; // ivar: _iconPadding
@property (nonatomic) NSInteger numberOfDetailTextLines; // ivar: _numberOfDetailTextLines
@property (nonatomic) NSInteger numberOfTextLines; // ivar: _numberOfTextLines
@property (nonatomic) BOOL shouldUseAccessibilityLayout; // ivar: _shouldUseAccessibilityLayout
@property (nonatomic) BOOL shouldUseOpaqueBackground; // ivar: _shouldUseOpaqueBackground
@property (nonatomic) NSInteger tappableArea; // ivar: _tappableArea
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) CGFloat textDetailTextSpacing; // ivar: _textDetailTextSpacing


-(BOOL)shouldRecognizerTap:(id)arg0 ;
-(id)_delegate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_iconSize;
-(struct CGSize )_maximumPossibleTextSizeForButtonWithType:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(struct CGSize )_textSizeForButtonWithType:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureButton:(id)arg0 withType:(NSInteger)arg1 size:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleButton:(id)arg0 ;
-(void)_invalidateCachedTextSizes;
-(void)_updateButtonAnimated:(BOOL)arg0 ;
-(void)_updateDetailLabel;
-(void)_updateIconImageView;
-(void)_updateLabelsBackgroundColor;
-(void)_updateShouldUseAccessibilityLayout;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif