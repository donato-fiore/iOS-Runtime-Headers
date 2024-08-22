// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUILABELEDROUNDBUTTON_H
#define CCUILABELEDROUNDBUTTON_H

@class UIView, NSMutableDictionary, NSString, UIImage, UIColor, NSArray, UILabel;
@protocol MTVisualStylingRequiring;


#import "CCUIRoundButton.h"
#import "CCUICAPackageDescription.h"

@interface CCUILabeledRoundButton : UIView <MTVisualStylingRequiring>

 {
    NSMutableDictionary *_categoriesToVisualStylingProviders;
}


@property (retain, nonatomic) CCUIRoundButton *buttonView; // ivar: _buttonView
@property (nonatomic) NSString *contentSizeCategoryThreshold; // ivar: _contentSizeCategoryThreshold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDynamicLayoutEnabled) BOOL dynamicLayoutEnabled; // ivar: _dynamicLayoutEnabled
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // ivar: _glyphPackageDescription
@property (copy, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *highlightTintColor; // ivar: _highlightTintColor
@property (nonatomic) BOOL labelsVisible; // ivar: _labelsVisible
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL useAlternateBackground; // ivar: _useAlternateBackground


-(BOOL)_shouldUseLargeTextLayout;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 highlightTintColor:(id)arg2 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 highlightTintColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg0 highlightColor:(id)arg1 ;
-(id)initWithGlyphPackageDescription:(id)arg0 highlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(id)initWithHighlightColor:(id)arg0 useLightStyle:(BOOL)arg1 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_layoutLabels;
-(void)_setupLabelsBounds;
-(void)_updateFonts;
-(void)_visualStylingProvider:(id)arg0 didChangeForCategory:(NSInteger)arg1 outgoingVisualStylingProvider:(id)arg2 ;
-(void)buttonTapped:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif