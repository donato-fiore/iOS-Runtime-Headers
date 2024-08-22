// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNATOMVIEW_H
#define CNATOMVIEW_H

@class UIDefaultKeyboardInput, UIColor, UIView, UILabel, UIActivityIndicatorView, NSString, UIImageView, UIFont;
@protocol CNChevronButtonMenuDelegate, CNAtomViewResembling;


#import "CNModernAtomBackgroundView.h"
#import "CNModernAtomIconView.h"

@interface CNAtomView : UIDefaultKeyboardInput <CNChevronButtonMenuDelegate, CNAtomViewResembling>

 {
    UIColor *_effectiveTintColor;
    NSUInteger _disabledPresentationOptions;
    UIView *_baselineView;
    CNModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    UILabel *_overlayLabelForNonColoredGlyphs;
    BOOL _wrappingSupported;
    BOOL _cachedIsWrappingEnabled;
    int _separatorStyle;
}


@property (readonly, nonatomic) CNModernAtomIconView *accessoryIconView; // ivar: _accessoryIconView
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic) CNModernAtomBackgroundView *backgroundView;
@property (readonly, nonatomic) CNModernAtomIconView *badgeIconView; // ivar: _badgeIconView
@property (readonly, nonatomic) CGPoint baselinePoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImageView *downwardChevronImageView; // ivar: _downwardChevronImageView
@property (readonly, nonatomic) UIEdgeInsets edgeInsets;
@property (readonly, nonatomic) NSUInteger effectivePresentationOptions;
@property (readonly, nonatomic) UIColor *effectiveTintColor;
@property (nonatomic) CGFloat firstLineIndent; // ivar: _firstLineIndent
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesVIPIndicator;
@property (nonatomic) BOOL isPrimaryAddressAtom; // ivar: _isPrimaryAddressAtom
@property (nonatomic) NSUInteger presentationOptions; // ivar: _presentationOptions
@property (nonatomic) CGFloat scale; // ivar: _scalingFactor
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) CGRect selectionFrame;
@property (nonatomic) BOOL separatorHidden; // ivar: _separatorHidden
@property (nonatomic) BOOL separatorIsLeftAligned; // ivar: _separatorIsLeftAligned
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _label


+(BOOL)presentationOptions:(*NSUInteger)arg0 encodedIntoAddress:(id)arg1 ;
+(CGFloat)defaultHeight;
+(CGFloat)horizontalPadding;
+(id)_SMSTintColor;
+(id)_badgeImagesForPresentationOptions:(NSUInteger)arg0 iconOrder:(*NSUInteger)arg1 orderingLength:(NSUInteger)arg2 tintColor:(id)arg3 large:(BOOL)arg4 variant:(int)arg5 ;
+(id)_clearBackgroundTextTintColor;
+(id)_defaultLabelAttributesWithFont:(id)arg0 wrappingEnabled:(BOOL)arg1 ;
+(id)_defaultLabelAttributesWithWrappingEnabled:(BOOL)arg0 ;
+(id)_defaultTintColor;
+(id)_downtimeBlockedTintColor;
+(id)_faceTimeTintColor;
+(id)_faceTimeUnresolvedColor;
+(id)_failureTintColor;
+(id)_hoveredDefaultTintColor;
+(id)_hoveredDowntimeBlockedTintColor;
+(id)_hoveredFailureTintColor;
+(id)_hoveredSMSTintColor;
+(id)_newTextLabel;
+(id)defaultFont;
+(id)primaryAtomFont;
+(struct CGPoint )defaultBaselinePoint;
-(BOOL)appearsSelected;
-(BOOL)isWrappingEnabled;
-(CGFloat)_leftInset;
-(CGFloat)_leftPadding;
-(CGFloat)_rightInset;
-(CGFloat)_rightPadding;
-(CGFloat)preferredWidth;
-(CGFloat)preferredWidthWithSizeConstraints:(struct CGSize )arg0 ;
-(id)_centeredTextAttachmentWithImage:(id)arg0 ;
-(id)_chevronTextAttachment;
-(id)initWithFrame:(struct CGRect )arg0 presentationOptions:(NSUInteger)arg1 separatorStyle:(int)arg2 wrappingSupported:(BOOL)arg3 ;
-(id)menuConfigurationForChevronButton;
-(id)viewForLastBaselineLayout;
-(int)_preferredIconVariant;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidatePresentationOptions;
-(void)_setPresentationOption:(NSUInteger)arg0 enabled:(BOOL)arg1 ;
-(void)_setupOverlayLabelForNonColoredGlyphs;
-(void)_updateActivityIndicator;
-(void)_updateCompositingFilters;
-(void)_updateFontIfNecessary;
-(void)_updateIconViewsSemanticContentAttribute;
-(void)_updateLabelAttributes;
-(void)_updateOverlayLabelText;
-(void)_updateSubviewsForWrapping;
-(void)appendPresentationOption:(NSUInteger)arg0 ;
-(void)clearPresentationOption:(NSUInteger)arg0 ;
-(void)displaySelectionChangeWithAnimation:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)performBuildInAnimationFromTextColor:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)setupOverlayLabelTextForEmojiRanges:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif