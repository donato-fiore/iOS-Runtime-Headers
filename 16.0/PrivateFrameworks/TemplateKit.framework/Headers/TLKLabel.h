// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKLABEL_H
#define TLKLABEL_H

@class UILabel, UIFont;


#import "TLKFormattedText.h"
#import "TLKMultilineText.h"
#import "TLKRichText.h"

@interface TLKLabel : UILabel

@property NSUInteger adjustedProminence; // ivar: _adjustedProminence
@property BOOL attributedTextExplicitelySet; // ivar: _attributedTextExplicitelySet
@property BOOL attributedTextUpdateDisabled; // ivar: _attributedTextUpdateDisabled
@property BOOL attributedTextUpdateSkipped; // ivar: _attributedTextUpdateSkipped
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property BOOL hasCustomTextColor; // ivar: _hasCustomTextColor
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain) UIFont *originalFont; // ivar: _originalFont
@property (retain, nonatomic) UILabel *overlayLabelForNonColoredGlyphs; // ivar: _overlayLabelForNonColoredGlyphs
@property (nonatomic) NSUInteger prominence; // ivar: _prominence
@property (retain, nonatomic) TLKRichText *richText; // ivar: _richText
@property (nonatomic) BOOL supportsColorGlyphs; // ivar: _supportsColorGlyphs


+(id)primaryLabel;
+(id)secondaryLabel;
+(id)tertiaryLabel;
-(BOOL)hasEmphasizedFormattingInRichText;
-(id)init;
-(id)initWithProminence:(NSUInteger)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)loadInlineImages;
-(void)performBatchUpdates:(id)arg0 ;
-(void)setAttributedStringValue:(id)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFont:(id)arg0 keepOriginal:(BOOL)arg1 ;
-(void)setLineBreakMode:(NSInteger)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setStringValue:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateAdjustedProminence;
-(void)updateAttributedText;
-(void)updateWithAttributedString:(id)arg0 ;
-(void)updateWithString:(id)arg0 ;


@end


#endif