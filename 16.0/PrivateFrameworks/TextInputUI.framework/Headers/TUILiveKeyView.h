// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUILIVEKEYVIEW_H
#define TUILIVEKEYVIEW_H

@class UIView, NSLayoutConstraint, NSString, UILabel, UIKBRenderConfig, UIImageView, UIKBRenderTraits;


#import "TUIDrawingView.h"

@interface TUILiveKeyView : UIView

@property (retain, nonatomic) TUIDrawingView *backgroundMaskView; // ivar: _backgroundMaskView
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) NSLayoutConstraint *horizontalContentConstraint; // ivar: _horizontalContentConstraint
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic) BOOL isShift; // ivar: _isShift
@property (nonatomic) BOOL isShowingHighlight; // ivar: _isShowingHighlight
@property (retain, nonatomic) NSString *keyCap; // ivar: _keyCap
@property (retain, nonatomic) TUIDrawingView *keyCapBackground; // ivar: _keyCapBackground
@property (retain, nonatomic) TUIDrawingView *keyCapShadow; // ivar: _keyCapShadow
@property (retain, nonatomic) UILabel *keyLabel; // ivar: _keyLabel
@property (nonatomic) NSInteger keyStyle; // ivar: _keyStyle
@property (retain, nonatomic) NSLayoutConstraint *labelBottom; // ivar: _labelBottom
@property (retain, nonatomic) NSLayoutConstraint *labelLeading; // ivar: _labelLeading
@property (retain, nonatomic) NSLayoutConstraint *labelTrailing; // ivar: _labelTrailing
@property (nonatomic) NSInteger layoutShape; // ivar: _layoutShape
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (retain, nonatomic) UIImageView *symbolImageView; // ivar: _symbolImageView
@property (retain, nonatomic) UIKBRenderTraits *traits; // ivar: _traits
@property (nonatomic) BOOL usesBlueBackground; // ivar: _usesBlueBackground
@property (nonatomic) BOOL usesImage; // ivar: _usesImage
@property (retain, nonatomic) NSLayoutConstraint *verticalContentConstraint; // ivar: _verticalContentConstraint


-(BOOL)keyIsControlType:(id)arg0 ;
-(BOOL)keyIsSpaceType:(id)arg0 ;
-(BOOL)keyIsStringType:(id)arg0 ;
-(id)controlKeyColor;
-(id)controlShadowColor;
-(id)fontForLabel;
-(id)fontForSymbolStyle:(id)arg0 ;
-(id)highlightedControlKeyColor;
-(id)highlightedKeyCapColor;
-(id)imageWithName:(id)arg0 ;
-(id)initWithKey:(id)arg0 renderTraits:(id)arg1 displayContents:(id)arg2 ;
-(id)labelForKeyCap:(id)arg0 ;
-(id)nameFromControlType:(int)arg0 ;
-(id)roundedRectForRect:(struct CGRect )arg0 ;
-(id)shadowColor;
-(id)shadowPathForRect:(struct CGRect )arg0 ;
-(id)symbolImageConfigForRenderTraits:(id)arg0 traitCollection:(id)arg1 ;
-(struct UIEdgeInsets )drawingInsets;
-(void)keyWithLabel;
-(void)keyWithSymbolView;
-(void)layoutSubviews;
-(void)makeKeyBackgrounds;
-(void)updateFontSize:(CGFloat)arg0 ;
-(void)updateKeyStyle:(NSInteger)arg0 ;
-(void)updateLabelInsets;
-(void)updateLabelText:(id)arg0 ;
-(void)updateLabelWeight:(NSInteger)arg0 ;
-(void)updateRenderTraits:(id)arg0 displayContents:(id)arg1 ;
-(void)updateSymbolInsets;


@end


#endif