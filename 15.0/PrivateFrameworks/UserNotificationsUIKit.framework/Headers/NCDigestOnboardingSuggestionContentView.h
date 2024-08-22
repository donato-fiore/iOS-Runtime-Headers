// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCDIGESTONBOARDINGSUGGESTIONCONTENTVIEW_H
#define NCDIGESTONBOARDINGSUGGESTIONCONTENTVIEW_H

@class UIView, UILabel, UIImageView, UIButton, BSUIFontProvider, MTVisualStylingProvider, NSStringDrawingContext, NSString, NSArray, UIImage;
@protocol NCDigestOnboardingSuggestionContentDisplaying;



@interface NCDigestOnboardingSuggestionContentView : UIView <NCDigestOnboardingSuggestionContentDisplaying>

 {
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_imageView;
    UIButton *_button;
    UIView *_buttonBackgroundView;
    UIButton *_dismissButton;
    BSUIFontProvider *_fontProvider;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
    UIView *_pictogramView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (copy, nonatomic) id *buttonActionBlock; // ivar: _buttonActionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissActionBlock; // ivar: _dismissActionBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *suggestionButtonTitle;
@property (retain, nonatomic) UIImage *suggestionImage;
@property (copy, nonatomic) NSString *suggestionMessage;
@property (retain, nonatomic) UIView *suggestionPictogramView;
@property (copy, nonatomic) NSString *suggestionTitle;
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSUInteger)_maximumNumberOfLinesForMessageText;
-(NSUInteger)_maximumNumberOfLinesForTitleText;
-(NSUInteger)_numberOfLinesForMessageTextInFrame:(struct CGRect )arg0 ;
-(NSUInteger)_numberOfLinesForText:(id)arg0 inFrame:(struct CGRect )arg1 font:(id)arg2 maximum:(NSUInteger)arg3 ;
-(NSUInteger)_numberOfLinesForTitleTextInFrame:(struct CGRect )arg0 ;
-(id)_fontProvider;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_adjustedRectForLabelLayoutFromRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_highlightButton:(id)arg0 ;
-(void)_layoutButton;
-(void)_layoutDismissButton;
-(void)_layoutMessageLabel;
-(void)_layoutSuggestionVisualView;
-(void)_layoutTitleLabel;
-(void)_setFontProvider:(id)arg0 ;
-(void)_unhighlightButton:(id)arg0 ;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForButtonLabel;
-(void)_updateTextAttributesForMessageLabel;
-(void)_updateTextAttributesForTitleLabel;
-(void)_updateVisualStylingOfImageView:(id)arg0 ifSymbolImageWithStyle:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif